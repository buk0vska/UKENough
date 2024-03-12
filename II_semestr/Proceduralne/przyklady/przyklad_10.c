#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COLUMNS 10
int main(void)
{
    int (*t)[COLUMNS], rows;

    printf("Podaj liczbe wierszy: ");
    scanf("%d", &rows);
    t = (int (*)[COLUMNS]) malloc(rows * COLUMNS * sizeof(int));

    printf("\nTwoja tablica:\n");
    srand((unsigned int) time(NULL));
    for (int i=0; i < rows; i++)
    {
        for (int j=0; j< COLUMNS; j++)
        {
            t[i][j] = rand() % 100;
            printf("%2d\t", t[i][j]);
        }
        putchar('\n');
    }
    free(t);
    return 0;
}
