#include<stdio.h>


int main()
{
    int n,k,i;
    int d[100];
    int same[100];
    int total;

    printf("Enter the number of post :");
    scanf("%d",&n);
    printf("Enter the Number of post to colour :");
    scanf("%d",&k);

   for(i=0;i<=n;i++)
   {
       d[i]=(d[i-1]+d[i-2])*(k-1);
       same[i]=d[i-1];
       total=d[i]+same[i];
   }
   printf("%d",total);
   for(i=0;i<=n;i++)
   {

   printf("%d",d[i]);
   printf("%d",same[i]);
   }
}
