#include<stdio.h>

int main()
{
    int n,k,i,j;
    int a=0;

    printf("Enter the number of post :");
    scanf("%d",&n);
    printf("Enter the Number of post to colour :");
    scanf("%d",&k);
    if (n==1)
        {
        return k;
        }
    int dp[n][k];
    for(int j=0;j< k;j++)
    {
        dp[0][j]=1;
        dp[1][j]=k-1;
    }
    for(int i=2;i<n;i++)
        {
        for(j=0;j<k;j++)
         {
            dp[i][j] = 0;
            for(int jp=0;jp<k;jp++)
             {
                if(jp!=j)
                 {
                    dp[i][j]=dp[i][j]+dp[i-1][jp];
                 }
            }
            dp[i][j]=dp[i][j]*(k-1);

        }

    }




    int ans=0;
    for (int j=0;j<k;j++) {
        ans=ans+dp[n-1][j];
        printf("%d\n",ans);
    }

}
