// Nama : Frengky Manurung
// NIM  : 13321005
// Kelas: D3 Teknologi Komputer

#include <stdio.h>

void printMe(int p1, int p2)
{
    p1 = 10;
    p2 = 20;
    printf("Nilai dari p1: %d dan p2: %d\n", p1, p2);
}

void main()
{
    int a = 3;
    int b = 5;
    printf("Sebelum memanggil prosedur printMe: \n");
    printf("Memanggil prosedur printMe..\n");
    printMe(a, b);
    printf("Sesudah memanggil prosedur printMe:\n");
    printf("Nilai a: %d - Nilai b = %d\n", a, b);
}