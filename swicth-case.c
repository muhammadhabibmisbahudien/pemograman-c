#include <stdio.h>

int main(void)
{
    printf("Program Menampilkan Nilai Sederhana\n");

    // variabel nilai
    int nilai;
    printf("Masukkan Nilai :");
    scanf("%d", &nilai);

    switch (nilai)
    {
    case 90:
        printf("Nilai %d mendapat nilai A");
        break;
    case 80:
        printf("Nilai %d mendapat nilai B");
        break;
    default:
        printf("Nilai %d mendapat nilai C");
    }
    return 0;
}
