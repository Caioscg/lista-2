#include <stdio.h>
 
void converteEmNotasMoedas(int n, int * x100, int * x50, int * x10, int * x1);
 
int main () {
    int n, X, Y, Z, W;
    scanf("%d", &n);
    converteEmNotasMoedas(n, &X, &Y, &Z, &W);
    printf("NOTAS DE 100 = %d\n", X);
    printf("NOTAS DE 50 = %d\n", Y);
    printf("NOTAS DE 10 = %d\n", Z);
    printf("MOEDAS DE 1 = %d\n", W);
     
    return 0;
}
 
void converteEmNotasMoedas(int n, int * x100, int * x50, int * x10, int * x1) {
    *x100=n/100;
    *x50=(n%100)/50;
    *x10=((n%100)%50)/10;
    *x1=(((n%100)%50)%10);
 
}