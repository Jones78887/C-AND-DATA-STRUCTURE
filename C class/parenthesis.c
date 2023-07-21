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

        int count=0,count1=0,count2=0;
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]==')' && i==0)
            {
                flag=1;
                break;
            }
            else if(a[i]=='(')
            {
                count++;
            }
            else if(a[i]==')')
            {

                    count1++;
            }
            else if(a[i]=='*')
                count2++;
        }
        if(flag==1)
            printf("No\n");
        else
        {
            if(a[strlen(a)-1]=='*')
                printf("No\n");
            else if(a[strlen(a)-2]=='*')
                printf("Yes\n");
            else if(abs(count-count1) == count2)
                printf("Yes\n");

            else if(count==count1)
                printf("Yes\n");

            else
                printf("No\n");
        }
    }
}
