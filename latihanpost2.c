#include <stdio.h>
 
int main()
{
   int A = 15;
   int B = 20;
   int C ;
 
   C = A;
   A = B;
   B = C;
 
   printf("A=%d, B=%d\n\n\n", A, B);
   return 0;
}
