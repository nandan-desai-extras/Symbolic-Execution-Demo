#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char name[15];
    strcpy(name, argv[1]);
    if(strcmp("1", argv[2]) == 0){
        printf("Not authorized. You are not allowed to enter the admin space. Sorry!\n");
    }else{
        int id = atoi(argv[2]);
        if(id == 1){
            printf("Welcome to admin space, %s!\n", name);
        }else{
            printf("Welcome to user space, %s!\n", name);
        }
    }  
    return 0;
}