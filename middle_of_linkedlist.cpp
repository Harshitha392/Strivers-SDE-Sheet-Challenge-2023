Node *findMiddle(Node *head) {
    // Write your code here
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    return head;
    Node * fastptr=head;
    Node *slowptr=head;
    while(fastptr && fastptr->next){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
    }
    return slowptr;
}
