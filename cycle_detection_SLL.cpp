bool detectCycle(Node *head)
{
	Node * slowptr=head;
    Node * fastptr=head;
    if(head==NULL || head->next==NULL || head->next->next==NULL)
    return false;
    while(slowptr && fastptr && fastptr->next){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if(fastptr==slowptr)
        return true;
    }
    return false;
}
