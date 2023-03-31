#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 1005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;

class Queue
{
    int *arr;
    int capacity;  
    int front;
    int rear;
    int count; 
    public:
        Queue(int size);
        ~Queue();

        int dequeue();
        void enqueue(int x);
        int peek();
        int size();
        int front_q();
        int rear_q();
        bool isEmpty();
        bool isFull();
        void change(int idx, int element);
        void display();
        void sum();
};

Queue::Queue(int size = Len)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

Queue::~Queue()
{
    delete arr;
}

int Queue::dequeue()
{
    if (isEmpty()) {
        cout << "Underflow" << endl;
    }
    else {
        int x = arr[front];
        front = (front + 1) % capacity;
        count--;
        return x;
    }
}

void Queue::enqueue(int x)
{
    if (isFull()) {
        cout << "Overflow" << endl;
    }
    else {
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        count++;
    }
}

int Queue::peek()
{
    if (isEmpty()) {
        cout << "Underflow" << endl;
    }
    else {
        return arr[front];
    }
}

int Queue::size()
{
    return count;
}

bool Queue::isEmpty()
{
    return (size() == 0);
}

bool Queue::isFull()
{
    return (size() == capacity);
}

void Queue::change(int idx, int element)
{
    if (idx < 0 || idx >= count) {
        cout << "Invalid index" << endl;
    }
    else {
        int i = (front + idx) % capacity;
        arr[i] = element;
    }
}

int Queue::front_q()
{
    return arr[0];
}

int Queue::rear_q()
{
    return arr[count-1];
}

void Queue::display()
{
    for (int i = 0; i < count; i++) {
        int index = (front + i) % capacity;
        cout << arr[index] << " ";
    }
}

void Queue::sum()
{
    int sum = 0;
    for (int i = 0; i < count; i++) {
        int index = (front + i) % capacity;
        sum += arr[index];
    }
    cout << sum << endl;
}

int main()
{
    class Queue s(5);
    s.enqueue(21);
    s.enqueue(22);
    s.enqueue(24);
    s.enqueue(25);

    s.display(); cout << endl;

    cout << s.front_q() << endl;
    cout << s.rear_q() << endl;

    if(s.isFull())
        cout << "Queue is full" << endl;
    else
        cout << "Queue is not full" << endl;

    cout << s.dequeue() << " dequeued from queue " << endl;
    cout << s.dequeue() << " dequeued from queue " << endl;

    s.display(); cout << endl;

    s.display();
    s.sum();

}