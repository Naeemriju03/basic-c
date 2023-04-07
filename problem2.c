#include <stdio.h>

int main()
{
    int a,b,sum,sub,mlt;
    float dib;


    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Enter your number:%d\n",sum);
    sub=a-b;
    printf("Enter your number:%d\n",sub);
    mlt=a*b;
    printf("Enter your number:%d\n",mlt);
    dib=(a*1.0)/b;
    printf("Enter your number:%.2f\n",dib);

    return 0;
}
