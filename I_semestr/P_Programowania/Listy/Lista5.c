#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define R 8
void fprint();					//Zadanie 1
void zadanie_2();				//Zadanie 2
void double_complete_array();	//Zadanie 3
void print_array();				//Zadanie 3
int ileK();						//Zadanie 4
void zamiana();					//Zadanie 5
void obliczeCi();				//Zadanie 6
void przesuneCi_up();			//Zadanie 7
void przesuneCi_down();			//Zadanie 7
void odwroceCi();				//Zadanie 8
void wymnozeCi();				//Zadanie 9
int podsumujeCi();				//Zadanie 10
void complete_array();			//Zadanie 11
void posortujeCi();				//Zadanie 11
void PodsumujeCiwektory();		//Zadanie 12
double skalarny();				//Zadanie 12
void wskaznikowa();				//Zadanie 13
int licz();						//Zadanie 14
int fsuma();					//Zadanie 15
double fmaks();					//Zadanie 16
int fwiecejNizK();				//Zadanie 17

int main(){
	int tab[]={1,2,3,4,5,6};
	int r = sizeof(tab)/sizeof(int);
	double T[N];
	const int k=2;

//	double_complete_array(T, N);
//	print_array(T, N);

//	printf("Sa %d liczby [%d]", ileK(tab,r,k), k);

//	fprint(tab, r);
//	zamiana(tab, r);
//	fprint(tab, r);

//	obliczeCi(tab,r);

//	przesuneCi_up(tab,r);	
//	fprint(tab, r);

//	fprint(tab, r);
//	odwroceCi(tab,r);
//	fprint(tab, r);

//	fprint(tab, r);
//	wymnozeCi(tab,r,k);
//	fprint(tab, r);
	
//	int tab2[]={5,1,1,1,1,1,1,2};
//	int r2 = sizeof(tab2)/sizeof(int);	
//	printf("Indeks pierwszego elementu pary: tab[%d]\n", podsumujeCi(tab2, r2));
//	fprint(tab2, r2);

//	const int t=100;
//
//	int tab3[t];
//	complete_array(tab3,t);
//	fprint(tab3, t);
//	
//	posortujeCi(tab3,t);
//	fprint(tab3, t);	

//	double tab4[k], tab5[k];
//	double_complete_array(tab4, k);	
//	double_complete_array(tab5, k);
//	PodsumujeCiwektory(tab4,tab5,k);
//	printf("\nSkalarny: %.1f ", skalarny(tab4,tab5,k));
//


////	int array[3]={1,2,3};
////	int*ar[3];
////	int i;	
////	for(i=0;i<3;i++){
////		*(ar+i)=tab+i;	
////	}	
////	
////	for(i=0;i<3;i++){
////		printf("%d - ", *(*(ar+i)));
////		printf("%d\n", *(*(ar+i))*=3);
////	}printf("\n\n");
////	
////	for(i=0;i<3;i++){
////		printf("%d  ", *(array+i));
////	}
	
	
//	wskaznikowa();

//	double t[]={8.0, 2.0, 1.0, 6.0, 2.0, 7.0, 5.0, 2.0, 9.0};	
//	int n = licz(t+1, t+8, 2.0);
//	printf("Liczba = %d\n\n", n);

//	int Ttab[]={0,1,2,3,4,  5,6,7,8,9};
//	int y = (sizeof Ttab/(sizeof (int)))/2;
//	int *w1 = Ttab+y;
//
//	printf("%d", fsuma(Ttab, w1, N));


//	double taab[]={4.1,3.1,5.2};
//	printf("Najwiekszy element: %.1f", fmaks(taab,3));
	
////	int tab[]={1,2,3,4,5,6};
////	int r = sizeof(tab)/sizeof(int);
////	double T[N];
////	const int k=2;	

//	printf("Wiecej niz k jest: %d", fwiecejNizK(tab,r,k));

	
	return 0;
}



void fprint(int *tab, int r){
	printf("\n\nRozmiar: %d\n", r);
	int i;
	for(i=0;i<r;i++){
		printf("\ntab[%d] = %d\t", i, *(tab+i));
	}printf("\n\n");
}

void zadanie_2(){
	printf("Podaj 8 liczb: \n");
	double tab[R];
	
	int i;
	for(i=0;i<R;i++){
		scanf("%lf", tab+i);
	}
	printf("\nPodane liczby w odwrotnej kolejnosci: \n");
	for(i=R-1;i>=0;i--){
		printf("%.1f\n", *(tab+i));
	}
}

void double_complete_array(double *tab, int r){
	printf("Podaj %d liczb:\n", r);
	int i;	
	for(i=0;i<r;i++){
		scanf("%lf", tab+i);
	}	
}

void print_array(double *tab, int r){
	int i;
	for(i=0;i<r;i++){
		printf("T[%d] = %.1f\n",i, *(tab+i));
	}
	
}

int ileK(int*tab, int r, int k){
	int ilek=0;
	int i;
	for(i=0;i<r;i++){
		if(*(tab+i)==k) ilek++;
	}	
	return ilek;
}

void zamiana(int*tab, int r){
	int temp, i, min=0, max=r-1;	
	for(i=0; i<r ;i++){
		if( *(tab+i) < *(tab+min) ) min=i;
	}
	
	for( i=0; i<r ; i++){
		if( *(tab+i) > *(tab+max) ) max=i;		
	}
	
	temp = *(tab + min);
	*(tab+min) = *(tab+max);
	*(tab+max) = temp;	
}

void obliczeCi(int*tab, int r){
	int i, u = 0, d = 0, z = 0;

	for(i=0;i<r;i++){
		if(*(tab+i)==0) z++;
		else *(tab+i)<0?u++:d++;
	}printf("Jest:\n[%d] - ujemnych\n[%d] - dodatnich\n[%d] - zer\n",u,d,z);	
}

void przesuneCi_up(int*tab, int r){
	int c, i;
	
	for(i=0;i<r-1;i++){
		c=*(tab+i);
		*(tab+i)=*(tab+(i+1));
		*(tab+(i+1))=c;
	}	
}

void przesuneCi_down(int*tab, int r){
	int c, i;
	
	for(i=(r-1);i>0;i--){
		c=*(tab+i);
		*(tab+i)=*(tab+(i-1));
		*(tab+(i-1))=c;
	}	
}

void odwroceCi(int*tab, int r){
	int i, temp;
	
	for(i=0;i<r/2;i++){
		temp=*(tab+i);
		*(tab+i)=*(tab+(r-1-i));
		*(tab+(r-1-i))=temp;
	}
}

void wymnozeCi(int*tab, int r, int x){
	int i;
	for(i=0;i<r;i++){
		*(tab+i)*=x;
	}
}

int podsumujeCi(int* tab, int r){
	int i, ind=0;

	for(i=0;i<r-1;i++){
		if(*(tab+ind)+*(tab+(ind+1))<*(tab+i)+*(tab+(i+1))) ind=i;
	}	
	return ind;	
}

void complete_array(int*tab, int r){
	srand((unsigned int)time(NULL));	
	int i;
	for(i=0;i<r;i++){
		*(tab+i)=rand()%2001-1000;		
	}	
}

void posortujeCi(int*tab, int r){
	int i, j, temp;	
	for(i=0;i<r-1;i++){
		for(j=i+1;j<r;j++){			
			if(*(tab+i)>=*(tab+j)){
				temp=*(tab+i);
				*(tab+i)=*(tab+j);
				*(tab+j)=temp;
			}
		}
	}
}

void PodsumujeCiwektory(double*tab, double*tab2, int r){
	double tab3[r];	
	int i;
	for(i=0;i<r;i++){
		*(tab3+i)=*(tab+i)+*(tab2+i);
	}print_array(tab3,r);				
}

double skalarny(double* tab,double* tab2,int r){
	double sum=*tab, sum2=*tab2;
	int i;
	for(i=1;i<r;i++){
		sum*=*(tab+i);
	}
	for(i=1;i<r;i++){
		sum2*=*(tab2+i);
	}sum+=sum2;
	return sum;
}

void wskaznikowa(){
	int ar[]={1,2,3};
	int*w1=ar, *w2=ar+1, *w3=ar+2;
	fprint(ar,3);
	*w1*=3, *w2*=3, *w3*=3;
	fprint(ar,3);		
}

int licz(double*p1, double*p2, double x){
	int liczba = 0;

	if(p1-p2>0){	// Zamiana wskaznikow - Jesli pierwszy wskaznik pokazuje dalsze miejsce w tablicy
		double* p3=p1;
		p1=p2;
		p2=p3;
	}	
	if(p1-p2==0)
		if(*p1==x) liczba++;
	
	double *i;
	for(i=p1;i<p2;i++){
		if(*i==x)liczba++;
	}	
	return liczba;
}

int fsuma(int *t, int *wsk, int roz){	
	int p1=0, p2=0;
	int i;
	
	for(i=0; i<wsk-t; i++){
		p1+=*(t+i);
	}	
	for(;i<roz;i++){
		p2+=*(t+i);
	}	
	if(p1>p2) return 0;
		else return 1;
}

double fmaks(double*t, int roz){
	double *maks = t;
	
	int i;
	for(i=0;i<roz;i++){
		if(*(t+i)>*maks) maks=t+i;
	}

	return *maks;	
}

int fwiecejNizK(int *t, int roz, int k){
	int x=0;
	
	while(roz--)	
		if(*(t+roz)>k)x++; //od ostatniego elementu	

	return x;
}
