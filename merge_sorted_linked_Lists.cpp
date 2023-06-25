#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* p1, Node<int>* p2)
{
    Node <int> *p3= new Node<int>(0);
    Node <int> *first=p1;
    Node <int> *second=p2;
    Node <int> *temp=p3;
    while(first!=NULL && second!=NULL){
        if(first->data > second->data){
            temp->next=second;
            temp=temp->next;
            second=second->next;
        }
        else{
            temp->next=first;
            temp=temp->next;
            first=first->next;
        }
    }
    while(first!=NULL){
        temp->next=first;
        first=first->next;
        temp=temp->next;
    }
    while(second!=NULL){
        temp->next=second;
        second=second->next;
        temp=temp->next;
    }
    return p3->next;
}
