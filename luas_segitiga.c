// Nama : Frengky Manurung
// NIM  : 13321005
// Kelas: D3 Teknologi Komputer

#include <stdio.h>

void luasSegitiga(int a, int t)
{
    a = 10;
    t = 20;
    printf("Luas Segitiga adalah = %d\n", (a * t) / 2);
}

void main()
{
    int a = 3, t = 2;
    printf("Sebelum memanggil prosedur luasSegitiga:\n");
    printf("Luas Segitiga adalah: %d\n", (a * t) / 2);
    printf("\nMemanggil prosedur printMe:\n");
    luasSegitiga(a, t);
    printf("\nSesudah memanggil prosedur luasSegitiga:\n");
    printf("\nLuas Segitiga adalah: %d", (a * t) / 2);
}