#include<stdio.h>
#define N 3
void print_tab(int [][N], int);
void reset_row(int (*)[N], int);
void reset_column(int (*)[N], int , int);
int main(void)
{
    int t[4][N] = { {1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {10,11,12}};

    print_tab(t, 4);
    printf("-----------------------\n");
    reset_row(t, 1);
    print_tab(t, 4);

    printf("-----------------------\n");
    reset_column(t, 1, 4);
    print_tab(t, 4);
    return 0;
}
void print_tab(int tab[][N], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < N; j++)
            printf("%-4d", tab[i][j]);
        printf("\n");
    }
}

void reset_row(int (*t)[N], int i)
{

    for(int *p = t[i]; p < t[i] + N; p++)
        *p = 0;

}

void reset_column(int (*t)[N], int i, int rows)
{

    for(int (*p)[N] = &t[0]; p < &t[rows]; p++)
        (*p)[i] = 0;

}
