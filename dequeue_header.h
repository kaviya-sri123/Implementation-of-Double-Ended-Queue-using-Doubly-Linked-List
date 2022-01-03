#include <iostream>
#include <cstdlib>
using namespace std;
class Node
{
    public:
        int data;
        Node *prev;
        Node *next;
};
class Dequeue
{
    public:
        Node *front,*rear;
        Dequeue()
        {
            front = NULL;
            rear = NULL;
        }
        void enqueueFront(int n);
        void enqueueRear(int n);
        void dequeueFront();
        void dequeueRear();
        void display();
};