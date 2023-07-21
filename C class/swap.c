#include<stdio.h>
#include<stdlib.h>

void create();
void position();
void display();

struct node
{
  int data;
  struct node*next;
}*head,*newnode,*temp,*r,*pre;

int main()
{
  create();

  position();
  display();
}
void create()
{
  int a,i;
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
    newnode=(struct node*)malloc(sizeof(struct node));
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
      temp=newnode;
    }
  }
  display();
}
void display()
{
  temp=head;
  while(temp!=NULL)
  {
    printf("%d",temp->data);
    temp=temp->next;
  }
  printf("%d",temp->data);
}
void position()
{
  int pos,j;
  scanf("%d",&pos);

  for(j=0;j<pos;j++)
  {

    temp=temp->next;

  }
   r=temp->next;
    temp->next=head->next;
    head->next=r;
    pre=temp;
  while(temp!=NULL)
  {
    temp=temp->next;
    r=temp->next;
    temp->next=pre->next;
    pre->next=r;
  }



}
