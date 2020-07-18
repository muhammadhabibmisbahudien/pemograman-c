#include <stdio.h>

int main(void)
{
    printf("Program Menampilkan Nilai Sederhana\n");

    // variabel nilai
    int nilai;
    printf("Masukkan Nilai :");
    scanf("%d", &nilai);
    // cek kondisi jika nilai 90-100
    if (nilai >= 90 && nilai <= 100)
    {
        printf("Nilai %d mendapat nilai A", nilai);
    }
    // cek kondisi jika nilai 80-89
    else if (nilai >= 80 && nilai < 90)
    {
        printf("Nilai %d mendapat nilai B", nilai);
    }
    // cek kondisi jika nilai 70-79
    else if (nilai >= 70 && nilai < 80)
    {
        printf("Nilai %d mendapat nilai C", nilai);
    }
    // cek kondisi jika nilai 60-69
    else if (nilai >= 60 && nilai < 70)
    {
        printf("Nilai %d mendapat nilai D", nilai);
    }
    // cek kondisi jika nilai kurang dari 59
    else if (nilai < 60)
    {
        printf("Nilai %d mendapat nilai E", nilai);
    }
    // cek kondisi jika lebih dari 100
    else
    {
        printf("Nilai hanya sampai 100");
    }
    // return 0;
}
