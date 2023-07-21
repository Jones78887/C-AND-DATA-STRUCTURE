#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void deletion();
void reverse();
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode,*tail,*prev,;
int main()
{
    int option;
    while(1)
    {
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Reverse\n");
        printf("4.Exit\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
        {
            create();
            break;
        }
        case 2:
        {
            display();
            break;
        }

        case 3:
            {
                reverse();
                break;
            }
        case 4:
            {
                exit(0);
                break;

            }
        }
    }
}
void create()
{
    int n;
    printf("Enter the size :");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail-> next = newnode;
            tail=tail->next;
            tail -> next = head;
            //head = newnode;
        }
    }
}

void display()
{
    temp=head;
    do{
         printf("The elements are : %d\n",temp->data);
         temp=temp->next;
    }while(temp!=head);
}
/*void deletion()
{
        temp = head;
        while(head->next!=temp)
            head=head->next;
            head->next=temp->next;
        free(temp);
        //head = head->next;
        //free(temp);
}*/
void reverse()
{
    temp = head;
     {
        head->next=newnode;
        head=head->next;
        head->next=tail;
    }while(head!=tail);
}
