#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n+1];
   for(int i=0;i<n;i++)
   {
      scanf("%d",&ar[i]);
   }
   int poss,valu;
   scanf("%d %d",&poss,&valu);
   for(int i=n;i>=poss+1;i--)
   {
     ar[i]=ar[i-1];
   }
   ar[poss]=valu;
   for(int i=0;i<=n;i++)
   {
       printf("%d ",ar[i]);
   }
    return 0;
}

