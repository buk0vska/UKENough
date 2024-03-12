#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int* t1[] = {(int[]) {9, 8, 7},(int[]) {3, 5, 2},(int[]) {0, 4, 7}};


    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            printf("%2d", t1[i][j]);
        putchar('\n');
    }
    printf("--------------------------------\n");

    int* t2[3];

    int arr0[4] = {4,5,6,7};
    int arr1[4] = {1,2,6,4};
    int arr2[4] = {7,8,0,3};

    t2[0] = arr0;
    t2[1] = arr1;
    t2[2] = arr2;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
            printf("%2d", t2[i][j]);
        printf("\n");
    }
    return 0;
}
