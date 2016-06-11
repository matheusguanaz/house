#include <stdio.h>
#include <math.h>

int main(void){
	double q5, e;

	scanf("%lf", &e);
	if(e<=10){
		q5=-5.1*e+100.17;
	}
	else if(e>10 && e<=60){
		q5=-22.853*log(e) + 101.18;
	}
	else if(e>60 && e<=90){
		q5=10 000 000 000*pow(e, -5.1161);
	}
	else if(e>90){
		q5=1;
	}
	printf("%f\n", q5);
return 0;
}