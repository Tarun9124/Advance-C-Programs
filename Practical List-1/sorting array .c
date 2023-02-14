#include <stdio.h>
void main()
{
    int a[10],i,j,temp,N;
    
    printf("Enter No of element:");
    scanf("%d",&N);
    
    printf("Enter values:\n");
    for(i=0;i<=N;i++)
    {
        printf("Enter %d no. :",i+ 1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array \n");
    for(i=0;i<N+1;i++)
        printf("%d\n",a[i]);
}
