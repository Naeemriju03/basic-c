#include <stdio.h>

int main()
{
   int i,n;
   scanf("%d",&n);
   if(0>=n){
   for(i=n;i<=1;i=i+1)
   {
       printf("%d ", i);
   }
   }
     else
       {
     for(i=1;i<=n;i=i+1)
     {
        printf("%d ", i);
     }
      }

    return 0;
}
