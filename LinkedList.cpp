#include <iostream>
using namespace std;

class Node{
    public:
    int data;

    Node* next;


    Node(int data){
        this-> data = data;
        this->next = NULL;
    }

};

    void insertAtHead(Node* &head, int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    void insertAtTail(Node* &tail, int data){
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;


    }

    void insertAtPosition(Node* &tail, Node* &head, int position, int data){
        if(position == 1){
            insertAtHead(head, data);
            return;
        }
        
        Node* temp = head; 
        int cnt = 1;
        while(cnt<position-1){
            temp = temp->next;
            cnt++;

        }
        if(temp->next == NULL){
            insertAtTail(tail, data);
            return;
        }

        Node* nodeToInsert = new Node(data);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }

    void print(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    int main(){
        Node* node1 = new Node(10);
        Node* head = node1;
        Node* tail = node1;
        print(head);
        insertAtTail(tail, 12);

        print(head);
        insertAtTail(tail, 15);
        print(head);

        insertAtPosition(tail,head, 3, 20);
        print(head);
    }
