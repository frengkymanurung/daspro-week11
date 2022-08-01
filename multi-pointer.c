// Nama : Frengky Manurung
// NIM  : 13321005
// Kelas: D3 Teknologi Komputer

#include <stdio.h>

int main()
{
    int a = 10;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    printf("Nilai a = %d", ***d);
}