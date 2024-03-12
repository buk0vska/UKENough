#include <stdio.h>

 int k = 3;
 
 int f ( int *p ) {
 k = ++* p;
 int k = 2;
 return (* p ) ++* k;
 }
 
 int g ( int x) {
 return ++ k * ++ x ;
 }
 
 int main ( void )
 {
 int m = 3 , n = 2;

 printf ("%d ", f (& m ) ) ; printf ("%d %d\n", m , k ) ;
 printf ("%d ", g (n--) ) ; printf ("%d %d", n , k ) ;

 return 0;
}
