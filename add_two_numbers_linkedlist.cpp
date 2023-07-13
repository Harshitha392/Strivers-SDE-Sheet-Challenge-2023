/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    if(num1==NULL) return num2;
    if(num2==NULL) return num1;
    Node *temp = new Node();
    Node *temp1 = temp;
    int carry  = 0;
    while(num1!=NULL || num2!=NULL || carry!=0)
    {
        int sum1= 0;
        if(num1){
            sum1 = sum1+num1->data;
            num1 = num1->next;
        }
        if(num2){
            sum1 = sum1+num2->data;
            num2 = num2->next;
        }
        sum1 = sum1+carry;
        carry = sum1/10;
        Node * new1 = new Node(sum1%10);
        temp1->next = new1;
        temp1 = new1;

    }
    return temp->next;
}
