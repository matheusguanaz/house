#include <stdio.h>
#include <math.h>

int main(void){
	double q6, f;

	scanf("%lf", &f);
	if(f>10){
		q6=5;
	}
	else{
		q6= 79.7*(pow(f + 0.821, -1.15));
	}
	printf("%f\n", q6);
return 0;
}