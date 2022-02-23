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
        int A[n];
        printf("Enter element :\n");
        for(int j=0; j<n ; j++)
        {
            scanf("%d",&A[j]);
        }
        printf("Enter the element to be searched : ");
        scanf("%d",&key);

        for(int k=0; k<n ; k++)
        {
            if(A[k] == key)
            {
                flag++;
                printf("Element found");
                break;
            }
            comp++;
        }
        if(flag == 0)
        {
            printf("Element not found");
            printf("\nTotal number of comparisons = %d",comp);
        }
        else
            printf("\nTotal number of comparisons = %d",comp+1);

        printf("\n-----------------------------\n");
    }
}
