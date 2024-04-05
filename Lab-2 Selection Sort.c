#include<stdio.h>
int main()
{
    int i,j,k,n,LOC=0,MIN=0,TEMP;
    printf("Please enter your number of element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
      scanf("%d",&arr[i]);
    for(k=1;k<n;k++)
    {
        MIN=arr[k];
        LOC=k;
        for(j=k+1;j<=n;j++)
        {
            if(MIN>arr[j])
                {
                    MIN=arr[j];
                    LOC=arr[j];
                    LOC=j;
                }
        }
        TEMP=arr[k];
        arr[k]=arr[LOC];
        arr[LOC]=TEMP;
    }
   printf("\nAfter sorting the array is:");
   for(i=1;i<=n;i++)
      printf("%d ",arr[i]);
    printf("\n");
}
