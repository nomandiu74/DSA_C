#include<stdio.h>
int main()
{
    int n,search,i,array[100];
    printf("Enter number you wants to input:\n");
    scanf("%d",&n);
    int l=0;
    int h=n-1;
    int result=-1;
    printf("Enter array number:\n");
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("Enter searching number:");
    scanf("%d",&search);
    while(l<=h){
    int mid=(l+h)/2;
    if(array[mid]==search)
    {
    result=mid;
    break;
    }

    else if(array[mid]<search)
        {l=mid+1;}
    else
       {
        h=mid-1;
       }}

    if(result!=-1)
        {printf("%d is found at %d position",search,result);}
    else
     {
       printf("%d not found",search);
     }


    return 0;
}
