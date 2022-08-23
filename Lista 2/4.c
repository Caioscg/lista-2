#include <stdio.h>
/**
* funcao numero perfeito
*
*
*
*/
 
int somaDivisores (int n, int k, int * t);
 
int main () {
    int n, k, t, r;
    scanf("%d", &n);
    r = somaDivisores (n, k, &t);
    if (r==1) printf("= %d (NUMERO PERFEITO)\n", t);
    else if (r==2) printf("= %d (NUMERO NAO E PERFEITO)\n", t);
    return 0;
}
 
int somaDivisores (int n, int k, int * t) {
    *t=1; k=1;
    printf("%d = 1 ", n);
    while (k<n-1) {
        k++;
        if (n%k==0) {
            printf("+ %d ", k);
            *t=*t+k;
        }
    }
    if (*t==n) return 1;
    else return 2;
 
}