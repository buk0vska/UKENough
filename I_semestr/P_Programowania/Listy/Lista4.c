#include <stdio.h>
double   Zadanie_1 (double a, double b);
double   Zadanie_2 (double a, double b);
void     Zadanie_3 ();
double   Zadanie_4 (int a, double b);
unsigned Zadanie_5 (unsigned a);
void     Zadanie_6 (char a, unsigned b, unsigned c);
int      Zadanie_7 (int min, int max);
void     Zadanie_8 ();
int      Zadanie_9 (int *a, int *b);
float    Zadanie_10(float* a,float* b);
void     Zadanie_11(int *a, int*b);
void     Zadanie_12(double*a, double*b);
void     Zadanie_13(int n, int*w);
void     Zadanie_14(int *a, double *b);
void     Zadanie_15(int*min,int*max);
int main(void){
	int a=10,b=5;
	float c=10.5,d=5;
	double e=7.678,f=8;
	double g=4,h=5;
	int*w1;
	int m=4;	
	w1=&a;

//	printf("%.1f", Zadanie_1(g,h));
//	
//	printf("%.1f", Zadanie_2(g,h));
//
//	Zadanie_3();	
//
//	printf("Wynik (3.1)^2 + (5.5)^3 +24 = %.2f ", Zadanie_4(2,3.1)+Zadanie_4(3,5.5)+24);
//
//	printf("Ilosc jedynek w reprezentacji binarnej liczby 15: %u ",Zadanie_5(15));
//
//	Zadanie_6('W',18,10);
//
//	Zadanie_7(2,8);
//
//	Zadanie_8();
//
//	printf("\nMniejsza z liczb: %d \n\n",Zadanie_9(&a,&b));
//	
//	printf("Suma modulow: %.1f\n\n",Zadanie_10(&c,&d));	
//	
//	Zadanie_11(&a,&b);
//	printf("a = %d\nb = %d\n\n",a,b);
//	
//	Zadanie_12(&e,&f);
//	printf("e = %.1f\nf = %.1f\n\n",e,f);
//	
//	Zadanie_13(m,w1);
//	printf("m = %d\na = %d\n\n",m,a);
//	
//	e=98.845;
//	Zadanie_14(&a,&e);
//	printf("a = %d\ne = %.3f\n\n",a,e);
//
//	Zadanie_15(&b,&a);	
		
	return 0;
}

double Zadanie_1(double a, double b){	 	
	return 	1/((1/a+1/b)/2);
}

double Zadanie_2(double a, double b){
	return a>b?a:b;
}

void Zadanie_3(){
	int a=4,b=6,c=2,i;	
	
	for(i=a-1;i>0;i--) a*=i;
	for(i=b-1;i>0;i--) b*=i;
	for(i=c-1;i>0;i--) c*=i;
	
	printf("\na) 4! + 6! - 2! = %d\n",a+b-c);
	
	a=5, b=2, c=a-b;
		
	for(i=a-1;i>0;i--) a*=i;
	for(i=b-1;i>0;i--) b*=i;
	for(i=c-1;i>0;i--) c*=i;	
		
	printf("\nb) Wartosc dla n = 5, k = 2 rowna sie: %d\n",a/(b*c) );

}

double Zadanie_4(int a, double b){	
	double i=b;
	while(--a) i*=b;
	
	return i;
}

unsigned Zadanie_5(unsigned a){
	unsigned b=0;
	
	while(a){
		if(a%2==1) b++;
		a/=2;		
	}		
	return b;
}

void Zadanie_6(char a, unsigned b, unsigned c){
	int i, j;
	
	for(i=c;i>0;i--){
		for(j=b;j>0;j--){
			printf("%c",a);
		}printf("\n");
	}
}

int Zadanie_7(int min, int max){
	int c=(min+max)/2;
	
	do{
		printf("Podaj liczbe w przedziale %d - %d:\n",min, max);
		scanf("%d",&c);
	}while(!(c>=min&&c<=max));
		
	return c;	
}

void Zadanie_8(){
	int a=1;
	int*aa=&a;
	char b='b';
	char*bb=&b;
	float c=3.3;
	float*cc=&c;
	double d=2.2;
	double*dd=&d;

	printf("\nWartosci:\t\t Adresy:\n\n(int)    a = %d\t\t\t %p\n(char)   b = %c\t\t\t %p\n(float)  c = %.2f\t\t %p\n(double) d = %.2f\t\t %p", a, &a, b, &b, c, &c, d, &d);	
	printf("\n\n\nAdresy uzyskane przez wzkazniki:\n\n%p\n%p\n%p\n%p",aa,bb,cc,dd);	
}

int Zadanie_9(int *a, int *b){
return *a>*b?*b:*a;
}

float Zadanie_10(float* a,float* b){
	if(*a<0) *a*-1;
	if(*b<0) *b*-1;
	return *a+*b;
}

void Zadanie_11(int *a, int*b){
	if(*b<*a){
		int c=*a;
		*a=*b;
		*b=c;
	}	
}

void Zadanie_12(double*a, double*b){
	(*a > *b) ? (*b = *a) : (*a = *b);	
}

void Zadanie_13(int n, int*w){
	*w=n;
}

void Zadanie_14(int *a, double *b){
	*a = *b;
	*b = *b - *a;
}

void Zadanie_15(int*min,int*max){
	double a=(*min+*max)/2;
	
	do{
		printf("\nPodaj liczbe w przedziale %d - %d:\n",*min, *max);
		scanf("%lf",&a);		
	}while(!(a<=*max&&a>=*min));	
}

