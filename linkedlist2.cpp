#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    // Pointer
    Node* next; 

    // Constructor is used in creation of new node in linked list
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this -> data;

        // freeing the memory
        if(this -> next != NULL){
            delete next;
            this->next = NULL; 
        }
        cout<<"Memory is free for the node having value: "<<value<<endl;
    }
};

// Insertion of nodes in linked list at head position
void insertAtHead(Node* &head, int data){
    // Creating a new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}


// Insertion of nodes in linked list at tail position
void insertAtTail(Node* &tail, int data){
    // Creating a new node
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

// Insertion of nodes in linked list at a given position
void insertAtPosition(Node* &head, Node* &tail, int position, int data){

    // Inserting at starting position
    if(position == 1){
        insertAtHead(head, data);
        return ;
    }

    // Creating a new node
    Node* temp = head;

    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    // Inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return ;
    }

    // Creating a node for data
    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

// Traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void deleteNode(int position, Node* &head, Node* &tail){

    // deleting starting node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        // For deleting element present at tail
        if(curr->next == NULL){
            prev->next = curr->next;
            tail = prev;
        }
        // For deleting element present in middle
        else{
            prev->next = curr->next;
        }
        
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 3, 22);
    insertAtPosition(head, tail, 1, 7);
    insertAtPosition(head, tail, 6, 20);
    print(head);

    cout<<"Head: "<< head->data <<endl;
    cout<<"Tail: "<< tail->data <<endl;

    deleteNode(6, head, tail);
    print(head);

    cout<<"Head: "<< head->data <<endl;
    cout<<"Tail: "<< tail->data <<endl;

}