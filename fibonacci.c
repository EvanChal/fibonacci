#include <stdio.h>



int main(){

    int a = 0;
    int b = 1;
    int c = 0;
    int d = 0;
    int count = 0 ;

    printf("Veuillez entrer le nombre d'itération voulu\n");
    scanf("%d", &c);

    while (count < c){

        d = a + b;
        a = b;
        b = d;
        printf("%d / ", a);
        count+=1;

    }

}