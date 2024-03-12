#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define W 10
#define K 15
#define N 10
#define M 5
void show_array();			//Zadanie 1
void int_show_array();		//Zadanie 6
void complete_array();		//Zadanie 1
void int_complete_array();	//Zadanie 6
void new_array();			//Zadanie 2
int find_max();				//Zadanie 3
void reverse();				//Zadanie 4
void diagonal();			//Zadanie 5a
double sum();				//Zadanie 5b
double row_sum();			//Zadanie 5c
double column_sum();		//Zadanie 5d
void RRreverse();			//Zadanie 5e
void cross_min();			//Zadanie 5f
void cross_max();			//Zadanie 5f
void transposition();		//Zadanie 5g
void down_diagonal();		//Zadanie 5h
void up_diagonal();			//Zadanie 5h
void multiplication();		//Zadanie 6a
void sum_arrays();			//Zadanie 6b
void asym_trans();			//Zadanie 6c

int main(){
int T[W][K];
int T2[W][K];
double T3[N][N];
double T4[N][N];
double T5[2][3]={{1,2,3},{4,5,6}};
int tab1[M][N], tab2[M][N], tab3[M][N], tab4[N][M];	//Zadanie 6
int temp;
int i,j,n=0.0;
srand((unsigned int)time(NULL));	

	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			*(*(T4+i)+j)=++n;

	int_complete_array(W,K,T);
	int_show_array(W,K,T);
	printf("\n\n");
	new_array(T,T2);
	int_show_array(W,K,T2);
	
	temp=find_max(T);
	printf("Najwieksza wartosc I: %d\n\n", temp);
	printf("Najwieksza wartosc II: %d\n\n",temp*temp);
	
	reverse(W,K,T);

	int_show_array(W,K,T);
	
	complete_array(N,N,T3);
	show_array(N,N,T3);
	diagonal(N,N,T3);
	show_array(N,N,T3);		
	complete_array(N,N,T3);
	show_array(N,N,T3);
	show_array(N,N,T4);	
	printf("\n\nSuma przekatnej: %.1f\n\n", sum(N,N,T4));
	printf("\n\nSuma liczb w wierszach: \n\n");
	for(i=0;i<N;i++)
		printf("%d:\t%.1f\n\n", i+1, row_sum(i,N,N,T4));		
	printf("\n\nSuma liczb w kolumnach: \n\n");
	for(j=0;j<N;j++)
		printf("%d:\t%.1f\n\n", j+1, column_sum(j,N,N,T4));			
	show_array(N,N,T4);	
	RRreverse(0,9,N,N,T4);
	show_array(N,N,T4);	
	RRreverse(0,9,N,N,T4);
	cross_min(N,N,T3);			
	show_array(N,N,T3);
	show_array(N,N,T4);	

	transposition(2,3,T5);
	show_array(2,3,T5);	
	transposition(N,N,T4);
	show_array(N,N,T4);
	down_diagonal(N,N,T4);
	up_diagonal(N,N,T4);
	show_array(N,N,T4);
	
	int_complete_array(M,N,tab1);
	int_show_array(M,N,tab1);
	multiplication(M,N,tab1,tab2,2);
	int_show_array(M,N,tab2);
	sum_arrays(M,N,tab1,tab2,tab3);
	int_show_array(M,N,tab3);
	asym_trans(M,N,tab3,tab4);
	int_show_array(N,M,tab4);
	
	return 0;
}

//Zadanie 1-4
void int_complete_array(const int Y, const int X, int (*tab)[X]){
int i, j;	
	for(i=0;i<Y;i++)
		for(j=0;j<X;j++)
			*(tab[i]+j)= rand()%201-100;
}

//Zadanie 5
void complete_array(const int Y, const int X, double (*tab)[X]){
int i, j, n=0;	
	for(i=0;i<Y;i++)
		for(j=0;j<X;j++)
			*(tab[i]+j )= rand()%1001-500+(rand()%11)/10.0;			
}

//Zadanie 1-4
void int_show_array(const int Y, const int X, int (*tab)[X]){
int i, j;
	printf("\n");
	for(i=0; i<Y; i++){
		for(j=0; j<X; j++)
			printf("%d\t", *(*(tab+i)+j));
		printf("\n\n");
	}printf("\n");	
}

//Zadanie 5
void show_array(const int Y, const int X, double (*tab)[X]){	
int i, j;
	printf("\n");
	for(i=0; i<Y; i++){
		for(j=0; j<X; j++)		
			printf("%.1f\t", *(*(tab+i)+j));
		printf("\n\n");
	}printf("\n");	
}

//Zadanie 2
void new_array(int (*T)[K], int (*T2)[K]){
int i,j;
	for(i=0;i<W;i++)
		for(j=0;j<K;j++)
			*(*(T2+i)+j) = *(*(T+i)+j) * (*(*(T+i)+j));
}

//Zadanie 3
int find_max(int (*tab)[K]){
int max=-500;
int i,j, temp;

	for(i=0;i<W;i++)
		for(j=0;j<K;j++)
			if(max<*(*(tab+i)+j))
				max=*(*(tab+i)+j);
					
	return max;
}

//Zadanie 4
void reverse(const int Y, const int X, int (*tab)[X]){
int i,j, temp;
	for(i=0;i<Y;i++)
		for(j=0;j<(X)/2;j++){
			temp = *(*(tab+i)+j);
			*(*(tab+i)+j) = *(*(tab+i)+(X-1-j));
			*(*(tab+i)+(X-1-j)) = temp;
		}
}

//Zadanie 5a
void diagonal(const int Y, const int X, double (*tab)[X]){
int i,j;
	for(i=0,j=-1;i<Y;i++,j++)
		*(*(tab + i)+(j+1))=0;
}

//Zadanie 5b
double sum(const int Y, const int X, double (*tab)[X]){
double sum=0;
int i,j;
	for(i=0,j=-1;i<Y;i++,j++)
		sum+=*(*(tab + i)+(j+1));
return sum;
}

//Zadanie 5c
double row_sum(int i, const int Y, const int X, double (*tab)[X]){
double sum = 0;
int j;
	for(j=0;j<X;j++){
		sum += *(*(tab + i)+j);
	}


return sum;	
}

//Zadanie 5d
double column_sum(int j, const int Y, const int X, double (*tab)[X]){
double sum = 0;
int i;
	for(i=0;i<Y;i++)
		sum += *(*(tab+i)+j);
return sum;
}

//Zadanie 5e
//For
void RRreverse(int i, int j, const int Y, const int X, double (*tab)[X]){
int col,temp;
	for(col=0;col<X;col++){
		temp = *(*(tab + i)+col);
		*(*(tab + i)+col) = *(*(tab + j)+col);
		*(*(tab + j)+col) = temp;
	}
}

//While

//void RRreverse(int i, int j, const int Y, const int X, double (*tab)[X]){
//int col = X,temp;
//	while(col--){
//		temp = *(*(tab + i)+col);
//		*(*(tab + i)+col) = *(*(tab + j)+col);
//		*(*(tab + j)+col) = temp;
//	}
//}




//Zadanie 5f
void cross_min(const int Y, const int X, double (*tab)[X]){
int i,j, min=**tab,ii=0,jj=0;
	for(i=0;i<Y;i++)
		for(j=0;j<X;j++){
			if(min>*(*(tab+i)+j)){
				min=*(*(tab+i)+j);
				ii=i;
				jj=j;
			}
		}		
	for(i=0;i<Y;i++)
		*(*(tab+i)+jj) = 0.0;		
	for(j=0;j<X;j++)
		*(*(tab+ii)+j) = 0.0;		
}

//Zadanie 5f
void cross_max(const int Y, const int X, double (*tab)[X]){
int i,j, max=**tab,ii=0,jj=0;
	for(i=0;i<Y;i++)
		for(j=0;j<X;j++){
			if(max<*(*(tab+i)+j)){
				max=*(*(tab+i)+j);
				ii=i;
				jj=j;
			}
		}		
	for(i=0;i<Y;i++)
		*(*(tab+i)+jj) = 0.0;
	for(j=0;j<X;j++)
		*(*(tab+ii)+j) = 0.0;
}

//Zadanie 5g
void transposition(const int Y, const int X, double (*tab)[X]){
int i,j,temp;
	if(Y==X){
		int x=X;
			while(x--){
				for(j=x;j>=0;j--){
					temp=*(*(tab+x)+j);
					*(*(tab+x)+j)= *(*(tab+j)+x);
					*(*(tab+j)+x)=temp;
				}
				
			}
	}
	else{
		double T[X][Y];
		printf("\n\n*Tablica nieprzekazana - tylko do wyswietlana*\n\n");
			for(i=0;i<X;i++){
				for(j=0;j<Y;j++){
					*(*(T+i)+j)=*(*(tab+j)+i);
					printf("%.1f\t", *(*(T+i)+j));
				}printf("\n");
			}
	}
}

//Zadanie 5h
void down_diagonal(const int Y, const int X, double (*tab)[X]){
int i,j;
	for(i=1;i<Y;i++)
		for(j=0;j<i;j++)
			*(*(tab+i)+j)=0;		
}

//Zadanie 5h
void up_diagonal(const int Y, const int X, double (*tab)[X]){
int i,j;
	for(i=0;i<Y;i++)
		for(j=i+1;j<X;j++)
			*(*(tab+i)+j)=0;
}

//Zadanie 6a
void multiplication(const int Y, const int X, int (*tab1)[X], int (*tab2)[X], int k){
int i,j;
	for(i=0;i<Y;i++)
		for(j=0;j<X;j++)
			*(*(tab2+i)+j)=k * *(*(tab1+i)+j);
			
}

//Zadanie 6b
void sum_arrays(const int Y, const int X, int (*tab1)[X], int (*tab2)[X], int (*tab3)[X]){
int i,j;
	for(i=0;i<Y;i++)
		for(j=0;j<X;j++)
			*(*(tab3+i)+j)=*(*(tab1+i)+j)+*(*(tab2+i)+j);
}

//Zadanie 6c
void asym_trans(const int Y, const int X, int (*tab3)[X], int (*tab4)[Y]){
int i,j;
	for(i=0;i<X;i++)
		for(j=0;j<Y;j++)
			*(*(tab4+i)+j)=*(*(tab3+j)+i);
}

