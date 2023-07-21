#include<stdio.h>
#include<stdlib.h>
//#define size 5

void display();
void push();
void pop();
void peek();
int stack[1000];
int top=-1;
int size,x,i;
int temp;

int main()
{
    int option,size;
    int choice=1;

    int x,i;

while(choice==1)
    {
        printf(" 1.push \n");
        printf(" 2.pop \n");
        printf(" 3.peek \n");
        printf(" 4.display \n");
        printf("Enter the option :");
        scanf("%d",&option);
        switch(option)
        {
         case 1:
                 push();
                 break;
            case 2:
                 pop();
                 break;
            case 3:
                  peek();
                  break;
            case 4:
                  display();
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
void pop()
{
    top=temp;

    if(top==50)
    {
        printf("The stack is underflow");
    }
    else{
        printf("Deleted element :%d",stack[top]);
        top--;
        free(temp);
    }
}
void peek()
{

    printf("The top element : %d",stack[top]);
}
void display()
{
    if(top>=0){

    for(int i=top;i>=0;i--)
    {
        printf("The elements :%d",stack[i]);
    }
    }
    else{
        printf("the stack is empty");
    }
}
