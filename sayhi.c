//Fullname : Medet Khuzhabayev
//Group : 3EN04B
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char*argv[]){
    char *lang = argv[0];
    strsep(&lang,"y");
    if(argc == 1){
        printf("%s",lang);
    }
    if(argc == 2){
        char *t = argv[1];
        if(strcmp("-k", t)==0 || strcmp("--kazakh", t)==0){
            printf("salem");
        }
        if(strcmp("-e", t)==0 || strcmp("--english", t)==0){
            printf("hi");
        }
        if(strcmp("-r", t)==0 || strcmp("--russian", t)==0){
            printf("privet");
        }
    }
    if(argc == 3){
        char *t = argv[1];
        if(strcmp("-k", t)==0 || strcmp("--kazakh", t)==0){
            printf("salem");
        }
        if(strcmp("-e", t)==0 || strcmp("--english", t)==0){
            printf("hi");
        }
        if(strcmp("-r", t)==0 || strcmp("--russian", t)==0){
            printf("privet");
        }
        if(strcmp("--name", t)==0){
            printf("%s", lang);
            printf(" ");
            printf("%s", argv[2]);
        }
    }
    if(argc == 4){
        char *t = argv[1];
        if(strcmp("-k", t)==0 || strcmp("--kazakh", t)==0){
            printf("salem ");
        }
        if(strcmp("-e", t)==0 || strcmp("--english", t)==0){
            printf("hi ");
        }
        if(strcmp("-r", t)==0 || strcmp("--russian", t)==0){
            printf("privet ");
        }
        char * name = argv[3];
        printf("%s", argv[3]);
    }
    return 0;
}
