// to add a node and delete a node from a queue

#include <iostream>
using namespace std;

struct Q 
{
    char gender;
    Q *next;
};

typedef Q* mainPtr;

void enqueue(mainPtr &head, char gender)
{
    mainPtr newNode = new Q;
    newNode->gender = gender;
    newNode->next = NULL;

    if (head == NULL) 
    {
        head = newNode;
        return;
    }

    mainPtr current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}

void dequeue(mainPtr &head)
{
    if (head == NULL)
    {
        cout << "Queue is empty. Cannot dequeue.\n";
        return;
    }

    mainPtr temp = head;
    head = head->next;
    delete temp;
}

void displayQueue(mainPtr head)
{
    cout << "Queue: ";
    while (head != NULL)
    {
        cout << head->gender << " ";
        head = head->next;
    }

    cout << endl;
}

int main()
{
    mainPtr head = NULL;

    //adding nodes to the queue
    enqueue(head, 'M');
    enqueue(head, 'F');
    enqueue(head, 'M');
    enqueue(head, 'F');
    enqueue(head, 'M');
    enqueue(head, 'F');//adding the sixth node

    displayQueue(head);

    //deleting one node from the queue
    dequeue(head);

    displayQueue(head);

    return 0;
}

