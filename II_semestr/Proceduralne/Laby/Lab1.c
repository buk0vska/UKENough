#include<stdio.h>
int main(void){
int m[3][4]={{1,12,3,2},{4,5,16,1},{17,8,9,3}};
for (int i=0;i<3;i++)
 printf("\n%d ", **(m+i) );

int (*p)[4];
p=m;
printf("\n%p %d %p %d", *m, **m , *m+3, *(*m+3) );
printf("\n%p %d %p %d", *(p+2), **(p+2) ,*(p+2)+3, *(*(p+2)+3) );
printf("\n%p %d %p %d", m[1], *m[1] , m[1]+3, *(m[1]+3) );
printf("\n%d %d %d %d", sizeof(m), sizeof(p), sizeof(**m), sizeof(m[1]));
return 0;
}