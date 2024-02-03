
void chake(int el)
    {
        if(sz==0)
        {
            cout<<"enpty"<<"\n";
            return;
        }
        node* a=head;
        for(int i=0; i<sz-1; i++)
        {
            if(a->data==el)
            {
                cout<<"true"<<"\n";
                return;
            }
            a=a->next;
        }
        cout<<"false"<<"\n";
    }
