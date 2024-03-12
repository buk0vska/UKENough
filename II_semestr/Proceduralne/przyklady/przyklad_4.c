#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int get_natural(void);
int *create_array(int elem);
void print_array(int *, int);
int main(void)
{
	int *wt;
	int size;
	printf("Podaj liczbe elementow: ");
	size = get_natural();
	while (size > 0)
	{
		wt = create_array(size);
		if(wt)
		{
			print_array(wt, size);
            free(wt);                   // zwolnienie pamieci
		}
		printf("Podaj liczbe elementow (<= 0 - koniec): ");
		size = get_natural();
	}
	printf("Koniec.\n");
	return 0;
}
int get_natural(void)
{
	int number, ch;
	while (scanf("%d", &number) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch); // pomija bledne dane wejsciowe
		printf(" - nie jest liczba naturalna!\nProsze podac liczbe np. 2, 7 itd. \n");
	}
	return number;
}
int *create_array(int size)
{
	int *p;
	srand((unsigned int) time(NULL));
	p = (int *) malloc(size * sizeof(int));
	for(int i = 0; i < size; i++)
		p[i] = rand() % 10 + 1;
	return p;
}
void print_array(int t[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%4d", t[i]);
		if(i % 10 == 9)
			putchar('\n');
	}
	if(i % 10 != 0)
		putchar('\n');
}
