/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node* solve(Node* a, Node* b)
{
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    Node* result;
    if (a->data < b->data) {
        result = a;
        result->child = solve(a->child, b);
    }
    else {
        result = b;
        result->child = solve(a, b->child);
    }
    result->next = NULL;
    return result;
}
Node* flattenLinkedList(Node* root) 
{
	if (root == NULL || root->next == NULL)
        return root;
    root->next = flattenLinkedList(root->next);
    root = solve(root, root->next);
    return root;
}
