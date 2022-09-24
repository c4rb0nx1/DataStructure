// Tower of hanoi
#include <stdio.h>
#include <stdlib.h>
void ToH(int n, int S, int T, int D)
{
   if(n>0)
   {
      ToH(n-1,S,D,T);
      printf("\nMoving disk from %d to %d\n",S,D);
      ToH(n-1,T,S,D);
   }
}
void main()
{
   int n;
   scanf("%d",&n);
   ToH(n,1,2,3);
}
