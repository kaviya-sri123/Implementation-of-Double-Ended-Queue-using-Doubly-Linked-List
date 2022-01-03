#include "dequeue_header.h"
void Dequeue::enqueueFront(int n)
{
    Node *temp = new Node();
    temp->data = n;
    temp->next = NULL;
    if(front == NULL)
    {
        front = rear = temp;
    }
    else
    {
        temp->next = front;
        front->prev = temp;
        front = temp;
    }
    cout<<"\nNumber enqueued at front.\n\n";
}
void Dequeue::enqueueRear(int n)
{
    Node *temp = new Node();
    temp->data = n;
    temp->next = NULL;
    if(rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        temp->prev = rear;
        rear->next = temp;
        rear = temp;
    }
    cout<<"\nNumber enqueued at rear.\n\n";
}
void Dequeue::dequeueFront()
{
    if(front==NULL)
        cout<<"\nQueue is empty.\n\n";
    else
    {
        Node* temp = front;
        front = front->next;
        if(front == NULL)
            rear = NULL;
        else
            front->prev = NULL;
        cout<<"\nFront element "<<temp->data<<" dequeued.\n\n";
        free(temp);
    }
}
void Dequeue::dequeueRear()
{
    if(rear==NULL)
        cout<<"\nQueue is empty.\n\n";
    else
    {
        Node* temp = rear;
        rear = rear->prev;
        if (rear == NULL)
            front = NULL;
        else
            rear->next = NULL;
        cout<<"\nRear element "<<temp->data<<" dequeued.\n\n";
        free(temp);
    }
}
void Dequeue::display()
{
    if(front==NULL)
        cout<<"\nQueue is empty.\n\n";
    else
    {
        cout<<"DEQUEUE : ";
        Node *temp = front;
        while(temp!=NULL)
        {
            cout<<temp->data;
            if(temp->next!=NULL)
                cout<<" -> ";
            temp = temp->next;
        }
        cout<<"\n\n";
    }
}