#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10
void p(int x);	//Zadanie 1 - A
void q(int x);	//Zadanie 1 - B
void w(int x);	//Zadanie 1 - C - ERROR
int f(int x);	//Zadanie 1 - D
int f1(int x);	//Zadanie 1 - E
int sum(int x);	//Zadanie 2a
int pro(int x);	//Zadanie 2b
int power(int base, int exponent);	//Zadanie 3
int gcd(int x, int y);	//Zadanie 4	
int bin(int x);	//Zadanie 5
int LinearSearch();	//Zadanie 6
int BinarySearch();	//Zadanie 7
void reverse();	//Zadanie 8
int A();	//Zadanie 10

int main(void){
int x;
int k = 2;
int size = N/2;
int i;
int tab[N] = {2,3,6,5,4,6,4,1,8,2};
int tab2[N]	={1,2,3,4,5,6,7,8,9,10};
	p(1);					//Zadanie 1 - A
	printf("\n\n");
	q(1);					//Zadanie 1 - B

	//	printf("\n\n");
	//	w(0);	//ERROR		//Zadanie 1 - C

	printf("\n\n");
	printf("%d",f(11));		//Zadanie 1 - D

	printf("\n\n");
	printf("%d\n",f1(5));	//Zadanie 1 - E
	
	printf("\n\n\nSuma 1+ 3 + 5 + ... + (2n-1), dla n=3:\t%d\n", sum(3));	//Zadanie 2a
	printf("\nIloczyn 1 * 4 * 7 * ... * (3n-2), dla n=3:\t%d\n", pro(3));	//Zadanie 2b	
	
	printf("\n\n%d\n\n", power(3,2));	//Zadanie 3
	
	printf("\n\n%d\n\n", gcd(12,8));	//Zadanie 4

	x=6;
	printf("\n\nReprezentacja binarna liczby %d:\n", x);	//Zadanie 5
	bin(x);	

	printf("\n\nNajwyzszy indeks elementu %d w tablicy wynosi: [%d]", k, LinearSearch(tab, N, k));	//Zadanie 6
	
	k = 5;
	printf("\n\nIndeks szukanego elementu: %d\n\n", BinarySearch(tab2, N, k, 0, N-1));	//Zadanie 7

	reverse(tab2, 0, N-1);					//Zadanie 8
	printf("\nOdwrocona tablica:\t");
	for(i=0;i<N;i++) printf("%d\t",*(tab2+i));
	printf("\n\n");
	printf("\n\n%d\n\n", A(4,1));
	
	return 0;
}

//Zadanie 1a
void p(int x){
	printf("%d\n",x);
	if (x<3) p(x+1);
	printf("%d\n",-x);
}

//Zadanie 1b
void q(int x){
	if (x<3) q(x+1);
	printf("%d\n",x);
	if (x<4) q(x+2);
}

//ERROR
//Zadanie 1c
void w(int x){
	if (x<3 && x>-4){
	 w(-x-1);
	 printf("%d\n",2-x);
	}
}

//Zadanie 1d
int f(int x){
	printf("%d\n",x);
	if (x>1) return f(x/2)*3;
	return 1;
}

//Zadanie 1e
int f1(int x){
	printf("%d\n",x);
	if (x<3) return x;
	return f1(x-1)+f1(x-3);
}

//Zadanie 2a
int sum(int x){
	if(x==1) return 1;
	else return sum(x-1)+2*x-1;

}

//Zadanie 2b
int pro(int x){	
	if(x==1) return 1;
	else return pro(x-1)*(3*x-2);
}

//Zadanie 3
int power(int base, int exponent){
	if(exponent<1) return 1;
	else return base * power(base, exponent-1);
}

//Zadanie 4
int gcd(int x, int y){
	if(x==0) return y;
	return gcd(y%x,x);
}

//Zadanie 5
int bin(int x){
	if(x>0) {
		bin(x/2);
		printf("%d\t", x%2);
	}else return 1;
}

//Zadanie 6
int LinearSearch(int *t, int n, int k){
int i;
	if( n-1 >= 0 ){
		if( *( t+(n-1) ) == k )
			return n-1;
		else LinearSearch(t,n-1,k);
	}	else return -1;
}

//Zadanie 7
int BinarySearch(int t[], int n, int x, int left, int right){
int mean = (left+right) / 2;
	if ( t[mean] < x) left=mean+1;
	else right=mean-1;
		
	if(t[mean]!=x && left<=right) BinarySearch(t,n,x,left,right);
	else
	
	if (t[mean]==x) return mean;
	else return -1;
}

//Zadanie 8
void reverse(int *t, int left, int right){
	int temp = *(t+left);
	*(t+left++) = *(t+right);
	*(t+right--) = temp;

	if(left<right) reverse(t,left,right);
}

////Zadanie 9
//#include <stdio.h>
//int main (void){
//	int c;
//
////wpisz ci¹g tekstowy, wciœnij enter i wprowadŸ Ctrl + Z
//	if((c = getchar ()) != EOF){
//		main();
//		printf ("%c", c);
//	}
//
//	return 0;
//}

//Zadanie 10
int A(int m, int n){
	printf("m = %d\nn = %d\n\n", m, n);
	if(m==0) return n++;
	if(m>0 && n==0) return A(m-1,1);
	if(m>0 && n>0) return A(m-1, A( m, n-1 ));
}

