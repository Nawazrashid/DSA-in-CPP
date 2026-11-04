#include<iostream>
using namespace std;

// Linked List :- All operations build from scrach (pop, push, etc.)

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) { // O(1)
        Node* newNode = new Node(val); // dynamic object
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void PrintLL() { // O(n)
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void push_back(int val) { // O(1) when tail pointer present otherwise O(n)
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() { // O(1)
        if(head == NULL) {
            cout << "list is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    void pop_back() { // O(n)
    if(head == NULL) {
        cout << "list is empty" << endl;
        return;
    }
    if(head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next != tail) {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
    } 

    void insert(int val, int pos) { // O(n)
        if(pos < 0) {
            cout << "invalid position" << endl;
            return;
        }

        else if(pos == 0) {
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i = 0; i<pos-1; i++) {
            if(temp == NULL) {
                cout << "invalid position" << endl;
                return;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int Search(int val) { // O(n)
        Node* temp = head;
        int idx = 0;
        while(temp != NULL) {
            if(temp->data == val) {
                return idx;
            } 
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main() {
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_back(5); // 4->3->2->1->5->NULL

    ll.pop_front(); // 3->2->1->5->NULL

    ll.pop_back(); // 3->2->1->NULL

    ll.insert(4, 1); // 3->4->2->1->NULL

    ll.PrintLL();

    cout << ll.Search(4) << endl; // 1
    cout << ll.Search(1) << endl; // 3

    return 0;
}