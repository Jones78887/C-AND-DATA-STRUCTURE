#include<stdio.h>
#include<stdlib.h>
void create();
void display();


void insertatend();

struct node
{
    int data;
    struct node*next;
}*head,*tail,*newnode,*temp;

int main()
{
    int choice=1;
    int option;
    while(choice==1)
    {
        printf("\n");
        printf("1.Create\n");
        printf("2.Display\n");


        printf("3.insert at end\n");

        printf("4.Exist");
        printf("Enter the choice (1,2,3,4) :");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
                 create();
                 break;
            case 2:
                 display();
                 break;

            case 4:
                    exit(0);
                    break;
            default:
                  printf("Enter the correct choice :");
                  break;
        }
    }
    return 0;
}
void create()
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
        if(head==NULL)
    {
        head=newnode;
    newnode->next=head;
    }
    else{
        temp=head;
        while(temp->next!=head)
           {

           temp=temp->next;
        newnode->next=head;
        temp->next=newnode;
        head=newnode;

    }
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("The data is %d \n",temp->data);
        temp=temp->next;
    }
}

