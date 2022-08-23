#include <stdio.h>
#include <math.h>
 
/**
* Funcao que calcula a potencia de p mais proximo a n.
* @param n valor inteiro
* @param p valor da potencia
* @return retorna o valor da potencia mais proxima.
*/
int next_power( int n, int p );
 
int main () {
    int n, p, k=0, x=1;
    scanf("%d %d", &n, &p);
    if (p==0) return 0;
    while (x<=n) {
        x=pow(k , p);
        k++;
    }
    k=k-2;
    if (n==0) k=-1;
    x = next_power(n, p);
    printf("%d -> %d^%d = %d\n", n, k, p, x);
    return 0;
}
 
int next_power( int n, int p ) {
    int k=0, x=1;
    while (x<=n) {
        x=pow(k , p);
        k++;
    }
    k=k-2;
    if (n==0) k=-1;
    x=pow(k , p);
    return x;
}