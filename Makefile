CLIB_ROOT = ../../CLIB
INC = -I./array/ -I./algoithm/
LNKDIR = -L./lib
LNK = 
SRC = ./src/*.cpp
CONF = ./conf

CC    = g++
CFLAG = -g #-O3 -ggdb -Wall -Wno-deprecated 

EXE  = test

all:
    $(CC) $(CFLAG) $(INC) $(LNKDIR) $(SRC) $(LNK) -o $(EXE)

clean: 
    rm -rf *.o
    rm -rf $(EXE)
