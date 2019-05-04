//Fernando Bontorin, 31568343
//Guilherme, 31324101

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    char *fileName;
    if(argc==2){
        fileName = argv[1];
    }else{
        fileName = "output.txt";
    }
	return 0;
}