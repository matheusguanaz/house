#include <stdio.h>
#include <math.h>

int main(void){
	double q3, c;

	scanf("%lf", &c);
	if(c<=2){
		q3=1;
	}
	else if(c>2 && c<=6.9){
		q3= -37.1085 +41.91277*c - 15.7043 * pow(c, 2) + 2.417486 * pow(c, 3) - 0.091252* pow(c, 4);
	}
	else if(c>6.9 && c<=7.1){
		q3 = -4.69365 - 21.4593*c - 68.4561* pow(c, 2) + 21.638886*pow(c, 3) - 1.59165* (c, 4);
	}
	else if(c> 7.1 && c <=12){
		q3= -7698.19 + 3262.031 * c - 499.494 * pow(c, 2) + 33.1551* pow(c, 3) - 0.810613*pow(c, 4);
	}
	else{
		q3=3;
	}
	printf("%f\n", q3);

return 0;
}