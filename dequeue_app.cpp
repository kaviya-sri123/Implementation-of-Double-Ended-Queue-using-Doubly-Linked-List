#include "dequeue_header.h"
int main()
{
    Dequeue *dq = new Dequeue();
    int n,ch;
    do
    {
        cout<<"\t==========MENU==========\n";
        cout<<"\t1.Enqueue Front\n";
        cout<<"\t2.Enqueue Rear\n";
        cout<<"\t3.Dequeue Front\n";
        cout<<"\t4.Dequeue Rear\n";
        cout<<"\t5.Display\n";
        cout<<"\t6.Exit\n";
        cout<<"\t========================\n";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter an integer : ";
                cin>>n;
                dq->enqueueFront(n);
                break;
            case 2:
                cout<<"Enter an integer : ";
                cin>>n;
                dq->enqueueRear(n);
                break;
            case 3:
                dq->dequeueFront();
                break;
            case 4:
                dq->dequeueRear();
                break;
            case 5:
                dq->display();
                break;
            default:
                cout<<"\nEnter a valid choice.\n\n";
                break;
        }
    }while(ch!=6);
}