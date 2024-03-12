#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int Num_of_elem_int(int *t, int size, int k); // Zadanie 1
double *max_double(double *t, int size);      // Zadanie 2
void b_sort(int *t1, int *t2);                // Zadanie 3
void reverse(int *t1, int *t2);               // Zadanie 3

int main()
{
    int t1[] = {1, 2, 3, 4, 5};
    double t2[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(t1) / sizeof(int), size2 = sizeof(t2) / sizeof(double);
    int k = *(t1 + 1);
    printf("%d", Num_of_elem_int(t1, size1, k));
    printf("\n%.2f\n", *max_double(t2, size2));

    return 0;
}

int Num_of_elem_int(int *t, int size, int k)
{
    int num = 0;

    while (size--)
    {
        if (*(t + size) > k)
            num++;
    }

    return num;
}
double *max_double(double *t, int size)
{
    double *max = t;

    while (--size)
    {
        if (*(t + size) > *max)
            max = t + size;
    }

    return max;
}

void b_sort(int *t1, int *t2)
{
    if (t1 > t2)
    {
        int *temp = t1;
        t1 = t2;
        t2 = temp;
    }
}

void reverse(int *t1, int *t2)
{
}