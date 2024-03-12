#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int get_number(int, int);
int main(void)
{
    printf("Podaj liczbe wierszy tablicy: ");
    int n = get_number(1, 50);
    int *size_array = (int *) malloc(n * sizeof(int));

    srand((unsigned int) time(NULL));
    for(int i = 0; i < n; i++)
        size_array[i] = 2 + rand() % 14;

    double **t;
	t = (double **) malloc(n * sizeof(double *));    // tablica wskaŸników
		for(int i = 0; i < n; i++)
			t[i]=(double *) malloc(size_array[i] * sizeof(double));

    printf("\nTwoja tablica postrzepiona:\n");
    srand((unsigned int) time(NULL));
    for (int i=0; i < n; i++)
    {
        for (int j=0; j < size_array[i]; j++)
        {
            t[i][j] = (double) (rand() % 100) + (double) rand()/RAND_MAX;
            printf("%7.2f", t[i][j]);
        }
        putchar('\n');
    }
    // zwalnianie pamiêci
    free(size_array);
    for (int i = 0; i < n; i++)
		free(t[i]);
	free(t);
}
int get_number(int a, int b)
{
	int n;

	while(1)
	{
		printf("Podaj liczbe z zakresu %d - %d: ", a, b);
		if(scanf("%d", &n))
		{
			if (n > b || n < a)
				continue;
			return n;
		}
		else
			while(getchar() != '\n')			// czyszczenie bufora
				continue;
	}

}
