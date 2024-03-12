//13.01.2024 - laby
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void f1(double*w1, double *w2);
int przek(const int Y, const int X, int (*T)[4]);
int sum_przek(int Y, int (*T)[4]);
int max(int Y,int (*T)[4]);
int ileX(int (*T)[4], int w, int k, int x);
void RRreverse(int i, int j, int (*T)[4]);
void p1(int x);
void p2(int x);
int f(int x);
int f1(int x);
int r(int x);

int main(){
srand((unsigned int) time(NULL));
int i,j;	
double tab[8]={0,7,5,4,3,2,1,9};

int tab1[][4]={{1,1,9,1},{1,1,1,1},{1,1,1,1},{1,1,1,11}};

	f1(tab+2,tab+5);

	for(i=0;i<8;i++)
		printf("%.1f\t", *(tab+i));

	printf("\n\nSuma: %d\n\n",	przek(4,4,tab1));
	printf("\n\nSuma2: %d\n\n",	sum_przek(4,tab1));	
	printf("\n\nMax: %d\n\n",	max(4, tab1) );	
	printf("\n\nIle X:: %d\n\n",	ileX(tab1,4,3,1) );	

//void RRreverse(int i, int j, int (*T)[4]);
	
	RRreverse(0, 1,tab1);
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d\t", *(*(tab1+i)+j) );
		}printf("\n\n");
	}printf("\n\n");
	
	p1(1);
	printf("\n\n");
	p2(1);
	printf("\n\n");	
	printf("\n%d\n\n",f(11));

	printf("\n\n%d\n",f1(5));
	
	printf("\n%d", r(3));
	
	return 0;
}

void f1(double*w1, double *w2){
int i;
	for(i=1; w1+i<w2; i++){
		*(w1+i)=0;
	
	}
}

int przek(const int Y, const int X, int (*T)[4]){
int i,j,sum=0;
	
	for(i=0,j=-1; i<Y; i++,j++)
		sum += *(*(T + i) + (j+1));
	

return sum;	
}

int sum_przek(int Y, int (*T)[4]){
int sum = 0,i,j;

for(i=1;i<Y;i++)
	for(j=0;j<i;j++){
		sum+=*(*(T+i)+j);
	}

return sum;	
}


int max(int Y,int (*T)[4]){
int max=**T, i, j;
	
	for(i=0;i<Y;i++){
		for(j=0; j<4; j++){
			if(max < *(*(T+i)+j) ) max=*(*(T+i)+j);
		}
	}

	return max;
	
}

//ileX(tab1,4,3,1)

int ileX(int (*T)[4], int w, int k, int x){
int i,j, ile=0;	
	for(i=0;i<w;i++){
		if(*(*(T+i)+k)==x) ile++;
	}	
	return ile;
}

void RRreverse(int i, int j, int (*T)[4]){
int col,temp;
	for(col=0;col<4;col++){
		temp = *(*(T + i)+col);
		*(*(T + i)+col) = *(*(T + j)+col);
		*(*(T + j)+col) = temp;
	}
}

void p1(int x){
	printf("%d\t",x);
	if(x<3) p1(x+1);
	printf("%d\t", -x);
}

void p2(int x){
	if(x<3) p2(x+1);
	printf("%d\t",x);
	if(x<4)(p2(x+2));
}

int f(int x){
	printf("%d\n",x);
	if (x>1) return f(x/2)*3;
	return 1;
}

int f1(int x){
	printf("%d\n",x);
	if (x<3) return x;
	return f1(x-1)+f1(x-3);
}

int r(int x){
	if(x==1) return 1;	
	return r(x-1)+2*x-1;
}

/*void wiersze(int (*T)[4], int p, int q){
int i,j;

	for(i=p;i<4;i++)
		for(j=q;j<4;j++){
			*(*(T))
		}
	
}*/

/*
//Od Kuby z zaj�c w niedzil�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void flos2w(int t[][5], int rw);
void fwypisz2w(int t[][5], int rw);
int fsumaw(int t[][5], int i);

void flos2w(int t[][5], int rw){

    int i, j;

    for(i=0; i<rw; i++)
        for(j=0;j<5;j++)
            t[i][j]=rand()%10+1;
}
void fwypisz2w(int t[][5], int rw){
    int i,j;

    for(i=0; i<rw; i++){
        for(j=0;j<5;j++){
            printf(" %d ", t[i][j]);
        }
    printf("\n");
} 
}
int fsumaw(int t[][5], int i){
    int j, suma=0;

    for(j=0; j<5;j++){
        suma+=t[i][j];
    }
    return suma;
}


int main(){
    srand(time(NULL));

    int tab2w[5][5];
    flos2w(tab2w, 5);

    fwypisz2w(tab2w, 5);

    printf("\n%d", fsumaw(tab2w, 2));

    return 0; 
}*/

