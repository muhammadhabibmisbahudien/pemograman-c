#include <stdio.h>
int main()
{
    char nama[10] = "saitama";
    char peran[10] = "superhero";

    // kode disini
    if (nama == "" && peran == "")
    {
        printf("Nama dan Peran Harus Di Isi");
    }
    else if (nama != "" && peran == "")
    {
        printf("Peran Harus Di Isi");
    }
    else if (nama != "" && peran == "superhero")
    {
        printf("Selamat Datang Superhero Saitama, Kalahkan Semua Monster Di Muka Bumi");
    }
    else if (nama != "" && peran == "monster")
    {
        printf("Selamat Datang Monster Saitama, Hancurkan Semua Superhero Yang Ada");
    }
    else
    {
        printf("Selamat Datang Saitama, Pilih Peranmu Untuk Melanjutkan Game Ini");
    }
}