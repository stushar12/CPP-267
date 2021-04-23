Node* reverse(Node* head)
    {
        Node*prev=NULL,*nextnode=NULL;
        Node* curr=head;
        
        while(curr)
        {
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;
    }
    
    Node *compute(Node *head)
    {
        head=reverse(head);
        Node* curr=head;
        
        int ma=head->data;
        Node* prev=head;
        head=head->next;
        
        while(head)
        {
            if(head->data>=ma)
            {
                ma=head->data;
                prev=head;
                head=head->next;
            }
            else
            {
                prev->next=head->next;
                head=prev->next;
            }
        }
        
        head=reverse(curr);
        return head;
    }