#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[10];
    scanf("%s",s);
    char goal[10];
    char temp;
    scanf("%s",goal);
    int n=strlen(s);
   int m=strlen(goal);
   if(n==m)
   {
    temp=s[0];
    s[0]=s[1];
    s[1]=temp;
   int flag=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]==goal[i])
   {
        flag=1;
    }
    else
    {
        flag=0;
    }
   }
   if(flag==1)
   {
       printf("true");
   }
   else
   {
       printf("false");
   }
   }
   else
   {
       return;
   }

}
