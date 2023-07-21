#include<stdio.h>
#include<stdlib.h>
//#define size 5

void display();
void push();

void descending();
int stack[1000];
int top=-1;
int size,x,i;
int temp=0;

int main()
{
    int option,size;
    int choice=1;

    int x,i;

while(choice==1)
    {
        printf(" 1.push \n");
        printf(" 2.descending \n");
        printf(" 4.exits \n");
        printf(" 3.display \n");
        printf("Enter the option :");
        scanf("%d",&option);
        switch(option)
        {
         case 1:
                 push();
                 break;

            case 2:
                  descending();
                  break;
            case 3:
                  display();
                  break;
            case 4:
                return 0;
                break;
            default:
                  printf("Enter the correct choice :");
                  break;
        }

    }

}
void push()
{

     int x;
     printf("Enter the size of array :");
    scanf("%d",&size);
     for(int i=0;i<size;i++){
    if(top>=size-1)
    {
        printf("The Stack is overflow");
    }
    else{
        printf("Enter the elemnts :\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
     }
}
void descending()
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(stack[i]>stack[j])
            {
                temp=stack[i];
                stack[i]=stack[j];
                stack[j]=temp;
            }
        }
    }


}
void display()
{
    if(top>=0){

    for(int i=top;i>=0;i--)
    {
        printf("The elements :%d\n",stack[i]);
    }
    }
    else{
        printf("the stack is empty");
    }
}
