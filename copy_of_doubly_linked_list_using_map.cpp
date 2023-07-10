#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    if(head==NULL) return NULL;
    map<LinkedListNode<int> * ,LinkedListNode<int>* > m;
    LinkedListNode<int>* temp2 = head;
    while(temp2!=NULL){
        m[temp2] =new LinkedListNode<int>(temp2->data);
        temp2=temp2->next;
    }
    LinkedListNode<int>*temp1= head;
    while(temp1!=NULL){
        m[temp1]->next = m[temp1->next];
        m[temp1]->random = m[temp1->random];
        temp1=temp1->next;
    }
    return m[head];

}
