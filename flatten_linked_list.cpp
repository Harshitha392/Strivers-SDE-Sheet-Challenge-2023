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
#include <bits/stdc++.h>
struct mycomp {
    bool operator()(Node* a, Node* b)
    {
        return a->data > b->data;
    }
};
Node* flattenLinkedList(Node* root) 
{
	priority_queue<Node*, vector<Node*>, mycomp> p;
    while (root != NULL) {
        p.push(root);
        root = root->next;
    }
    while (!p.empty()) {
        auto k = p.top();
        p.pop();
        cout << k->data << " ";
        if (k->child)
            p.push(k->child);
    }
	return root;
}
