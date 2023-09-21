#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i =0;i<n;i=i+1)
    {
        scanf("%d ",&array[i]);
    }
    int inp,inpv;
    scanf("%d %d",&inp,&inpv);
     for(int i=0;i<n;i=i+1)
    {
         if(i==inp)
        {
            array[i]=inpv;
        }
    }
    for(int i=n-1;0<=i;i=i-1)
    {
        printf("%d ",array[i]);
    }
    return 0;
}

