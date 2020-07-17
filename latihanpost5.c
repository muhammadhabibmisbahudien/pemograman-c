#include<stdio.h>
int main ()
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
        namabulan = "maret";
        break;
    case 4:
        namabulan = "april";
        break;
    case 5:
        namabulan = "mei";
        break;
    case 6:
        namabulan = "juni";
        break;    
    case 7:
        namabulan = "juli";
        break;
    case 8:
        namabulan = "agustus";
        break;
    case 9:
        namabulan = "september";
        break;
    case 10:
        namabulan = "oktober";
        break;
    case 11:
        namabulan = "november";
        break;
    case 12:
        namabulan = "desember";
        break;
    default:
      namabulan = "Bulan hanya sampai Desember";
  }
  
  // print result:
  printf("%d %s %d", tanggal, namabulan, tahun);
  return 0;
}
