/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    Node * start = new Node(0);
    start->next=head;
    Node *fastptr=start;
    Node *slowptr=start;
    int i=1;
    while(i<=K){
        fastptr=fastptr->next;
        i++;
    }
    while(fastptr->next){
        fastptr=fastptr->next;
        slowptr=slowptr->next;
    }
    slowptr->next=slowptr->next->next;
    return start->next;
}
