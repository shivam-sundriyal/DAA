#include<stdio.h>

int main()
{
    int t;
    printf("Enter the number of test cases : ");
    scanf("%d",&t);

    for(int i=0 ; i<t ; i++)
    {
        int flag=0,comp=0;
        printf("TEST CASE %d\n",i+1);
        int n,key;
        printf("Enter the number of elements of array : ");
        scanf("%d",&n);
        int lower=0,greater=n-1;
        int A[n];
        printf("Enter element :\n");
        for(int j=0; j<n ; j++)
        {
            scanf("%d",&A[j]);
        }
        printf("Enter the element to be searched : ");
        scanf("%d",&key);
        int mid;

        while(greater >= lower)
        {
            comp++;
            mid = lower + (greater - lower)/2;

            if(A[mid] == key)
            {
                printf("Element found");
                flag++;
                break;
            }
            else if(key > A[mid])
                lower = mid+1;
            else
               greater = mid-1;
        }

        if(flag == 0)
        {
            printf("Element not found");
        }
        printf("\nTotal number of comparisons = %d",comp);

        printf("\n-----------------------------\n");
    }
}
