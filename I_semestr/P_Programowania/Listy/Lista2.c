#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int j=1;
void linia(char *b);
void koniec();
void Zadanie_1a();
void Zadanie_1b();
void Zadanie_1c();
void Zadanie_2();
void Zadanie_3();
void Zadanie_4();
void Zadanie_5();
void Zadanie_6();
void Zadanie_7a();
void Zadanie_7b();
void Zadanie_7c();
void Zadanie_8();
void Zadanie_9();
void Zadanie_10();
void Zadanie_11();
void Zadanie_12();
int main(void){
		
	int a=3;
	int zadanie;
	char podpunkt, rpodpunkt=4;

	while(a){
	
		printf("Podaj numer zadania: ");
		scanf("%d",&zadanie);
		if(zadanie>=1&&zadanie<=12){
			
			switch (zadanie){
				case 1:
					/*
					while(rpodpunkt){
						printf("Podaj podpunkt (a,b,c): ");
	
						scanf(" %c", &podpunkt);				
						if(podpunkt=='a') rpodpunkt=1;
						else if(podpunkt=='b') rpodpunkt=2;
						else if(podpunkt=='c') rpodpunkt=3;
						else rpodpunkt=0;
						
						switch(rpodpunkt){
							case 1:
								linia();
								Zadanie_1a();
								break;						
							case 2:
								linia();
								Zadanie_1b();
								break;
							case 3:
								linia();
								Zadanie_1c();
								break;
							
						default:
							printf("Nie ma takiego podpunktu\n");
							rpodpunkt=0;
						}
					}*/
					
					
					
					linia("1");
					Zadanie_1a();
					koniec();
					break;
				case 2:
					linia("2");
					Zadanie_2();
					koniec();
					break;
				case 3:
					linia("3");
					Zadanie_3();
					koniec();
					break;						
				case 4:
					linia("4");
					Zadanie_4();
					koniec();
					break;			
				case 5:
					linia("5");
					Zadanie_5();
					koniec();
					break;			
				case 6:
					linia("6");
					Zadanie_6();
					koniec();
					break;			
				case 7:
					linia("7");
					Zadanie_7a();
					koniec();
					break;			
				case 8:
					linia("8");
					Zadanie_8();
					koniec();
					break;			
				case 9:
					linia("9");
					Zadanie_9();
					koniec();
					break;			
				case 10:
					linia("10");
					Zadanie_10();
					koniec();
					break;			
				case 11:
					linia("11");
					Zadanie_11();
					koniec();
					break;			
				case 12:
					linia("12");
					Zadanie_12();
					koniec();
					break;						
			
			
				
			}}else {
			printf("\nNie ma takiego zadania"); koniec();}

}

/*			 linia("1");
		Zadanie_1a();	
			 linia("1");
		Zadanie_1b();
			 linia("1");
		Zadanie_1c();	
*/
		Zadanie_9();
	return 0;
}

void linia(char* b){
	int i;
	printf("\n|Zadanie %s|",b);

	for(i=84;i>=0;i--){
		printf("_");
	}printf("\n\n");
}

void Zadanie_1a(){
	int a,b,c;
	printf("Podaj 3 liczby calkowite: \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nNajwieksza z cyfr: \n");
	if(a>b){
		if(a>c) printf("%d\n\n",a);
		else printf("%d\n\n",c);
	} else if(b>c) 
				printf("%d\n\n",b);
			else printf("%d\n\n",c);
}

void Zadanie_1b(){
	double a,b;
	bool c=true;
	while(c){
		printf("Podaj ujemne 2 liczby: \n");
		scanf("%lf%lf",&a,&b);
		
		if(a*b>0&&a+b<0){
			printf("\nIch suma wynosi: %.2f\n\n",a+b);
			c=false;
		}else printf("Podane liczby nie spelniaja warunkow\n\n");
	}
}

void Zadanie_1c(){
	double a,b;
	bool c=true;
	while(c){
		printf("Podaj 2 liczby: \n");
		scanf("%lf%lf",&a,&b);
		
		if(a*b>0){
			printf("\nIch suma wynosi: %.2f\n\n",a+b);
			c=false;
		}else printf("Podane liczby nie spelniaja warunkow\n\n");
	}
}

void Zadanie_2(){
	double a,b;

	printf("Podaj 2 liczby typu double, oddziel je za pomoca spacji:\n");
	scanf("%lf%lf",&a,&b);

	if(a>b) printf("%.1f jest wieksza od %.1f",a,b);
	else if(a==b) printf("%.1f jest rowna %.1f",a,b);
	else printf("%.1f jest wieksza od %.1f",b,a);	
}

void Zadanie_3(){
//funkcja liniowa 		x=b*-1/a;
	int a, b;
	
	printf("Podaj a i b:\n");
	scanf("%d%d", &a, &b);
	
	printf("Rownanie ma postac: %dx+%d=0\n",a,b);
	
	if(a!=0)	printf("Wynikiem jest: %.2f",b*-1.0/a);
	else if(b==0)	printf("Rownanie nieoznaczone");
	else printf("Rownanie sprzeczne");	
}

void Zadanie_4(){
	double a,b,c;
	printf("Podaj wspolczynniki a,b i c:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	
	printf("Rownanie ma postac: %.2lfx^2 + %.2lfx + %.2lf = 0\n",a,b,c);
	
	if(a==0) printf("Rownanie jest liniowe\n");
	else {
		
		double delta=(b*b)-(4*a*c);
		
		if(delta==0){
		printf("Ma jedno rozwiazanie: %.2lf\n", -1*b/2*a);
		
		}
		if(delta<0) printf("Nie ma rozwiazan\n");
		
		if(delta>0){
			printf("Ma dwa rozwiazania: ");
		
			double x1,x2;
	
		printf("%.2lf\t%.2lf",(-1*b)-sqrt(delta)/2*a, (-1*b)+sqrt(delta)/2*a);
		}				
	}
}

void Zadanie_5(){
	printf("Podaj sile wiatru w wezlach: ");
	double wind;
	scanf("%lf",&wind);
	printf("\n%.0f jest to: ", wind);
	if(wind<1) printf("Cisza\n\n");
	else if(wind>=1&&wind<=3) printf("Zefir\n\n");
	else if(wind>=4&&wind<=27) printf("Bryza\n\n");	
	else if(wind>=28&&wind<=47) printf("Wichura\n\n");	
	else if(wind>=48&&wind<=63) printf("Sztorm\n\n");	
	else printf("Huragan\n\n");	
	
}

void Zadanie_6(){
	printf("Podaj liczbe: ");
	double a;
	scanf("%lf",&a);
	printf("\nWartosc bezwzgledna to: ");
	a<0?printf("%.1f\n\n",a*-1.0):printf("%.1f\n\n",a);
	
}

void Zadanie_7a(){
	int a,b,c;
	printf("Podaj 3 liczby calkowite: \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nNajwieksza z cyfr: ");

	a>b?(a>c?(printf("%d\n\n",a)):(printf("%d\n\n",c))):(b>c?(printf("%d\n\n",b)):(printf("%d\n\n",c)));
	
}

void Zadanie_7b(){
	double a,b;

	printf("Podaj ujemne 2 liczby: \n");
	scanf("%lf%lf",&a,&b);
			
	(a*b>0&&a+b<0)?(printf("\nIch suma wynosi: %.2f\n\n",a+b)):(printf("\nPodane liczby nie spelniaja warunkow\n\n"));
			
}

void Zadanie_7c(){
	double a,b;

		printf("Podaj 2 liczby tych samych znakow: \n");
		scanf("%lf%lf",&a,&b);

	(a*b>0)?(printf("\nIch suma wynosi: %.2f\n\n",a+b)):(printf("\nPodane liczby nie spelniaja warunkow\n\n"));

}

void Zadanie_8(){
	printf("Podaj rok: \n");
	int rok;
	scanf("%d", &rok);
	if(rok%4==0&&(rok%100!=0||rok%400==0)) printf("\nRok jest przestepny\n\n");
	else printf("Rok nie jest przestepny\n\n");
	
	
}

void Zadanie_9(){
	int a=1, b=1;
	do{	if(a<1||a>3) printf("\n\nBlednie wprowadzone dane, sprobuj ponownie: \n");		
			printf("\n1-Powietrze\n2-Woda\n3-Stal\n\nWybierz osrodek: ");
			scanf("%d", &a);			
	}while(a<1||a>3);

	do{ if(b<=0) printf("\n\nOdleglosc nie moze byc mniejsza lub rowna zero, sprobuj ponownie: \n\n");
		printf("Wprowadz odleglosc jaka dzwiek ma przebyc (w metrach): ");
		scanf("%d", &b);
	}while(b<=0);
	
	printf("Czas ktory bedzie potrzebny na przebycie tej drogi: ");

	switch(a){
		case 1:
			printf("%d",343/b );			
			break;
		
		
		case 2:
			printf("%d",1490/b );		
			break;
		
		
		case 3:
			printf("%d",5100/b );		
			break;
	}printf(" sek\n\n");

}

void Zadanie_10(){
	double a, b;
	char c;
	int d = 6;

	printf("Podaj liczbe:\n");
	scanf("%lf", &a);
	printf("Podaj operator:\n");
	scanf(" %c", &c);
	printf("Podaj liczbe:\n");
	scanf("%lf", &b);

	if (c == '+')d = 1;
	if (c == '-')d = 2;
	if (c == '*')d = 3;
	if (c == ':')d = 4;
	if (c == '/')d = 4;

	printf("Wynikiem operacji jest: ");

	switch (d) {
	case 1:
		printf("%.2f", a + b);
		break;
	case 2:
		printf("%.2f", a - b);
		break;
	case 3:
		printf("%.2f", a * b);
		break;
	case 4:
		printf("%.2f", a / b);
		break;
	default:
		printf("Zly operator");
	}
}

void Zadanie_11(){
	
	int a;
	
	printf("Podaj liczbe punktow:\n");
	scanf("%d",&a);
	
	if(a<=100 && a>=0){
		printf("Ocena to: ");
		a/=10;	
		switch(a){
			case 6:
				printf("D");
				break;
			case 7:
				printf("C");
				break;
			case 8:
				printf("B");
				break;
			case 9:
				printf("A");
				break;
			case 10:
				printf("A");
				break;									
			default:
				printf("E");			
		}	
	}else printf("\nPodana liczba nie jest w przedziale 0-100");
}

void Zadanie_12(){
	char a;
	printf("Podaj 1 znak:\n");
	scanf(" %c",&a);
	
	if(a>=0&&a<=127){			
		printf("Jest to ");
		if((a<=47&&a>=0)||(a>57&&a<65)) printf("znak specjalny\n\n");
		if(a>47&&a<58) printf("cyfra\n\n");
		if(a>64)printf("litera\n\n");
	}else printf("Znaku nie ma w ASCII\n\n");
}
void koniec(){
	char a;
	printf("\n\nN-astepne zadanie\nW-yjscie\n");
	scanf(" %c",&a);
	if(a=='W'||a=='w')exit(1);
	int i;

	for(i=96;i>=0;i--){
		printf("_");
	}printf("\n\n");
}
