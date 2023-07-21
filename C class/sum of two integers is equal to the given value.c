#include<stdio.h>
#include<stdlib.h>


int main()
{

    int a[]={5,7,1,2,8,4,3};
    int b=sizeof(a)/sizeof(a[0]);
    int n,i,j,sum=0;
    printf("Enter the target number :");
    scanf("%d",&n);

    for(i=0;i<b;i++)
    {
        for(j=1;j<b;j++)
        {
            sum=a[i]+a[j];
            if(sum==n)
            {
                printf("%d + %d = %d\n",a[i],a[j],sum);
            }

        }
        printf("\nNo 2 values sum up to %d",n);

    }




}
