#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include <klee/klee.h>

#include "user_logic.h"


int main(){
    char* user_id = (char*) malloc(100 * sizeof(char));
    char* name_input = (char*) malloc(100 * sizeof(char));

    klee_make_symbolic(user_id, 100 * sizeof(char), "user_id");
    klee_make_symbolic(name_input, 100 * sizeof(char), "name_input");

    strcpy(name_input, "nandan");
    
    return determine_user(name_input, user_id);
}
