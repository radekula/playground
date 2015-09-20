all: error.o
		gcc -c -std=c++14 -lstdc++ -fpic -o error.o error.cpp
		gcc -shared -o liberrors.so error.o
