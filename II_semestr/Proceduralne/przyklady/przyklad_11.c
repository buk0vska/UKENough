#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int rows;
    int columns;

    printf("Podaj liczbê wierszy: ");
    scanf("%d", &rows);
    printf("Podaj liczbê kolumn: ");
    scanf("%d", &columns);

    double **t;
	t = (double **) malloc(rows * sizeof(double *));    // tablica wskŸników
		for(int i = 0; i < rows; i++)
			t[i]=(double *) malloc(columns * sizeof(double));

    printf("\nTwoja tablica:\n");
    srand((unsigned int) time(NULL));
    for (int i=0; i < rows; i++)
    {
        for (int j=0; j < columns; j++)
        {
            t[i][j] = (double) (rand() % 100) + (double) rand()/RAND_MAX;
            printf("%.2f\t", t[i][j]);
        }
        putchar('\n');
    }
    // zwolnienie pamiêci
    for (int i = 0; i < rows; i++)
		free(t[i]);
	free(t);
    return 0;
}
