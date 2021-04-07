#include<stdio.h>
#include <stdlib.h>

int main() {
    int array[10],n,i,sum=0;

    printf("Enter how many elements do you want:");
    scanf("%d",&n);
    printf("Enter the elements:");
     for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    printf("\nSum:%d\n",sum);
}