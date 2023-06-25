#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    if(head==NULL || head->next==NULL)
        return true;
    LinkedListNode <int>*fastptr=head;
    LinkedListNode <int>*slowptr=head;
    while(fastptr->next && fastptr->next->next){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
    }
    if(fastptr!= NULL && fastptr->next == NULL){
            slowptr=slowptr->next;
    }
    LinkedListNode <int>*prev = NULL;
    LinkedListNode <int>*temp = slowptr->next;
    while(slowptr!= NULL && slowptr->next != NULL){
        slowptr->next = prev;
        prev = slowptr;
        slowptr = temp;
        temp = slowptr->next;
    }
    if(slowptr != NULL){
        slowptr->next = prev;
    }
    fastptr= head;
    while(slowptr && fastptr){
        if(slowptr->data != fastptr->data){
            return false;
        }
        slowptr = slowptr->next;
        fastptr = fastptr->next;
    }
    return true;
}
