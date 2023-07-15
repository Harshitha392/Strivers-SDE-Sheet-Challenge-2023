/****************************************************************

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


*****************************************************************/

Node *firstNode(Node *head)
{
    if(head==NULL || head->next==NULL) return NULL; 
    Node *slowptr = head;
    Node *fastptr = head;
    while(fastptr && fastptr->next){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if(slowptr==fastptr) break;
    }
    if(slowptr!=fastptr) return NULL;
    fastptr = head;
    while(slowptr!=fastptr){
        slowptr=slowptr->next;
        fastptr=fastptr->next;
    }
    return slowptr;
}
