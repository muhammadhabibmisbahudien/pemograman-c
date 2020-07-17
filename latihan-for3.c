/* File: for.c */
/* Penulis : Bu Dengklek, email inge@bebras.or.id */
/* Deskripsi :                                                   
/* print “Saya senang” sebanyak 3 kali */
#include<stdio.h>
int main ()
{
/* Kamus : */
 int i, N;
  printf(" masukan N :");
  scanf("%d", &N);
 /* Algoritma */
 for (i=1; i<=N; i++) {
     printf ("%d Saya senang belajar bahasa C \n", i);

 }
  return 0;
}
