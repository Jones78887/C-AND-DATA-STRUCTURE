#include<stdio.h>
#include<stdlib.h>

void display();
void insert();

struct node
{
    int data;
    struct node*next;
}*newnode,*head,*temp;

int main()
{
   insert();
   display();
}






void insert()

{


    int choice=1,i,n;

    printf("Enter the choice 1 to continue :");
    printf("Enter the choice 0 to discontinue:");


    while(choice==1)
    {
        printf("Enter the size of the array:");
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data :");
            scanf("%d",&newnode->data);
            newnode->next=NULL;

            if(head==NULL)
            {
                head=newnode;
                temp=newnode;
            }
            else
            {

                 temp=temp->next;
                 temp=newnode;
            }



        }

        scanf("%d",&choice);



    }


}
void display()
{
    temp=head;
    while(temp!=head)
    {
        printf("The data's are %d",temp->data);
        temp=temp->next;
    }


}
