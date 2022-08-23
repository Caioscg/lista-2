#include <stdio.h>
#include <math.h>
 
int RaizesEq2Grau (double a, double b, double c, double * x1, double * x2);
 
int main () {
    double a, b, c, D, x1, x2;
    int r;
    scanf("%lf %lf %lf", &a, &b, &c);
    r = RaizesEq2Grau (a, b, c, &x1, &x2);
    if (r==1) 
        printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    else if (r==2)
        printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    else if (r==3) printf("RAIZES IMAGINARIAS\n");
    
 return 0;
}
 
int RaizesEq2Grau (double a, double b, double c, double * x1, double * x2) {
    double D=(b*b) - (4*a*c);
    double k;
    if(D>0) {
        *x1=(-b+sqrt(D))/(2*a);
        *x2=(-b-sqrt(D))/(2*a);
        if (*x1>*x2) {
             k=*x1;
             *x1=*x2;
             *x2=k;
        }
        return 1;
    }
    else if (D==0) {
        *x1=(-b+sqrt(D))/(2*a);
        return 2;
    }
    else 
    return 3;
}