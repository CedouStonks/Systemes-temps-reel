#include <stdio.h>

void compare(int a, int b){
    if (a==b){
        printf("les 2 valeurs sont égales\n");
        }
    else if (a<b){
        printf("la valeur %i est la plus grande\n",b);
    }
    else {
        printf("la valeur %i est la plus grande\n",a);
    }
}