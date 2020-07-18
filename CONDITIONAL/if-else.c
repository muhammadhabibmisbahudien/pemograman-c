
#include<stdio.h>
int main ()
{
/* Kamus */
  int a;
  /* Program */
  printf ("Contoh IF dua kasus \n");
  printf ("Ketikkan suatu nilai integer :");
  scanf ("%d", &a);
  if (a >= 0)
    {
      printf ("Nilai a positif %d \n", a);
      print("positif", a);
    }
  else /* a< 0 */
    {
      printf ("Nilai a negatif %d \n", a);
    }
  return 0;
}