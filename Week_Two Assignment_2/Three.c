#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int evensum=0;
    int oddsum=0;

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

     for(int i=0;i<n;i++){
        if(arr[i]%2==0){
         evensum=evensum+arr[i];
        }

        if(arr[i]%2==1){
         oddsum=oddsum+arr[i];
        }
    }

   printf("%d %d",evensum,oddsum);
    return 0;
}
