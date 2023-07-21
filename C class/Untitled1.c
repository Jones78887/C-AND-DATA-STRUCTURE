temp=head;

   if(head==NULL)
    {
        head=newnode;
    newnode->next=head;
    }
    else{
        temp=head;
        while(temp->next!=head)
            temp=temp->next;
        newnode->next=head;
        temp->next=newnode;
        head=newnode;
    }
