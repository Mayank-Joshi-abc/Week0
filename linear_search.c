#include<stdio.h>
int main()
{
    int ar[100],n,f=0,i,ele;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("Enter element to search: ");
    scanf("%d",&ele);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i] == ele)
        {
            f = 1;
            break;
        }
    }
    if(f = 0)
    {
        printf("\nElement not found");
        printf("\nNo. of comparisons: ",i+1);
    }
    else
    {
        printf("\nElement found at index :",i);
        printf("\nNo. of comparisons: ",i+1);
    }
    return 0;
}
