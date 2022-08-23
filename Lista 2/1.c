#include <stdio.h>
/**
* Funcao que calcula o fatorial de um numero n
* @param n um numero inteiro positivo
* @return o fatorial de n
*/
unsigned long int fat( unsigned int n);
int main () {
    int n, fat=1, i=1;
    scanf("%d", &n);
    if (n==0) fat=1;
    else {
        while (i<=n) {
            fat=fat*i;
            i++;
        }
 
    }
    printf("%d! = %d", n, fat);
 
 
    return 0;
}