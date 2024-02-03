
void in_a_spasific_index(int num,int index)
    {
        if(index==0)
        {
            at_head(num);
            return;
        }
        node* a=head;
        int pos=0;
        node* neew=creat_new_node(num);
        while(pos!=index-1)
        {
            a=a->next;
            pos++;
        }
        node* b=a->next;
        neew->pre=a;
        neew->next=b;
        b->pre=neew;
        a->next=neew;
    }
