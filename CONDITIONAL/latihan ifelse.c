#include<stdio.h>
int main()
{
  int a;
  printf("contoh IF dua kasus\n");
  printf("ketikkan suatu nilai integer:");
  scanf("%d", &a);
  if (a==80)
  {
    printf("nilai a ");
  }
  else if (a==70)
  {
    printf("nilai b ");
  }
  else if (a==60)
  {
    printf("nilai c ");
  }
  else 
  {
    printf ("nilai d");
  }
}