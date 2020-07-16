/* File: WHILEdo.c */
/* Penulis : Bu Dengklek, email inge@bebras.or.id */
/* Deskripsi : */
/* print “Saya senang” sebanyak 3 kali */
#include<stdio.h>
int main ()
{
/* Kamus : */
 int i=0, N;
  printf("masukan N :");
  scanf("%d", &N);
/* Algoritma */
 while (i<=N) { /* program diulang selama nilai i < 3 */
     printf ("Saya senang belajar bahasa C \n");
     i++;
 }
 return 0;
}
