#include <iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for the node having value: "<<value<<endl;

    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

 void insertAtPosition(Node* &head, Node* &tail, int position, int data ){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp -> next = nodeToInsert;
    
 }

 void deleteNode(int position,Node* &head, Node* &tail ){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
         delete temp;

        
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if(curr->next == NULL){
            prev->next = curr->next;
            tail = prev;


        }
        else{
            prev->next = curr->next;
        }
        curr->next = NULL;
        delete curr;
    }
 }



void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
       temp  = temp->next;

    }
    cout<<endl;
}



int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail, 12);
    insertAtPosition(head, tail, 3, 11 );
    print(head);
    deleteNode(2,head, tail);
    print(head);
}