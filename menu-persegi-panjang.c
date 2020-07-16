#include <stdio.h>

int main(void)
{
    printf("Program Keliling/Luas Persegi Panjang\n");

    // variabel nilai
    int panjang, lebar, kel, luas;
    int pilMenu;
    printf("Menu Persegi Panjang :\n");
    printf("1. Keliling\n");
    printf("2. Luas\n");
    printf("Masukkan Pilihan :");
    scanf("%d", &pilMenu);

    switch (pilMenu)
    {
    case 1:
        printf("Keliling Persegi Panjang \n");
        printf("Masukkan Panjang :");
        scanf("%d", &panjang);
        printf("Masukkan Lebar :");
        scanf("%d", &lebar);
        printf("Keliling Persegi Panjang : 2*(%d + %d) = %d",panjang, lebar, 2*(panjang+lebar));
        break;
    case 2:
        printf("Luas Persegi Panjang\n");
        printf("Masukkan Panjang :");
        scanf("%d", &panjang);
        printf("Masukkan Lebar :");
        scanf("%d", &lebar);
        printf("Luas Persegi Panjang: %d * %d = %d",panjang, lebar, panjang*lebar);
        break;
    default:
        printf("Menu tidak ada!");
    }
    return 0;
}
