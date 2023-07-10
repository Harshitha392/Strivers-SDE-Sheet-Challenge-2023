#include <bits/stdc++.h> 
// Stack class.
class Stack {
private:
    int m;
    int* a;
    int t;

public:
    Stack(int capacity) {
        a = new int[capacity];
        t= 0;
        m= capacity;
    }
    void push(int num) {
        if(t != m){
            a[t] = num;
           t++;
        }
    }
    int pop() {
        if(t!= 0){
            t--;
            return a[t];
        }
        return -1;
    }
    int top() {
        return (t!= 0)?(a[t-1]):(-1);
    }
    int isEmpty() {
        return (t== 0)?(1):(0);
    }
    int isFull() {
        return (t== m);
    }
    
};
