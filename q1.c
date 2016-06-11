#include <stdio.h>
#include <math.h>

int main(void){
	double q1, a, y1, y2, y3, y4, y5, d = 100.8, e = -106, f = -3745, indice=0;
	
	scanf("%lf", &a);      

    indice = d * exp ( pow( (a + e), 2 ) / f );

    printf("%f", indice);
return 0;
}