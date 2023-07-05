
int determine_user(char* name_input, char* user_id){
    char name[15];
    strcpy(name, name_input);
    if(strcmp("1", user_id) == 0){
        printf("Not authorized. You are not allowed to enter the admin space. Sorry!\n");
        return -1;
    }else{
        int id = atoi(user_id);
        if(id == 1){
            printf("Welcome to admin space, %s!\n", name);

            #ifdef SYM_TEST
                klee_assert(strcmp("1", user_id) == 0);
            #endif

        }else{
            printf("Welcome to user space, %s!\n", name);
        }
    }
    return 0;
}