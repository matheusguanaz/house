#include <stdio.h>
#include <math.h>

int main(void){
	double q2, b;

	scanf("%lf", &b);
	q2= 98.24034 - 34.7145 * (log10(b)) + 2.614267 *(pow(log10(b), 2)) + 0.107821 * (pow(log10(b), 3));

	printf("%f\n", q2);
return 0;
}