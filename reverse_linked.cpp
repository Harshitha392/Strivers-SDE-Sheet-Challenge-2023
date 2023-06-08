LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    if(head==NULL || head->next==NULL)
    return head;
    LinkedListNode <int>*prev=NULL;
    LinkedListNode <int>*curr=head;
    LinkedListNode <int>*next1=head->next;
    while(curr!=NULL){
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
    return prev;
}
