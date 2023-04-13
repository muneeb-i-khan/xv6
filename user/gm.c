#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char* argv[]){
    if(argc < 2){
        printf("gm!\n");
    }
    else{
        printf("gm! %s\n",argv[1]);
    }
    exit(0);

}