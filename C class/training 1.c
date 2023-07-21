#include<stdio.h>
#include<stdlib.h>
void insert();
void create();
void display();
void end();
struct node
{
    int data;
    struct node*next;
}*head,*temp,*tail,*newnode;

int main()
{
    int choice;
    while(1)
    {
        printf("\n Enter 1 for create \n");
         printf("Enter 2 for insert \n");
          printf("Enter 3 for display \n");
          printf("Enter 4 for end \n");
           printf("Enter 5 for exist \n");
        printf("Enter the choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            display();
            break;
        case 4:
            end();
            break;
        case 5:
            return(0);
            break;
        default:
            printf("Enter the correct choice !!");
            break;
        }
    }
}
void create()
{
    int n,i;
    printf("Enter the size of node :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the node :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->next=head;
            temp=newnode;
            tail=newnode;
           //tail->next=newnode;
            //tail=newnode;

        }
    }
}
void insert()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the newnode :");
    scanf("%d",&newnode->data);
   newnode->next=NULL;


    newnode->next=head;
    tail->next=newnode;
   tail=newnode;
    head=newnode;



}
void display()
{
    temp=head;
    while(temp->next!=head)
    {
        printf("The data is %d\n",temp->data);
        temp=temp->next;
    }
    printf("The data is %d\n",temp->data);
}
void end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the newnode :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    newnode->next=head;
    temp->next=newnode;


}
