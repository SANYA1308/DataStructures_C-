#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

//constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for the value: "<<value<<endl;

    }
};
//traversing the linked list
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
        
    }
    return len;
}


void insertAtHead(Node* &tail, Node* &head, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;

    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
}
//inserting at tail
void insertAtTail(Node* &tail,Node* &head, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    
}

void insertAtPosition( Node* &tail,Node* &head,int position, int data){
    if(position == 1){
        insertAtHead(tail,head, data);
        return;
    } 

    //insert in the middle
    int cnt = 1;
    Node* temp = head;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,head, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;




}
void deleteNode(Node* &head, int position){
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;


    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    
    Node* head = NULL;
    Node* tail = NULL;
    
    cout<<getLength(head)<<endl;
    // insertAtHead(head, 11);
    // print(head);

    insertAtTail(tail,head,12);
    print(head);
    insertAtPosition(tail,head, 2, 100);
    print(head);
    insertAtPosition(tail,head,3, 56);
    print(head);

    deleteNode(head,1);
    print(head);

}