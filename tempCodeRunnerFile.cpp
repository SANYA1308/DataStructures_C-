
    public:
    int data;

    Node* next;

    Node(int data){
        this-> data = data;
        this->next = NULL;
    }

    void insertAtHead(Node* &head, int data){
        Node* temp = new N