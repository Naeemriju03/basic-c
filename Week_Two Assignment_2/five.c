#include <stdio.h>
int main ()
{ int N;
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i <N; i=i+1)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=N-1;0<=i;i=i-1){
           if(i%2==0){
            printf("%d ",arr[i]);
           }
    }
    return 0;
}
