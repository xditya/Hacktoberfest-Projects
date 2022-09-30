// My Github name : Anmol-Prasad
// My Github profile : https://github.com/Anmol-Prasad

#include <iostream>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    void Enqueue(int num);
    void Dequeue();
    void Display();
    Queue(int n);
};

Queue::Queue(int n)
{
    size = n;
    front = rear = -1;
    Q = new int[n];
}

void Queue::Enqueue(int num)
{
    if (rear == size - 1)
    {
        cout << "Queue Overflow";
    }
    else
    {
        rear++;
        Q[rear] = num;
    }
}

void Queue::Dequeue()
{
    if (front == rear)
    {
        cout << "Empty Queue";
    }
    else
    {
        Q[++front] = -1;
    }
}

void Queue::Display()
{
    int i = 0;
    while (i < size)
    {
        if (Q[i] != -1)
            cout << Q[i] << " ";
        i++;
    }
}

int main()
{
    int A[] = {1, 3, 5, 7, 9};
    Queue q(5);
    for (int i = 0; i < 5; i++)
    {
        q.Enqueue(A[i]);
    }
    q.Display();
}