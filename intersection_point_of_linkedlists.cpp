Node* findIntersection(Node *firstHead, Node *secondHead)
{
    if(firstHead==NULL || secondHead==NULL){
        return NULL;
    }
    Node *temp1=firstHead;
    Node *temp2=secondHead;
    while(temp1!=temp2){
        if(temp1==NULL){
            temp1=secondHead;
        }
        if(temp2==NULL){
            temp2=firstHead;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return temp1;
}
