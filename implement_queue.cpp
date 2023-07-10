#include <bits/stdc++.h> 

class Queue {

public:

int *a;
int s;
int f;
int r;
Queue() {
    a=new int[10000];
    f=0;
    r=0;
}
/*----------------- Public Functions of Queue -----------------*/
bool isEmpty() {
    if(f == r)
    {
        return true;
    }
    return false;
}
void enqueue(int data) {
    if(r==s-1)

    {
        return;
    }
    else
    {
        a[r]=data;
        r++;
    }
}
int dequeue() {
    int ans;
    if(isEmpty())
    {
        return -1;
    }
    else{
        ans=a[f];
        f++;
        if(f == r)
        {
            f=0;
            r=0;
        }
    }
    return ans;
}
int front() {
    int ans;
    if(isEmpty())
    {
        return -1;
    }
    else{
        ans=a[f];
    }
    return ans;
}
};
