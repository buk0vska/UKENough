#include <stdio.h>
int main(void)
{
    float x = 3.14f, *p = &x;
    float **q = &p;

    printf("wartosc zmiennej x: %f\n", x);
    printf("wartosc zmiennej x: %f\n", *p);
    printf("wartosc zmiennej x: %f\n", **q);

    printf("wartosc zmiennej p: %p\n", p);
    printf("wartosc zmiennej p: %p\n", *q);

    printf("wartosc zmiennej q: %p\n", q);

    printf("-----------------------------------------------\n");
    **q = 2.72f;
    printf("wartosc zmiennej x: %f\n", x);
    *p = 3.14f;
    printf("wartosc zmiennej x: %f\n", x);


    return 0;
}



