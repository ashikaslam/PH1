
void index_i(int i)
    {
        if(sz==0)return;
        node* a=head;
        for(int j=0; j<i; j++)
        {
            a=a->next;
        }
        cout<<a->data<<endl;
    }
