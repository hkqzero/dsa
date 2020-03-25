CLIB_ROOT = ../../CLIB
INC = -I./include/ -I./include/leetcode/
LNKDIR = -L./lib 
LNK = -ldl -lpthread -lrt 
SRC = ./src/*.cpp ./src/leetcode/*.cpp
CONF = ./conf

CC    = g++
CFLAG = -g -std=c++0x

EXE  = test

all:
	$(CC) $(CFLAG) $(INC) $(LNKDIR) $(SRC) $(LNK) -o $(EXE)

clean: 
	rm -rf *.o
	rm -rf $(EXE)
