#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double *t = (double *) realloc(NULL, 2 * sizeof(double));   // analog malloc()

	t[0] = 1.2;
	t[1] = 2.4;
	t = (double *) realloc(t, 3 * sizeof(double));
	t[2] = 3.6;

	for(int i = 0; i < 3; i++)
        printf("t[%d] = %f\n", i, t[i]);

    if(realloc(t, 0)) exit(1);      //analog free()
	
	return 0;
}
