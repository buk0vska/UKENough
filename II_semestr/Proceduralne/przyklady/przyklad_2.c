#include<stdio.h>
int main(void)
{
    int t[2][3] = {{1,2,3},
                    {4,5,6}};
    int (*p)[3];

    p = &t[0]; // lub p = t;  ale nie p = t[0]; (inne typy!)


    printf("t[0][0] = %d\n", t[0][0]);
    printf("t[1][1] = %d\n", p[1][1]);
    printf("t[1][2] = %d\n", *(*(t + 1) + 2));
    printf("t[1][1] = %d\n", *(*(p + 1) + 1));

    printf("-------------------------------------\n");
    printf("adres tablicy t: %p\n", t);                 // ten sam adres co ni¿ej ale inny typ!!
    printf("adres tablicy t[0]: %p\n", t[0]);
    printf("rozmiar tablicy t w bajtach: %lld\n", sizeof(t));
    printf("rozmiar tablicy t[0] w bajtach: %lld", sizeof(t[0]));

    return 0;
}
