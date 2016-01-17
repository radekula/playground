CC=gcc
CFLAGS=-c -std=c++14 -I./include
CFLAGS_SHARED=-c -std=c++14 -fpic -I./include 
CLIBS=-lstdc++ -shared
CLIBS_TESTS=-lstdc++ -lboost_unit_test_framework
OBJ_DIR=obj
OBJ_DIR_TESTS=utests/obj
BIN_NAME=liberrors




all: errors.o
	$(CC) $(CLIBS) -o $(BIN_NAME).so $(OBJ_DIR)/*.o


errors.o: obj_dir src/error.cpp
	$(CC) $(CFLAGS_SHARED) -o $(OBJ_DIR)/error.o src/error.cpp

tests: utests/test.cpp all
	@mkdir -p $(OBJ_DIR_TESTS)
	$(CC) $(CFLAGS) -o $(OBJ_DIR_TESTS)/test.o utests/test.cpp
	$(CC) $(CLIBS_TESTS) -o utests-$(BIN_NAME) $(OBJ_DIR_TESTS)/*.o	

obj_dir:
	@mkdir -p $(OBJ_DIR)


clean:
	rm -rf $(OBJ_DIR)/* $(BIN_NAME).so $(BIN_NAME)-utest
	rmdir $(OBJ_DIR)
