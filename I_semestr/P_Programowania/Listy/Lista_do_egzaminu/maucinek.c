#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//#define N 7

// int k = 3;
// int f ( int *p ) {
// k = ++*p;
// int k = 2;
// return (*p) ++*k;
// }
// int g ( int x) {
// return ++k * ++x ;
// }
// int main ( void )
// {
// int m = 3 , n = 2;
//
// printf ("%d ", f (& m ) ) ; printf ("%d %d\n", m , k ) ;
// printf ("%d ", g (n--) ) ; printf ("%d %d", n , k ) ;
 # define N 5
 int main ( void )
 {
 int tab [ N ];
int i;
 for ( i = N - 1; i >= 0; i--)
 tab [ i ] = N * ( i + 1) ;

int *p;
 for ( p = tab ; p < &tab [ N ]; p++)
 if (*p % 2 == 0)
 *p -= 2;
 else
 *p += *tab ;

for(i=0;i<N;i++) printf("%d ", *(tab+i));


 return 0;
 }
