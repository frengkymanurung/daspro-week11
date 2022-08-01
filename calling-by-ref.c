// Nama : Frengky Manurung
// NIM  : 13321005
// Kelas: D3 Teknologi Komputer

#include <stdio.h>

void tukarNilai(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("Tukar nilai sukses\n");
}

void main()
{
    int a = 3;
    int b = 5;
    printf("Sebelum memanggil prosedur tukarNilai:\n");
    printf("Nilai a: %d - Nilai b = %d\n", a, b);
    printf("Memanggil prosedur tukarNilai..\n");
    tukarNilai(&a, &b);
    printf("Sesudah memanggil prosedur tukarNilai:\n");
    printf("Nilai a: %d - Nilai b = %d\n", a, b);
}
