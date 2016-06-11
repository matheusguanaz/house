#include <stdio.h>
#include <math.h>

int main(void){
	double q7, g;

	scanf("%lf", &g);
	if(g>100){
		q7=5;
	}
	else{
		q7=90.37* pow(2.7182818, (-0.0169 * g)) - 15*cos((0.0571*(g-30))) + 10,22* pow(2.718281828, (-0.231*g)) -0.8;
	}
	printf("%f\n", q7);
return 0;
}