#include <stdio.h>
#define N 10
void zadanie_1();
void zadanie_2();
void zadanie_3();
void zadanie_4();
void zadanie_5();
void zadanie_6();
void zadanie_7();
void zadanie_8();
void zadanie_9();
void zadanie_10();
void zadanie_11();
int main(){
//	
//	zadanie_1();
//	zadanie_2();
//	zadanie_3();
//	zadanie_4();
//	zadanie_5();
//	zadanie_6();
//	zadanie_7();
//	zadanie_8();
//	zadanie_9();
//	zadanie_10();
	zadanie_11();	
	
	return 0;
}
void zadanie_1(){
	printf("Podaj liczbe naturalna: \n");
	int a;
	int n=N;
	scanf("%d", &a);
	printf("10 kolejnych liczb: ");
	while(n--){
		printf("%d ",++a);
	}
}

void zadanie_2(){
	int poczatek;
	int koniec;
	int odstep;
	printf("\n\nPodaj liczbe poczatkowa: \n");	
	scanf("%d", &poczatek);
	printf("Podaj liczbe koncowa: \n");	
	scanf("%d", &koniec);
	
	do{
		if(odstep==0) printf("Odstep nie moze byc rowny 0!!!\n");
		printf("\nPodaj odstep miedzy nimi: \n");	
		scanf("%d", &odstep);
	}while(odstep==0);

	if(poczatek<=koniec){
		while(poczatek<=koniec){
			printf("%d ", poczatek);
			poczatek+=odstep;
		}printf("\n\n");
	}else while(koniec<=poczatek){
				printf("%d ", poczatek);
				poczatek-=odstep;
			}printf("\n\n");
}
void zadanie_3(){
	unsigned long long loc_a;
	printf("Podaj liczbe: ");
	scanf("%llu",&loc_a);
	//printf("%llu", loc_a);
	
	int loc_i=0;
	
	do{
		loc_a/=10;
		loc_i++;
	}while(loc_a!=0);
	
		printf("\nLiczba cyfr: %d", loc_i);
}
void zadanie_4(){
	unsigned long long loc_a;
	printf("\n\nPodaj liczbe: \n");
	scanf("%llu",&loc_a);

	
	int i=0;
	
	while(loc_a!=0){
	
	if(loc_a%2==1) i++;
	loc_a/=2;
		
	}
		printf("Liczba jedynek w liczbie binarnej: %d\n\n", i);
}
void zadanie_5(){
	printf("a) N kolejnych liczb naturalnych dla N>1\n\nPodaj N: ");

	int n=2;
	int i=1;
	int x;
	double a;
	double an;
	double y=1;
	int number, dodatnie=0, ujemne=0;
	int aa=0, bb=0, ii=0;		
	int /*number,*/ parzyste=0, nieparzyste=0;
	
	do{
		if(n<=1)printf("N ma byc wieksze od 1\n\nPodaj N > 1: ");
		scanf("%d", &n);
	}while(n<=1);

	while(n--){
		printf("%d ",i++);
	}
	
	printf("\n\nb) Kolejne liczby naturalne od N do 1 dla N>1\n\nPodaj N: ");
	n=2;
	i=1;
	do{
		if(n<=1)printf("N ma byc wieksze od 1\n\nPodaj N > 1: ");
		scanf("%d", &n);
	}while(n<=1);
	
	while(printf("%d ", n--)&&n!=0);

	n=2;
	printf("\n\nc) wszystkie liczby naturalne parzyste i mniejsze od N dla N>1\n\nPodaj N: ");
	do{
		if(n<=1)printf("N ma byc wieksze od 1\n\nPodaj N > 1: ");
		scanf("%d", &n);
	}while(n<=1);
	
	while(n--) if(n%2==0&&n!=0) printf("%d ",n);

	n=2;
	printf("\n\nd) N kolejnych liczb nieparzystych poczawszy od N dla N>1\n\nPodaj N: ");
	do{
		if(n<=1)printf("N ma byc wieksze od 1\n\nPodaj N > 1: ");
		scanf("%d", &n);
	}while(n<=1);
	
	i=n;
	n*=2;
	
	while(n--){
		if(i%2) printf("%d ", i);
	i++;
	}
n=2;	
	printf("\n\ne) N kolejnych wyrazow ciagu arytmetycznego: 1,4,7,10,13,... dla N>1\n\nPodaj N: ");
	do{
		if(n<=1)printf("N ma byc wieksze od 1\n\nPodaj N > 1: ");
		scanf("%d", &n);
	}while(n<=1);	
	i=1;
	while(n--){
		printf("%d ",i);
		i+=3;
	}


//12 kolejnych silni	
	printf("\n\nf) 12 kolejnych silni:\n\n");
	n=1;
	i=1;
	while(i<=12){
		n*=i;
		i++;
		printf("%d ", n);
	}

//n kolejnych wyrazow ciagu an = 1\n dla n>1
	printf("\n\ng) N kolejnych wyrazow ciagu an = 1/N dla N>1\n\nPodaj N: ");
	do{
		if(n<=1)printf("N ma byc wieksze od 1\n\nPodaj N > 1: ");
		scanf("%d", &n);
	}while(n<=1);
	i=1;
	printf("\nPostac ulamkowa: \n");
	while(i<=n){
		printf("1/%d ",i );
	i++;	
	}printf("\n\nPostac dziesietna: \n");

	i=1;
	while(i<=n){
		printf("%.2f ",1.0/i );
	i++;	
	}

//17 kolejnych wyrazów ciagu zdefiniowanego rekurencyjnie: a1 = 3, an = 3(an -1) - 4(3an-1 - 4);
	printf("17 kolejnych wyrazów ciagu zdefiniowanego rekurencyjnie: a1 = 3, an = 3(an -1) - 4(3an-1 - 4)\n\n");
	x=17;
	an=3;
	i =1;
	while(x--){
		printf("%d = %.1f\n", i, an);
		//a=an;
		an= -0.5*(-3-4*(3*an-4));	
		i++;
	}

////31 kolejnych wyrazów ciagu danego rekurencyjnie (pierwszym wyrazem jest a0):a0 = 0, an = 2an-1 + 1 
	x=31;
	an=1;
	while(x--){		
		printf("%d = %.0f\n",i ,an);
		a=an;
		an=2*a+1;
		
		i++;
	}

////sumê n kolejnych liczb naturalnych tj. sum 1+2+3+· · ·+n (dla n > 1 podanegoprzez u¿ytkownika);
	printf("\n\nj) sume n kolejnych liczb naturalnych tj. sum 1+2+3+...+n dla N>1\n\nPodaj n: ");
	do{
		if(n<=1)printf("n ma byc wieksze od 1\n\nPodaj N > 1: ");
		scanf("%d", &n);
	}while(n<=1);
	i=2;
	x=1;
			printf("1");
	while(--n){
		printf("+%d",i);
		x+=i;
		i++;
	}printf("=%d ",x);
n=2;
//sume n kolejnych kwadratów liczb naturalnych tj. sume 1^2 + 2^2 + 3^2 +...+n2(dlan > 1 podanego przez u¿ytkownika);
	printf("\n\nk) sume n kolejnych kwadratow liczb naturalnych n>1\n\nPodaj n: ");
	do{
		if(n<=1)printf("n ma byc wieksze od 1\n\nPodaj N > 1: ");
		scanf("%d", &n);
	}while(n<=1);

	i=2;
	printf("1^2 ");
	while(n--){
		printf("+ %d^2 ",i);
		y=i*i+y;
		i++;
	}
	printf("= %.0f ",y);
	
////ile jest liczb parzystych i nieparzystych w podanym przez u¿ytkownika ciagu n liczb naturalnych	
//	printf("\n\nL) ilosc liczb parzystych i nieparzystych w ciagu n liczb naturalnych dla n>1 (0 nalezy)\n\nPodaj n: ");
//	do{
//		if(n<=1)printf("n ma byc wieksze od 1\n\nPodaj N > 1: ");
//		scanf("%d", &n);
//	}while(n<=1);	
//
//
//	
//	n++;
//	while(n--){
//		if(n%2==0)aa++;else bb++;
//		//ii++;
//	}
//	printf("Parzystych: %d\nNieparzystych: %d\n\n",aa,bb);
	
//ile jest liczb parzystych i nieparzystych w podanym przez u¿ytkownika ciagu n liczb naturalnych		
	n=2;
	printf("\n\nl) ilosc liczb parzystych i nieparzystych w ciagu n liczb naturalnych dla n>1 (0 nalezy)\n\nPodaj n: ");	
	do{
		if(n<=1)printf("n ma byc wieksze od 1\n\nPodaj N > 1: ");
		scanf("%d", &n);
	}while(n<=1);
	printf("\nPodaj liczby:\n");

	while(n--){
		scanf("%d", &number);
		if(number%2==0)parzyste++;
		if(number%2!=0) nieparzyste++;
	}printf("Parzystych: %d\nNieparzystych: %d\n\n", parzyste, nieparzyste);
	
	n=2;	
//ile jest liczb ujemnych i dodatnich w podanym przez u¿ytkownika ciagu n liczb ca³kowitych	dla n > 1
	printf("\n\nm) ilosc liczb ujemnych i dodatnich w ciagu n liczb calkowitych dla n>1 \n\nPodaj n: ");
	do{
		if(n<=1)printf("n ma byc wieksze od 1\n\nPodaj N > 1: ");
		scanf("%d", &n);
	}while(n<=1);
	printf("\nPodaj liczby:\n");
	
	while(n--){
		scanf("%d", &number);
		if(number>0)dodatnie++;
		if(number<0) ujemne++;
	}
	printf("Dodatnich: %d\nUjemnych: %d\n\n", dodatnie, ujemne);

}

void zadanie_6(){
	printf("Podaj szereg liczb wiekszych od 0: \n\n");
	double podana=1, max=0;
	int i=1;
	while(podana>0){
		printf("Podaj %d liczbe:\n",i);
	
		scanf("%lf", &podana);
		if(max<podana)max=podana;
		
		i++;	
	}printf("\nNajwieksza liczba jest: %.2f ", max);
}

void zadanie_7(){
	int wieksza=24, mniejsza=24;//i czy rowne?
	printf("\n\nPodaj 2 dodatnie liczby calkowite:\n");
	scanf("%d%d",&wieksza, &mniejsza);
	int i=mniejsza;
	if(wieksza==mniejsza)printf("Sa rowne a i b\n");
	else{
		if(wieksza<mniejsza){
			int pomoc=wieksza;
			wieksza=mniejsza;
			mniejsza=pomoc;
			i=mniejsza;
		}
		if(mniejsza==0)printf("Nie ma wspolnego dzielnika\n");
		else{			
			while(wieksza%i--!=0){
				while(mniejsza%i!=0&&i>0){		
					i--;
				}	
			}
			++i;		
			printf("\nNWD: %d\n\n",i);
		}
	}	
}

void zadanie_8(){
	double Agata=1000, Franek=1000;
	int r=1;
	
	do{
		Agata+=100;
		Franek*=1.06;
		r++;
	}while(Agata>Franek);
	
	printf("\nAgata: %f \nFranek: %f \n\nCzas: %d lat\n\n",Agata, Franek, r-1);	
}

void zadanie_9(){
	int j=3, i, ilosc=0;
	do{
		printf("Podaj liczbe > 2:\n");
		scanf("%d", &j);
	}while(j<=2);
	
	printf("\nLiczby pierwsze mniejsze badz rowne %d:\n",j);
	for(;j>=2;j--){ 
		for(i=j;i>0;i--){
			if(j%i==0) ilosc++;
		}
	if(ilosc==2) printf("%d\t",j);
	ilosc=0;
	}
}

void zadanie_10(){
	int min = 1;
	int max = 100;
	int mid;
	int x=1;
	
	printf("\n\n[1] - mniejsze\n[2] - wieksze\n[0] - rowna\n");

	do{
		mid=(max+min)/2;
		
		printf("\nLiczba %d?\n", mid);
		scanf("%d", &x);
		
		if(x==1) max=mid;

		if(x==2) min=mid;

	}while(x);
}

void zadanie_11(){
	int i,j,z,w,W;

	printf("Podaj liczbe wierszy: ");
	scanf("%d",&W);
	
	for(i=1;i<=W;i++){			// *
		for(j=i;j>0;j--){		// **
			printf("*");		// ***
		}printf("\n");			// ****
	}printf("\n");
	
	for(i=W;i>0;i--){			// ****
		for(j=i;j>0;j--){		// ***
			printf("*");		// **
		}printf("\n");			// *
	}printf("\n");

	z=-1;
	for(i=W;i>0;i--){			//    *    
		for(j=i-1;j>0;j--){		//   *** 
			printf(" ");		//  *****
		}						// *******
		z+=2;
		w=z;
		while(w--){
			printf("*");
		}
		printf("\n");		
	}
}
	
