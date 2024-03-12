#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double *t = (double *) calloc(3, sizeof(double));


	for(int i = 0; i < 3; i++)
        printf("t[%d] = %f\n", i, t[i]);

    free(t);
	return 0;
}
