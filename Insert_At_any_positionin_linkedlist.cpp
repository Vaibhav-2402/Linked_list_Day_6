// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertAtMiddle(int data, Node* &head, Node* &tail, int position){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    
    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }
    
    //creating a new node
    Node* NodeToInsert = new Node(data);
    NodeToInsert -> next = temp -> next;
    temp -> next = NodeToInsert;
    
    //Inserting at last position
    
}

void print(Node* &head){
    Node* temp = head;
    
    while(temp != NULL) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    
    Node* node1 = new Node(78);
    //cout << node1 -> data << endl;
    Node* head = node1;
    
    Node* tail = node1;
    
    insertAtTail(tail, 98);
    
    print(head);
    
    insertAtTail(tail, 9856);
    
    print(head);
    
    insertAtMiddle(451, head, tail, 4);
    
    print(head);
    
    cout << "Head is : " << head->data << endl;
    cout << "Tail is " << tail->data;
    return 0;
}