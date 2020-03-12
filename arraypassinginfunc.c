#include<stdio.h>
int array(int x)
{
    int i,a[10];
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
     
    }
    for(i=0;i<x;i++)
    {
     printf("%d",a[i]);
    }
}
void main()
{
    int n;
    printf("Enter limit");
    scanf("%d",&n);
    array(n);
}