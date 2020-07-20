#include<stdio.h>
int main ()
{
  int inputJam ;
  printf("Masukkan Jam :");
  scanf("%d", &inputJam);
  
  if(inputJam >=8 && inputJam<=11 )
  {
    printf("waktu belajar");
  } 
  else if(inputJam >=13 && inputJam<=17 )
  {
    printf("waktu belajar");
  }
  else if(inputJam ==12  )
  {
    printf("waktu istirahat");
  }
  else if(inputJam >=4 && inputJam<=5 )
  {
    printf("waktu bangun");
  }
  else if(inputJam > 5 && inputJam < 8 )
  {
    printf("waktu main");
  }
  else {
    printf("waktu melebihi sampai 24 Jam");
  } 
  return 0;
}
