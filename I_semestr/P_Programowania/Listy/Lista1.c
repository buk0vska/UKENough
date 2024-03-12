#include <stdio.h>
#include <math.h>
#define PI 3.14159
void linia();
void Zadanie_1();
void Zadanie_2();
void Zadanie_3();
void Zadanie_4();
void Zadanie_5();
void Zadanie_6();
void Zadanie_7();
void Zadanie_8();
void Zadanie_9();
void Zadanie_10();
void Zadanie_11();
void Zadanie_12();
void Zadanie_13();
int j=1;


int main(void){

		linia();
	Zadanie_1();
		linia();
	Zadanie_2();	
		linia();	
	Zadanie_3();	
		linia();
	Zadanie_4();
		linia();
	Zadanie_5();
		linia();
	Zadanie_6();
		linia();
	Zadanie_7();
		linia();
	Zadanie_8();
		linia();
	Zadanie_9();
		linia();
	Zadanie_10();	
		linia();
	Zadanie_11();
		linia();
	Zadanie_12(); 
		linia();
	Zadanie_13();
	return 0;
}

void Zadanie_1(){
	printf("\n Zuzanna Bukowska\n\"Podstawy Programowania 2023/2024\"\n\n" );
}

void Zadanie_2(){
	printf("_________________________________\n\tZuzanna Bukowska\t\n_________________________________\n\n\t  A oto moja\n\n\t   WIZYTOWKA \n\n*_______________________________*\n\n" );
}

void Zadanie_3(){
	char a='a',b='b';
	int c=1,d=2;
	float e=3.3,f=4.4;
	double g=5.5,h=6.6;
	printf("char = %c, %c\nint = %d, %d\nfloat = %.1f, %.1f\ndouble = %.1f, %.1f\n\n",a,b,c,d,e,f,g,h);
}

void Zadanie_4(){
	int wiek=20;
	printf("Moj wiek w dniach to: %d\n\n", wiek*365);
}

void Zadanie_5(){
	double r=2.13,h=5.6,l;
// double pow(double podstawa, double dowolna_potega);	#include <math.h	
	l=sqrt(pow(r,2)+pow(h,2));		
	printf("r = %.2f\nh = %.1f\nObjetosc stozka: %.2f\nPole powierzchni calkowitej stozka: %.2f\n\n",r,h,h/3.0*PI*pow(r,2),PI*r*(r+l));
}

void Zadanie_6(){
	printf("Podaj dowolny znak:\n");
	char a;
	scanf(" %c", &a);
	printf("\nKod znaku %c = %d\n\n",a,a);
}

void Zadanie_7(){
	printf("Podaj wynagrodzenie za miesiac w PLN:\n");
	double PLN;
	scanf("%lf",&PLN);
	printf("Twoje wynagrodzenie roczne wynosi:\n%.2f PLN\n%.2f EUR\n%.2f USD\n\n",PLN*12,12*PLN*0.23,12*PLN*0.25);	
}

void Zadanie_8(){
	double r=2.13,h=5.6, l;
	printf("Podaj promien kola i wysokosc stozka:\n");
	scanf("%lf%lf",&r,&h);
// double pow(double podstawa, double dowolna_potega);	#include <math.h	
	l=sqrt(pow(r,2)+pow(h,2));
					
	printf("r = %.2f\nh = %.2f\nObjetosc stozka: %.2f\nPole powierzchni calkowitej stozka: %.2f\n\n",r,h,h/3.0*PI*pow(r,2),PI*r*(r+l));
}

void Zadanie_9(){
	printf("Wynik = %.2f\n\n", pow(3.5,4)+sqrt(7)-pow(12.33,-3));
}

void Zadanie_10(){
	printf("Podaj czas w sekundach:\n");
	double czas;
	scanf("%lf",&czas);
	printf("Twoj czas w:\nsekundach: %.0f\nminutach: %.2f\ngodzinach: %.2f\n\n",czas,czas/60,czas/3600);
}

void Zadanie_11(){
	char a; int b; float c; double d;
	printf("Rozmiary(w bajtach):\nchar: %d\nint: %d\nfloat: %d\ndouble: %d\n\n",sizeof a,sizeof b,sizeof c,sizeof d);
}

void Zadanie_12(){
	char a; 
	int licz_1,mian_1,licz_2,mian_2,licz_3,mian_3;

	printf("Podaj pierwszy ulamek w formacie licznik/mianownik:\n");
	scanf("%d%c%d",&licz_1,&a,&mian_1);

	printf("Podaj drugi ulamek w formacie licznik/mianownik:\n");

	scanf("%d%c%d",&licz_2,&a,&mian_2);

	licz_3=(licz_1*mian_2)+((licz_2*mian_1));
	mian_3=mian_1*mian_2;

	printf("Oto wynik: %d/%d + %d/%d = %d/%d\n\n",licz_1,mian_1,licz_2,mian_2,licz_3,mian_3);	
}

void Zadanie_13(){
	
	int sum;
	/* WYLICZ WYNIK */
	sum = 25 + 37 - 19;
	/* POKAZ WYNIK */
	
	printf("Odpowiedzia jest %d.\n", sum);
	
	
}

void linia(){
	int i;
	printf("\n|Zadanie %d|",j++);

	for(i=84;i>=0;i--){
		printf("_");
	}printf("\n\n");
}

