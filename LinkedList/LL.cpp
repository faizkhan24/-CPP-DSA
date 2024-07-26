#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int lengthofLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }

    return cnt;
}

int checkIfPresent(Node *head, int value)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == value)
            return temp->data;
        temp = temp->next;
    }
    return 0;
}

Node *removeHead(Node *&head)
{
    if (head == NULL)
        return head;

    Node *temp = head;
    head = head->next;

    delete temp;

    return head;
}

Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return head;
}

Node *removeK(Node *head, int k)
{
    if (head == NULL)
        return head;

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    int cnt = 0;
    Node *prev = NULL;

    while (temp != NULL)
    {
        cnt++;

        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }

        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node *removeEl(Node *head, int el)
{
    if (head == NULL)
        return head;

    if (head->data == el)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {

        if (temp->data == el)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }

        prev = temp;
        temp = temp->next;
    }
    return head;
}

// Node* insertHead(Node* head,int el){
//     return new Node(el,head);

// }

Node *insertTail(Node *head, int el)
{
    if (head == NULL)
    {
        return new Node(el);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(el);
    temp->next = newNode;
    // element->next=NULL;
    return head;
}

Node *insertK(Node *head, int el, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(el);
        }
    }

    if (k == 1)
    {
        Node *temp = new Node(el, head);
        return temp;
    }

    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *newNode = new Node(el);
            newNode->next = temp->next;
            temp->next = newNode;
        }

        temp = temp->next;
    }

    return head;
}
Node* insertBeforeValue(Node *head, int el, int val)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->data==val)
    {
        return new Node(el, head);
        
    }


    Node *temp = head;

    while (temp->next != NULL)
    {
       
        if (temp->next->data==val)
        {
            Node *newNode = new Node(el,temp->next);
            temp->next = newNode;
            break;
        }

        temp = temp->next;
    }

    return head;
}

void print(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = convertArr2LL(arr);

    // cout<<checkIfPresent(head,15);
    // cout<<lengthofLL(head);

    // head = removeHead(head);
    // print(head);

    // head = removeTail(head);
    // print(head);

    // head = removeK(head,2);
    // print(head);

    // head = removeEl(head,8);
    // print(head);

    // head = insertHead(head,6);
    // print(head);

    // head= insertTail(head,24);
    // print(head);

    // head = insertK(head, 50, 2);
    // print(head);

    head = insertBeforeValue(head,100,8);
    print(head);

    // traversing a linked list
    //     Node* temp = head;
    //     while(temp) {
    //      cout<<temp->data<<" ";
    //      temp = temp->next;
    //     }
}