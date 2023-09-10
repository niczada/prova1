//questao 5
#include <stdio.h>
#include <math.h>
int main(){
double H;
double C;
double c;

printf("cateto 1: ");
scanf("%lf", &C);

printf("cateto 2: ");
scanf("%lf", &c);

H = (pow(C, 2) + pow(c, 2));
double result;
result = sqrt(H);

printf("a medida da hipotenusa é: %lf", result);

return 0;
}