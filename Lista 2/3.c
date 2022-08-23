#include <stdio.h>
/**
* funcao pega um numero de tres digitos e o devolve invertido;
*@param N numero de tres digitos;
*@param a primeiro digito do numero invertido;
*@param b segundo digito do numero invertido;
*@param c terceiro digito do numero invertido;
*@return o valor de n;
*/
int separaDigitos (int N, int a, int b, int c, int n);
 
int main () {
    int N, n, a, b, c;
    scanf("%d", &N);
    n = separaDigitos(N, a, b, c, n);
    printf("%d\n", n);
 
   return 0;
}
 
int separaDigitos (int N, int a, int b, int c, int n) {
    a=N/100;
    b=(N%100)/10;
    c=N%10;
    n=((c*100) + (b*10) + a);
    return n;
}