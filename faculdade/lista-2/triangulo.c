#include <stdio.h>
#include <stdlib.h>

int main(){
    double a, b, c; scanf("%lf %lf %lf", &a, &b, &c);
    if(b + c > a && a + b > c && a + c > b){
        printf("Perimetro = %.1lf\n", a + b + c);
    }else{
        printf("Area = %.1lf\n", ((a + b)*c)/2);
    }
}