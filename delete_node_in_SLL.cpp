void deleteNode(LinkedListNode<int> * node) {
    if(node==NULL)
    return ;
    if(node->next==NULL)
    {
        node=NULL;
    }
    node->data=node->next->data;
    node->next=node->next->next;
}
