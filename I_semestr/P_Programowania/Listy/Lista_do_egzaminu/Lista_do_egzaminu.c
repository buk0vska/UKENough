#include <stdio.h>
void sort();
void f ();
int g1();
int f1();	
int main(){

 double y = 1.5 , x = 0.0;
float z = 2.5f ;
z = 3 == 7 ? z : 2 * z ;

//printf("%.1f %.1f",x, y);
printf("%f",z);


unsigned int b = 2;
 b += (7 % 4) /2 + 3;
printf("\n%d",b);

double p = 5e-2;
printf("\n\n%.2f",p);

printf("\n\n%d\n%f\n", (int) 5e-2 + 3.9,(int) 5e-2 + 3.9);

printf("\n\n%d\n",13 + 6/2 * 3);


 int tab [3][4]= {{3 , 8 , 9 , 0} ,{3 , 7 , 9 , 1} ,{0 , 1 , 6 , 2}};
 int i = 0 , j ;
 while ( i < 3) {
 for ( j = i ; j < 4; j += 2)
 if( tab [ i ][ j ] > 4)
 printf ("%d %d\n", i , j ) ; ++ i ;
 }

int tab3[]={9,8,7,6,5,4,3};

int r=(sizeof tab3)/4;
printf("\n\n%d\n\n",r);

sort(tab3,r);

printf("\n\n");
for(i=0;i<r;i++) printf("%d\t", *(tab3+i));
printf("\n\n");



 int aa = 1 , bb = 7;
 f( aa++ , &bb ) ;
 printf ("a = %d b = %d\n", aa , bb ) ;
 f(++bb , &aa ) ;
 printf ("a = %d b = %d\n", aa , bb ) ;

 i = 1 ; j = 2;
 printf ("\n %d %d\n", 2 * f1 (&i ) + 2 , g1(f1(&j) + g1(1) )) ;
 printf ("\n %d %d\n", i , j ) ;


 int m =5 , n =1;
 while (m >0) {
 int k =1;
 while (k <= m ) {
 printf (" ") ;
 ++ k ;
 }
 for ( k =1; k <= n ; ++ k ) printf ("x") ;
 --m ;
 ++ n ;
 printf ("\n") ;
 }





	return 0;
}

void sort ( int tab [] , int n ){ //n liczba element ów tablicy
int i , j , temp ;

	for(j = n - 1; j > 0; j--){
	for ( i = 0; i < j ; i++)
		if( tab [ i ] > tab [ i +1]){
		temp = tab [ i ];
		tab [ i ] = tab [ i +1];
		tab [ i +1] = temp ;
		}
	}
}

void f( int n , int *k ) {
 n++; --*k ;
 }
 
 int f1( int *p ) {
return (*p)--;
}
 int g1( int n) {
 return n * 3;
 }




