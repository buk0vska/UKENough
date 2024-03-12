#include <stdio.h>
#define N 5
int main(void)
{
	int *t = (int [N]) {10, 15, 20, 25, 30};

	for(int i = N - 1; i >= 0; i--)
        printf("t[%d] = %d\n", i, t[i]);

    printf("------------------------------------\n");
	for(int *p = t; p < &t[N]; p++)
        printf("%d\n", *p);


	return 0;
}
