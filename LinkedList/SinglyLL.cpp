#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data :" << value << endl;
    }
};

void insertAthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAthead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // ! inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head,Node *&tail)
{
    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
       
        curr->next = NULL;

         if (curr->next == NULL)
        {
            tail=prev;
        }

        delete curr;
    }
   


    }

void deleteNodeByValue(int value,Node* &head){
    //deleting first node 
    if(head->data==value){
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }

     else{
        //deleting middle node
        Node *curr = head;
        Node * prev = NULL;

        while(curr!=NULL && curr->data!=value){
            prev=curr;
            curr = curr->next;
        }

        if(curr==NULL) return;

        prev->next = curr->next;

        curr->next=NULL;

        delete curr;
    }



}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    // creating a node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // inserting an element

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 4, 22);
    print(head);

    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    // deleteNode(4, head,tail);
    // print(head);

    // cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNodeByValue(22,head);
    print(head);

}