SRC_DIR=./src
OBJ_DIR=./build
INC_DIR=./include
LIB_DIR=./lib
BIN_DIR=./bin

CC = g++
CPP_FLAGS = -Wall -pedantic -std=c++11 -I$(INC_DIR)
AR = ar

all: PetFera exportar

Animal: $(SRC_DIR)/Anfibio.cpp $(SRC_DIR)/Animal.cpp $(SRC_DIR)/Ave.cpp $(SRC_DIR)/Mamifero.cpp $(SRC_DIR)/Reptil.cpp $(INC_DIR)/Anfibio.h $(INC_DIR)/Animal.h $(INC_DIR)/Ave.h $(INC_DIR)/Mamifero.h $(INC_DIR)/Reptil.h
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Animal.cpp -o $(OBJ_DIR)/Animal.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/AnimalSilvestre.cpp -o $(OBJ_DIR)/AnimalSilvestre.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Nativo.cpp -o $(OBJ_DIR)/Nativo.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Exotico.cpp -o $(OBJ_DIR)/Exotico.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Mamifero.cpp -o $(OBJ_DIR)/Mamifero.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/MamiferoExotico.cpp -o $(OBJ_DIR)/MamiferoExotico.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/MamiferoNativo.cpp -o $(OBJ_DIR)/MamiferoNativo.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Ave.cpp -o $(OBJ_DIR)/Ave.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/AveExotica.cpp -o $(OBJ_DIR)/AveExotica.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/AveNativa.cpp -o $(OBJ_DIR)/AveNativa.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Reptil.cpp -o $(OBJ_DIR)/Reptil.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/ReptilExotico.cpp -o $(OBJ_DIR)/ReptilExotico.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/ReptilNativo.cpp -o $(OBJ_DIR)/ReptilNativo.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Anfibio.cpp -o $(OBJ_DIR)/Anfibio.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/AnfibioExotico.cpp -o $(OBJ_DIR)/AnfibioExotico.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/AnfibioNativo.cpp -o $(OBJ_DIR)/AnfibioNativo.o
	@echo "----------------------------------------------------------------------------"

Funcionario: $(SRC_DIR)/Funcionario.cpp $(SRC_DIR)/Tratador.cpp $(SRC_DIR)/Veterinario.cpp $(INC_DIR)/Funcionario.h $(INC_DIR)/Tratador.h $(INC_DIR)/Veterinario.h
	@echo "----------------------------------------------------------------------------"
	@echo "------------------ Compilando Arquivos de Objetos --------------------------"

	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Funcionario.cpp -o $(OBJ_DIR)/Funcionario.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Veterinario.cpp -o $(OBJ_DIR)/Veterinario.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Tratador.cpp -o $(OBJ_DIR)/Tratador.o
	
libPetFera.so: Funcionario Animal $(SRC_DIR)/auxiliar.cpp $(SRC_DIR)/mPetFera.cpp $(INC_DIR)/auxiliar.h $(INC_DIR)/mPetFera.h
	@echo "----------------------------------------------------------------------------"
	@echo "------------------ Compilando Biblioteca Dinâmica ------------------------"
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/mPetFera.cpp -o $(OBJ_DIR)/mPetFera.o
	@$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/auxiliar.cpp -o $(OBJ_DIR)/auxiliar.o
	@$(CC) -shared -Wl,-soname,libPetFera.so -o $(LIB_DIR)/$@ $(OBJ_DIR)/Animal.o $(OBJ_DIR)/Mamifero.o $(OBJ_DIR)/MamiferoExotico.o $(OBJ_DIR)/MamiferoNativo.o $(OBJ_DIR)/Ave.o $(OBJ_DIR)/AveExotica.o $(OBJ_DIR)/AveNativa.o $(OBJ_DIR)/Reptil.o $(OBJ_DIR)/ReptilExotico.o $(OBJ_DIR)/ReptilNativo.o $(OBJ_DIR)/Anfibio.o $(OBJ_DIR)/AnfibioExotico.o $(OBJ_DIR)/AnfibioNativo.o $(OBJ_DIR)/Funcionario.o $(OBJ_DIR)/Veterinario.o $(OBJ_DIR)/Tratador.o $(OBJ_DIR)/mPetFera.o $(OBJ_DIR)/auxiliar.o $(OBJ_DIR)/AnimalSilvestre.o $(OBJ_DIR)/Nativo.o $(OBJ_DIR)/Exotico.o
	@echo "----------------------------------------------------------------------------"

main2.o: $(SRC_DIR)/main2.cpp $(INC_DIR)/*
	@$(CC) $(CPP_FLAGS) -c $< -o $(OBJ_DIR)/$@

exportar.o:  $(SRC_DIR)/Exportar.cpp $(INC_DIR)/*
	@$(CC) $(CPP_FLAGS) -c $< -o $(OBJ_DIR)/$@

exportar: main2.o exportar.o libPetFera.so
	$(CC) $(CPP_FLAGS) -L$(LIB_DIR) -Wl,-rpath=$(LIB_DIR) -o $(BIN_DIR)/$@ $(OBJ_DIR)/main2.o $(OBJ_DIR)/exportar.o $(LIB_DIR)/libPetFera.so

main.o: $(SRC_DIR)/main.cpp $(INC_DIR)/*
	@$(CC) $(CPP_FLAGS) -c $< -o $(OBJ_DIR)/$@

PetFera: main.o libPetFera.so
	$(CC) $(CPP_FLAGS) -L$(LIB_DIR) -Wl,-rpath=$(LIB_DIR) -o $(BIN_DIR)/$@ $(OBJ_DIR)/main.o $(LIB_DIR)/libPetFera.so

debug: CPP_FLAGS += -g -O0
debug: PetFera exportar

.PHONY: main.o exportar.o libPetFera.so

dir:
	@mkdir bin build doc lib
	@echo "Diretórios criados."

clean:
	@rm -r bin/* build/* doc/* lib/*
	@echo "Arquivos de compilação deletados."