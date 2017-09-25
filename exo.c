//Fullname : Medet Khuzhabayev
//Group : 3EN04B
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char*argv[]){
    int flag = 0;
    for(int i = 1; i < argc; i++){
        if(strcmp(argv[i], "-n") == 0){
            flag = 1;
        }else{
            printf("%s", argv[i]);
            printf(" ");
        }
    }
    if(flag == 0){
        printf("\n");
    }
    return 0;
}
