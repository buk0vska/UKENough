#include <stdio.h>
int main(void)
{

    int* t1[] = {
        (int[]) {3, 4, 5},
        (int[]) {1, 5, 2, 9},
        (int[]) {2, 4}};

    for(int i = 0; i < 3; i++)
        printf("%2d", t1[0][i]);
    putchar('\n');

    for(int i = 0; i < 4; i++)
        printf("%2d", t1[1][i]);
    putchar('\n');

    for(int i = 0; i < 2; i++)
        printf("%2d", t1[2][i]);
    putchar('\n');

    printf("----------------------------\n");

    int* t2[3];

    int arr0[3] = {4,5,6};
    int arr1[2] = {1,2};
    int arr2[4] = {7,8,0,3};

    t2[0] = arr0;
    t2[1] = arr1;
    t2[2] = arr2;



    for(int i = 0; i < 3; i++)
    {
        switch (i)
        {
            case 0:
                for(int j = 0; j < 3; j++)
                    printf("%2d", t2[i][j]);
                printf("\n");
                break;
            case 1:
                for(int j = 0; j < 2; j++)
                    printf("%2d", t2[i][j]);
                printf("\n");
                break;
            case 2:
                for(int j = 0; j < 4; j++)
                    printf("%2d", t2[i][j]);
                printf("\n");
                break;
        }

    }
    return 0;
}
