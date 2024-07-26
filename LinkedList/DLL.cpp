#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node *deleteHeadOfDLL(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

Node *deleteTailOfDLL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *tail = head;

    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;

    tail->back = nullptr;
    prev->next = nullptr;

    delete tail;

    return head;
}

Node *removeKthElement(Node *head, int k)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }

    Node *prev = temp->back;
    Node *front = temp->next;

    if (prev == nullptr && front == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (prev == nullptr)
    {
        return deleteHeadOfDLL(head);
    }
    else if (front == nullptr)
    {
        return deleteTailOfDLL(head);
    }

    prev->next = front;
    front->back = prev;

    return head;
}

void deleteNode(Node *temp)
{
    Node *prev = temp->back;
    Node *front = temp->next;

    if (front == nullptr)
    {
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
    }
    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;

    free(temp);
}

Node *insertBeforeHead(Node *head, int val)
{
    Node *newHead = new Node(val, head, nullptr);
    head->back = newHead;
    return newHead;
}

Node* insertAfterHead(Node* head,int val){
    Node* newNode = new Node(val,head->next,head);
    head->next->back = newNode;
    head->next = newNode;
    return head;
}

Node *insertBeforeTail(Node *head, int val)
{
    if (head->next == NULL)
    {
        return insertBeforeHead(head, val);
    }
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    Node *prev = tail->back;
    Node *newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}

Node* insertAfterTail(Node* head,int val){
    Node* newNode = new Node(val,nullptr,nullptr);
    Node* tail = head;
    while(tail->next!=nullptr){
        tail = tail->next;
    }

    tail->next = newNode;
    newNode->back = tail;
    newNode->next = nullptr;
    return head;
}

Node *insertBeforeKthElement(Node *head, int val, int k)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;

        if (cnt == k)
            break;
        temp = temp->next;
    }

    Node *prev = temp->back;
    Node *newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

Node* insertAfterKthElement(Node* head,int val,int k){
    Node* temp = head;
    int cnt = 0;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k) break;
        temp = temp->next;
    }
    Node* newNode = new Node(val,temp->next,temp);
    temp->next->back = newNode;
    temp->next = newNode;
    return head;
}

Node *insertNodeBeforeVal(Node *node, int val)
{
    Node *prev = node->back;
    Node *newNode = new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;
}

Node* insertNodeAfterVal(Node *node, int val){
    Node* newNode = new Node(val,node->next,node);
    node->next = newNode;
    node->next->back = newNode;
    
}

void print(Node *head)
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
    vector<int> arr = {3, 1, 2, 4};

    Node *head = convertArr2DLL(arr);
    // print(head);

    // head = deleteHeadOfDLL(head);
    // print(head);

    // head = deleteTailOfDLL(head);
    // print(head);

    // head = removeKthElement(head,3);
    // print(head);

    //  deleteNode(head->next->next);
    // print(head);

    // head = insertBeforeHead(head,10);
    // print(head);

    // head = insertBeforeTail(head,30);
    // print(head);

    // head = insertBeforeKthElement(head,24,3);
    // print(head);

    // insertNodeBeforeVal(head->next->next, 24);
    // print(head);

    // head = insertAfterHead(head,50);
    // print(head);

    // head = insertAfterTail(head,60);
    // print(head);
    // head = insertAfterKthElement(head,36,3);
    // print(head);

    insertNodeAfterVal(head->next,55);
    print(head);
}