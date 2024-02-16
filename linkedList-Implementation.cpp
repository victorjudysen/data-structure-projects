// C++ program for linked list implementation of stack
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//a structure to represent a stack
struct StackNode 
{
    int data;
    StackNode* next;
};

typedef StackNode* stacknode;

stacknode newNode(int data)
{
    stacknode stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int isEmpty(stacknode root)
{
    return !root;
}

void push(StackNode** root, int data)
{
    stacknode stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    cout << data << "pushed to stack\n";
}

int pop(StackNode** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(StackNode* root)
{
    if(isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main()
{
    StackNode* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    cout << pop(&root) << " popped from stack\n";

    cout << "Top element is " << peek(root) << endl;

    cout << "Elements present in stack: ";

    //print all elements in stack
    while(!isEmpty(root))
    {
        //print top elements in stack
        cout << peek(root) << " ";

        //remove top element in stack
        pop(&root);
    }

    return 0;
}
