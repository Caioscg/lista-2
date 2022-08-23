#include <stdio.h>
/**
* Retorna o n-ésimo termo da sequência de Fibonacci
* @param t1 primeiro termo da sequência
* @param t2 segundo termo da sequência
* @param n a posição do termo desejado da sequência
* @return o valor do n-ésimo termo da sequência
*/
int fibonacci( int t1, int t2, int n);
int main () {
    
    int t1, t2, t3, k, n, i=2;
    scanf("%d%d%d", &t1, &t2, &n);
    while (i<n) {
        t3=t1+t2;
        t1=t2;
        t2=t3;
        i++;
    }
    printf("%d\n", t3);
 
    return 0;
}