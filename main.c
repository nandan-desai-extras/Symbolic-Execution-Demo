#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "user_logic.h"


int main(int argc, char *argv[]){
    if(argc != 3){
        fprintf(stderr,"*\t[Error] expected arguments\n");
        fprintf(stderr,"*\t[Error] ./a.out [name] [id]\n");
        return 1;
    }
    return determine_user(argv[1], argv[2]);
}