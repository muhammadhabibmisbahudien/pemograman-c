#include <stdio.h>
int main()
{
    // input
    int tanggal = 21;
    int bulan = 4;
    int tahun = 2020;
    char *namabulan;
    // kode disini
    switch (bulan)
    {
    case 1:
        namabulan = "Januari";
        break;
    case 2:
        namabulan = "Februari";
        break;
    case 3:
        namabulan = "Maret";
        break;
    case 4:
        namabulan = "April";
        break;
    case 5:
        namabulan = "Mei";
        break;
    case 6:
        namabulan = "Juni";
        break;
    case 7:
        namabulan = "Juli";
        break;
    case 8:
        namabulan = "Agustus";
        break;
    case 9:
        namabulan = "September";
        break;
    case 10:
        namabulan = "Oktober";
        break;
    case 11:
        namabulan = "November";
        break;
    case 12:
        namabulan = "Desember";
        break;
    default:
        namabulan = "Bulan hanya sampai Desember";
    }
    printf("%d %s %d", tanggal, namabulan, tahun);
    return 0;
}