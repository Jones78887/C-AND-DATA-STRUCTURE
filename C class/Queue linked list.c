#include<stdio.h>
#include<stdlib.h>

void display();
void enqueue();
void dequeue();
void peek();

struct node
{
    int data;
    struct node*next;
}*front,*temp,*newnode,*rear;

int main()
{
    int option;
while(1)
    {
        printf("\n 1.enqueue \n");
        printf(" 2.dequeue \n");
        printf(" 3.peek \n");
        printf(" 4.display \n");
        printf("Enter the option :");
        scanf("%d",&option);
        switch(option)
        {
         case 1:
                 enqueue();
                 break;
            case 2:
                 dequeue();
                 break;
            case 3:
                  peek();
                  break;
            case 4:
                  display();
                  break;
            case 5:
                  return(0);
                  break;
            default:
                  printf("Enter the correct choice :");
                  break;
        }

    }

}
void enqueue()
{

     int n,i;
    printf("Enter the size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf(" %d",&newnode->data);
        newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
        temp=newnode;
    }
    else
    {
          rear->next=newnode;
          rear=newnode;
    }
    }

}
void dequeue()
{
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("The Queue empty !!");
    }
    else{
        printf("The deleted Stack is %d\n",front->data);
    }
    front=front->next;
        free(temp);
}
void peek()
{


    temp=front;

    if(front==NULL && rear==NULL)
    {
        printf("The Stack empty !!");
    }
    else{
        printf("The Hightest Stack is %d",front->data);
    }
}
void display()
{
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("Does not exist");
    }
    else{
    while(temp!=NULL)
    {
        printf("The data is :%d\n",temp->data);
        temp=temp->next;
    }
    }
}
