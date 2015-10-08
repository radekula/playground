CC=gcc
CFLAGS=-c -std=c++14
CLIBS=-lstdc++ -L../. -lerrors
OBJ_DIR=obj
BIN_NAME=error_test




all: main.o
	$(CC) $(CLIBS) -o $(BIN_NAME) $(OBJ_DIR)/*.o


main.o: obj_dir main.cpp
	$(CC) $(CFLAGS) -o $(OBJ_DIR)/main.o main.cpp


obj_dir:
	@mkdir -p $(OBJ_DIR)


clean:
	rm -rf $(OBJ_DIR)/*.o $(BIN_NAME)
	rmdir $(OBJ_DIR)


test: all
	LD_LIBRARY_PATH=../. ./$(BIN_NAME)