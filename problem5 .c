#include <stdio.h>

int main()
{
   int tk;
   scanf("%d",&tk);
   if(tk>=10000)
   {
       printf("Gucci bag\n");
       if(tk>20000)
       {
           printf("Gucci balt\n");
       }

    }

    else if(tk>=5000)
    {
        printf("lives bag\n ");
    }
    else{
        printf("someting ");
    }
    return 0;
}
