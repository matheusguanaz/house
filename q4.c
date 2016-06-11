#include <stdio.h>
#include <math.h>

int main(void){
	double q4, d;

	scanf("%lf", &d);
	if(d>30){
		q4=2;
	}
	else{
		q4= 100.9571 - 10.7121 * d + 0.49544 * pow(d, 2) - 0.011167 * pow(d, 3) + 0.0001 * pow(d, 4);
	}

	printf("%f\n", q4);
return 0;
}