#include <stdio.h>
 
double compute_pi( int n, double pi );
 
int main () {
    int n;
    double pi;
    scanf("%d", &n);
    pi=compute_pi( n, pi );
    printf("%.12lf\n", pi);
    return 0;
 
}
 
double compute_pi( int n, double pi ) {
    int k=0;
    double x=2, y=1;
    pi=2;
    while (k<n) {
        pi = pi * (x/y);
        k++;
        if (k>=n) break;
        y=y+2;       
        pi = pi * (x/y);
        k++;
        x=x+2;           
    }
 
return pi;
}