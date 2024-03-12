#include <windows.h>
#include <stdio.h>
#define ROWS 3
#define COLUMNS 5
void print_array1(int *, int);
void print_array2(int (*)[COLUMNS], int, int);
int main(void)
{
	int *t1 = (int [COLUMNS]) {2,3,5,7,11};
    int (*t2)[COLUMNS] = (int [ROWS][COLUMNS]) {
        {1,3,5,17,11},
        {20,30,5,70},
        {7,8,6,88,19}};
	print_array1(t1, COLUMNS);
	printf("\n--------------------------------------\n");
    print_array1((int [4]) {40,50,60,70}, 4);
    printf("\n--------------------------------------\n");
    print_array2(t2, ROWS, COLUMNS);
    printf("\n--------------------------------------\n");
    print_array2((int [2][5]) {{5,-6,8,9,1},{5,6,7,2,4}}, 2, 5);
	return 0;
}
void print_array1(int *array, int columns)
{
    for(int i = 0; i < columns; i++)
       printf("%d  ", array[i]);

}
void print_array2(int (*array)[COLUMNS], int rows, int columns)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
            printf("%4d", array[i][j]);
        putchar('\n');
      
    }
}

