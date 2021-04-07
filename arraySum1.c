#include<stdio.h>
#include<stdlib.h>


int arrSum(int array[],int n,int sum) {
     if(n<0)
        return sum;
     else
        {
            sum=sum+array[n--];
            return(arrSum(array,n,sum));
        }
        

}

int main() {

    int array[10],n,i,sum=0;
    printf("Enter how many elements do you want:");
    scanf("%d",&n);
    printf("Enter elements:");
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    /*for (i=0;i<n;i++) {
        printf("%d ",array[i]);
    }*/
    
       
    printf("\n%d",arrSum(array,n-1,sum));

}