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
#define Len 100005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
class Node
{
    public:
        int data;
        Node* next;
        Node* prev;
};

class DoublyLinkedList
{
    public:
        Node* head;
        Node* tail;
        int size;
        public:
        DoublyLinkedList()
        {
            head = NULL;
            tail = NULL;
            size = 0;
        }
        void insertAtHead(int data)
        {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = head;
            newNode->prev = NULL;
            if(head != NULL)
            {
                head->prev = newNode;
            }
            head = newNode;
            if(tail == NULL)
            {
                tail = newNode;
            }
            size++;
        }
        void insertAtTail(int data)
        {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = NULL;
            newNode->prev = tail;
            if(tail != NULL)
            {
                tail->next = newNode;
            }
            tail = newNode;
            if(head == NULL)
            {
                head = newNode;
            }
            size++;
        }
        void insertAtPosition(int data, int pos)
        {
            if(pos == 0)
            {
                insertAtHead(data);
            }
            else if(pos == size)
            {
                insertAtTail(data);
            }
            else if(pos > size)
            {
                cout<<"Invalid Position\n";
            }
            else
            {
                Node* newNode = new Node();
                newNode->data = data;
                Node* temp = head;
                for(int i = 0; i < pos - 1; i++)
                {
                    temp = temp->next;
                }
                newNode->next = temp->next;
                newNode->prev = temp;
                temp->next->prev = newNode;
                temp->next = newNode;
                size++;
            }
        }
        void insertBetween(int data1, int data2, int data)
        {
            if(head == NULL)
            {
                cout<<"List is Empty\n";
            }
            else if(head->data == data1 && tail->data == data2)
            {
                insertAtTail(data);
            }
            else if(head->data == data1)
            {
                insertAtHead(data);
            }
            else if(tail->data == data2)
            {
                insertAtTail(data);
            }
            else
            {
                Node* temp = head;
                while(temp != NULL)
                {
                    if(temp->data == data1)
                    {
                        Node* newNode = new Node();
                        newNode->data = data;
                        newNode->next = temp->next;
                        newNode->prev = temp;
                        temp->next->prev = newNode;
                        temp->next = newNode;
                        size++;
                        break;
                    }
                    temp = temp->next;
                }
            }
        }
        void deleteAtHead()
        {
            if(head == NULL)
            {
                cout<<"List is Empty\n";
            }
            else if(head == tail)
            {
                head = NULL;
                tail = NULL;
                size--;
            }
            else
            {
                head = head->next;
                head->prev = NULL;
                size--;
            }
        }
        void deleteAtTail()
        {
            if(head == NULL)
            {
                cout<<"List is Empty\n";
            }
            else if(head == tail)
            {
                head = NULL;
                tail = NULL;
                size--;
            }
            else
            {
                tail = tail->prev;
                tail->next = NULL;
                size--;
            }
        }
        void deleteAtPosition(int pos)
        {
            if(head == NULL)
            {
                cout<<"List is Empty\n";
            }
            else if(pos == 0)
            {
                deleteAtHead();
            }
            else if(pos == size - 1)
            {
                deleteAtTail();
            }
            else if(pos >= size)
            {
                cout<<"Invalid Position\n";
            }
            else
            {
                Node* temp = head;
                for(int i = 0; i < pos - 1; i++)
                {
                    temp = temp->next;
                }
                temp->next = temp->next->next;
                temp->next->prev = temp;
                size--;
            }
        }
        void deleteData(int value)
        {
            if(head == NULL)
            {
                cout<<"List is Empty\n";
            }
            else if(head->data == value)
            {
                deleteAtHead();
            }
            else if(tail->data == value)
            {
                deleteAtTail();
            }
            else
            {
                Node* temp = head;
                while(temp->next->data != value)
                {
                    temp = temp->next;
                }
                temp->next = temp->next->next;
                temp->next->prev = temp;
                size--;
            }
        }
        void print()
        {
            Node* temp = head;
            while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
        void revPrint()
        {
            Node* temp = tail;
            while(temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->prev;
            }
            cout << endl;
        }
};

int main()
{
    FAST_IO;
    DoublyLinkedList dll;
    dll.insertAtTail(8);
    dll.insertAtTail(1);
    dll.insertAtTail(5);
    dll.insertAtTail(3);
    dll.insertAtTail(2);
    dll.print();

    dll.insertAtHead(9); cout << "After inserting 9 at head: "; dll.print();
    dll.insertAtTail(9); cout << "After inserting 9 at tail: "; dll.print();
    dll.insertBetween(5,3,9); cout << "After inserting 9 between 5 and 3: "; 
    dll.print();

    dll.deleteData(8); cout << "After deleting 8: "; dll.print();
    dll.deleteData(2); cout << "After deleting 2: "; dll.print();
    dll.deleteData(5); cout << "After deleting 5: "; dll.print();

    dll.print();
    dll.revPrint();
}