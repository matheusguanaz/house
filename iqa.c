#include <stdio.h>
#include <math.h>


int main(void){
	double a, b, c, d, e, f, g, h, i, q1, q2, q3, q4, q5, q6, q7, q8, q9, qt, t;
	char l[10]= "Ótima", j[10]= "Boa", k[12]="Aceitável", o[10]="Ruim", p[10]="Péssima";
	
	printf("Digite o Valor de %% Oxigênio Dissolvido (%%OD)) \n");
	scanf("%lf", &a);
	printf("Digite o Valor de Coliformes Fecais (CF) em NMP/100mL \n");
	scanf("%lf", &b);
	printf("Digite o Valor de pH \n");
	scanf("%lf", &c);
	printf("Digite o Valor de Demanda Bioquímica de Oxigênio(DBO) em mg/L \n");
	scanf("%lf", &d);
	printf("Digite o Valor de Nitrato Total(NT)) em mg/L) \n");
	scanf("%lf", &e);
	printf("Digite o Valor de Fosfato Total(FT) em mg/L) \n");
	scanf("%lf", &f);
	printf("Digite o Valor de Turbidez(Tu) em U.F.T \n");
	scanf("%lf", &g);
	printf("Digite o Valor de Sólidos Totais(ST) em mg/L\n");
	scanf("%lf", &h);
	printf("Digite o Valor de Variação de Temperatura em °C \n");
	scanf("%lf", &i);
	
	if(a==140){
		q1=47;
	}
	
	else{
		q1= 100.8*exp(pow(a + 106, 2)/ -3745);
	}
	
	if  (b>10000){
		q2=3;
	}
	else{
		q2 = 98.24034 - 34.7145 * (log10(b)) + 2.614267 *(pow(log10(b), 2)) + 0.107821 * (pow(log10(b), 3));
	}
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
	
	if(d>30){
		q4=2;
	}
	else{
		q4= 100.9571 - 10.7121 * d + 0.49544 * pow(d, 2) - 0.011167 * pow(d, 3) + 0.0001 * pow(d, 4);
	}
	if(e<=10){
		q5=-5.1*e+100.17;
	}
	else if(e>10 && e<=60){
		q5=-22.853*log(e) + 101.18;
	}
	else if(e>60 && e<=90){
		q5=10000000000*pow(e, -5.1161);
	}
	else if(e>90){
		q5=1;
	}
	if(f>10){
		q6=5;
	}
	else{
		q6= 79.7*(pow(f + 0.821, -1.15));
	}
	if(g>100){
		q7=5;
	}
	else{
		q7=90.37* pow(2.7182818, (-0.0169 * g)) - 15*cos((0.0571*(g-30))) + 10,22* pow(2.718281828, (-0.231*g)) -0.8;
	}
	if(h>500){
		q8=30;
	}
	else{
		q8= 133.17* (pow(2.7182818, (-0.0027 * h))) -53.17* (pow(2.7182818 , (-0.0141 * h))) + ((-6.2*(pow(2.7182818, (-0.00462*h)))) *sin(0.0146*h));

	}
	if(i>15){
		q9=93;
	}
	else if(i<=5){
		q9=93;
	}
	else{
		q9=93;
	}
	qt=( (a*0.17) + (b*0.15) + (c*0.12) + (d*0.10) + (e*0.10) + (f*0.10) + (g*0.10) + (h*0.08) + (i*0.08));
	
	if(qt<=100 && qt>80){
		printf("Valor do IQA: %f Qualidade da Água:%s\n", qt, l);
	}
	if(qt<=80 && qt>50){
		printf("Valor do IQA: %f Qualidade da Água:%s\n", qt, j);
	}
	if(qt<=50 && qt>36){
		printf("Valor do IQA: %f Qualidade da Água:%s\n", qt, k);
	}
	if(qt<=36 && qt>20){
		printf("Valor do IQA: %f Qualidade da Água:%s\n", qt, o);
	}
	if(qt<=20){
		printf("Valor do IQA: %f Qualidade da Água:%s\n", qt, p);
	}
return 0;
}