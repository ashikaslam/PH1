void reverse_lin()
    {
        if(sz==0)return;
        node*a=head;
        node* b=head;
        while(b->next!=NULL)
        {
            b=b->next;
        }
        for(int i=0; i<sz; i++)
        {
            swap(a->next,a->pre);
            a=a->pre;
        }
        head=b;
    }
