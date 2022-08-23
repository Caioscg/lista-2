#include <stdio.h>
/**
* Funcao que calcula a raiz quadrada de n.
* @param n um numero real qualquer
* @param p precisao do calculos
* @return a raiz quadrada de n
*/
double raiz( double n, double r, double ra, double e, double E);
 
/**
* Valor absoluto de um numero qualquer
* @param n um numero real qualquer
* @return o valor absoluto de n
*/
double absoluto( double n, double r, double e);
 
int main () {
    double n, r, ra, e, E;
    scanf("%lf %lf", &n, &E); 
    e = absoluto (n, r, e);
    ra = raiz (n, r, ra, e, E);
    return 0;
}
 
double raiz ( double n, double r, double ra, double e, double E) {
    ra=1;
    r=1;
    e = absoluto (n, r, e);
    while (e>E) {
        r=(ra+(n)/ra)/2;
        e = absoluto (n, r, e);
        ra=r;
        printf("r: %.9lf, err: %.9lf\n", ra, e);
    }
 
    return ra;
}
 
double absoluto ( double n, double r, double e) {
    e = n - r*r;
    if (e<0) e=-e;
    return e;
}