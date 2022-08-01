// Nama : Frengky Manurung
// NIM  : 13321005
// Kelas: D3 Teknologi Komputer

#include <stdio.h>
#include <stdlib.h>

int i, j;

void printMe(int **arr)
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c\t", arr[i][j]);
        }
        printf("\n");
    }
}
void tukarNilai(int **arr)
{
    int **temp = (int **)malloc(3 * sizeof(int *));
    for (i = 0; i < 3; i++)
    {
        temp[i] = (int *)malloc(3 * sizeof(int));
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr[i][j] = temp[2 - i][2 - j];
        }
    }
    printf("Tukar nilai sukses\n");
}

void main()
{
    int **arr = (int **)malloc(3 * sizeof(int *));
    for (i = 0; i < 3; i++)
    {
        arr[i] = (int *)malloc(3 * sizeof(int));
    }
    arr[0][0] = 'a';
    arr[0][1] = 'b';
    arr[0][2] = 'c';
    arr[1][0] = 'd';
    arr[1][1] = 'e';
    arr[1][2] = 'f';
    arr[2][0] = 'g';
    arr[2][1] = 'h';
    arr[2][2] = 'i';
    printf("Sebelum memanggil prosedur tukarNilai:\n");
    printMe(arr);
    printf("Memanggil prosedur tukarNilai:\n");
    tukarNilai(arr);
    printf("Sesudah memanggil prosedur tukarNilai:\n");
    printMe(arr);
}