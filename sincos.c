//Fullname : Medet Khuzhabayev
//Group : 3EN04B
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 #include <string.h>

int main(int argc, char*argv[]){
	char * output = "usage: sincos angle \n only sine: sincos -s angle \n only cosine: sincos -c angle \n";
	if(argc == 1){
		printf("%s", output);
	}
	if(argc == 2){
		double mynumber = atof(argv[1]);
		printf("%lf \n", sin(mynumber));
		printf("%lf \n", cos(mynumber));
	}
	if(argc == 3){
		if(strcmp("-s", argv[1]) == 0){
			double mynumber = atof(argv[2]);
			printf("%lf \n", sin(mynumber));
		}
		if(strcmp("-c", argv[1]) == 0){
			double mynumber = atof(argv[2]);
			printf("%lf \n", cos(mynumber));
		}
	}
	return 0;
}
