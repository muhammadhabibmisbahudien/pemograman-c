/* File: max.c */
/* Penulis : Bu Dengklek, email inge@bebras.or.id */
/* Deskripsi : */
/* Mencari nilai maksimum dari sebuah tabel yang berisi 10 nilai integer */
#include<stdio.h>
int main ()
{/* Kamus : */
  int i;
  int Tab[10]= { 0, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
  int max, min, total;
  double rataRata, median;
  /* Algoritma */
  max = Tab[0];
  min = Tab[0];
  total = 0;
  for (i=1;i< 10; i++)  {
     if (Tab[i]>max) {
        max=Tab[i];
     }
     if (Tab[i]<min) {
         min=Tab[i];
     }
     total = total+Tab[i];
     rataRata = total/12;
     median = (min+max)/2;
  } 
  printf ("Nilai Max= %d\n", max);  
  printf ("Nilai Min= %d\n", min);
  printf ("Total Nilai= %d\n", total);
  printf ("Rata-rata Nilai= %f\n", rataRata);
  printf ("Median = %f\n", median);
  return 0;
}
