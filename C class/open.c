#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    int flag=0,temp=0;
    printf("Enter the Total Count :");
    scanf("%d",&n);
    char a[100];
    for(j=0; j<n; j++)
    {

        scanf("%s",&a);

        int count_open=0,count_close=0,count_star=0;
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]==')' && i==0)
            {
                flag=1;
                break;
            }
            else if(a[i]=='(')
            {
                count_open++;
            }
            else if(a[i]==')')
            {

                    count_close++;
            }
            else if(a[i]=='*')
                count_star++;
        }
        if(flag==1)
            printf("No\n");
        else
        {
            if(count_open==count_close)
                printf("Yes\n");

            else if(abs(count_open-count_close) == count_star)
                printf("Yes\n");

            else if(a[strlen(a)-1]=='*')
                printf("No");

            else
                printf("No\n");
        }
    }
}
