#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int licz(double *p1, double *p2, double x);      // Zadanie 1
double *maksymalny(double *t, int size);         // Zadanie 2
int wiekszych(int *t, int size, int k);          // Zadanie 3
double *create_double_array(int k);              // Zadanie 4
void complete_double_array(double *t, int size); // Zadanie 4
void print_double_array(double *t, int size);    // Zadanie 4
int *create_int_array(int k);                    // Zadanie 4
void complete_int_array(int *t, int size);       // Zadanie 4
void reverse(int *p1, int *p2);                  // Zadanie 5

// void new_create_array(void *p, int k, int x);         // Testy
// void new_complete_array(void *t, int size, int type); // Testy
// void new_print_array(void *t, int size, int type);    // Testy

void print_int_array(int *, int size);

int main(void)
{
    srand((unsigned)time(NULL));
//               |0   |1   |2   |3   |4   |5   |6   |7   |8
    double t[] = {8.0, 2.0, 1.0, 6.0, 2.0, 7.0, 5.0, 2.0, 90.0};
    int n = licz(t + 1, t + 7, 2.0);
//     printf("%d\n", n);
    int r = sizeof(t) / sizeof(double);
//    printf("%d", r);
//    double* d=maksymalny(t, r);
//    printf("%.1f\n", *d);
//             |0  |1 |2 |3 |4 |5 |6 |7 |8 |9
    int t1[] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    r = sizeof(t1) / sizeof(int);
//    printf("%d", r);
//    printf("%d", wiekszych(t1, r, 8));

    int n2 = 1, m2 = 1;
    do
    {
        printf("\nPodaj n:\n");
        scanf("%d", &n2);
    } while (n2 < 1);
    do
    {
        printf("\nPodaj m:\n");
        scanf("%d", &m2);
    } while (m2 < 1);

    double *t2 = create_double_array(n2), *t3 = create_double_array(m2), *t4 = create_double_array(n2 + m2);

    complete_double_array(t2, n2), complete_double_array(t3, m2);

    int i;
    for (i = 0; i < n2; i++)
    {
        *(t4 + i) = *(t2 + i);
    }
    for (int j = 0; i < n2 + m2; i++, j++)
    {
        *(t4 + i) = *(t3 + j);
    }
    print_double_array(t2, n2), print_double_array(t3, m2), print_double_array(t4, n2 + m2);

//  ---------------------------------------------------------------------------------------

    int size = 5;
    int *t5 = create_int_array(size);
    complete_int_array(t5, size);
    print_int_array(t5, size);
    reverse(t5, t5+(size-1));
    print_int_array(t5, size);

    free(t2), free(t3), free(t4), free(t5);
    return 0;
}
void print_int_array(int *t, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *(t + i));
        if (i > 0 && i % 10 == 0)
            putchar('\n');
    }
    putchar('\n');
}

void print_double_array(double *t, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.1f\t", *(t + i));
    }
    printf("\n\n");
}

void complete_double_array(double *t, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(t + i) = (rand() % 110) / 10.0;
    }
}

double *create_double_array(int k)
{
    double *p;
    if ((p = (double *)malloc(k * sizeof(double))) == NULL)
    {
        printf("\nOperacja nie powiodla sie");
        // exit(1);
    }
    return p;
}

void reverse(int *p1, int *p2)
{
    if (p1 > p2)
    {
        int *temp = p1;
        p1 = p2;
        p2 = temp;
    }
    int size = p2 - p1;
    for (int i = 0; i < (size / 2); i++)
    {
        int temp = *(p1+i);
        *(p1+i) = *(p2-i);
        *(p2-i) = temp;
    }
}

void new_complete_array(void *t, int size, int type)
{
    switch (type)
    {
    case 1:
        for (int i = 0; i < size; i++)
        {
            *((int *)t + i) = rand() % 11;
        }
        break;
    case 2:
        for (int i = 0; i < size; i++)
        {
            *((double *)t + i) = rand() % 110 / 10;
        }
        break;

    default:
        printf("\nWrong type\n");
        break;
    }
}

void new_print_array(void *t, int size, int type)
{
    switch (type)
    {
    case 1:
        for (int i = 0; i < size; i++)
        {
            printf("%d\t", *((int *)t + i));
        }
        printf("\n\n");
        break;
    case 2:
        for (int i = 0; i < size; i++)
        {
            printf("%.1f\t", *((double *)t + i));
        }
        printf("\n\n");
        break;

    default:
        printf("\nWrong type\n");
        break;
    }
}

void new_create_array(void *p, int k, int type)
{
    switch (type)
    {
    case 1:
        p = (int *)malloc(k * (sizeof(int)));
        break;
    case 2:
        p = (double *)malloc(k * (sizeof(double)));
        break;

    default:
        p = NULL;
        printf("\nWrong type\n");
        break;
    }
}

int wiekszych(int *t, int size, int k)
{
    int num = 0;

    while (size--)
    {
        if (*t++ > k)
            num++;
    }

    return num;
}

double *maksymalny(double *t, int size)
{
    double *max = t;

    for (int i = 1; i < size; i++)
    {
        if (*(t + i) > *max)
            max = t + i;
    }

    return max;
}

int licz(double *p1, double *p2, double x)
{
    int num = 0;
    if (p1 > p2)
    {
        double *p3 = p1;
        p1 = p2;
        p2 = p3;
    }
    for (; p1 < p2; p1++)
    {
        if (*p1 == x)
            num++;
    }
    return num;
}

int *create_int_array(int k)
{
    int *p;
    if ((p = (int *)malloc(k * sizeof(int))) == NULL)
    {
        printf("\nOperacja nie powiodla sie");
        // exit(1);
    }
    return p;
}

void complete_int_array(int *t, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(t + i) = rand() % 11;
    }
}

