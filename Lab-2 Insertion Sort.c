#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("Enter number of elements in array :");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=1; i<=n-1; i++)
    {
        j=i;
        while(j>0 && a[j]<a[j-1])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    printf("Sorted elements : ");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}

