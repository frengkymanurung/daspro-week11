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
    printf("Alamat a = %d\n", &a);
    printf("Alamat b = %d\n", &b);
    printf("Alamat c = %d\n", &c);
    printf("Alamat d = %d", &d);
}