#include <iostream>
#include <cstdlib>

using namespace std;

class Queue{
    private:
        struct Node{
            int data;
            Node* prev;
        }
        *tail, *head;
        Node *t1;
        int cntNode;
        
    public:
        Queue();
        ~Queue();
        void insert(int);
        void display();
};

Queue::Queue(){
    tail = NULL;
    cntNode = 0;
    t1 = new Node;
}

Queue::~Queue(){
    delete[] tail;
    delete[] head;
}

void Queue::insert(int inVal){
    
    if(tail == NULL){
        tail = new Node;
        tail->data = inVal;
        tail->prev = t1;
        cntNode++;
    }else{
        Node *temp = new Node;
        
        if(cntNode == 0)
            t1->prev = temp;

        temp->data = inVal;
        temp->prev = NULL;
        head->prev = temp;
        head = temp;
        
    }
}

void Queue::display(){
    Node *temp = tail;
    while(temp != NULL){
        cout<<temp->data<<"  "; 
        temp = temp->prev;
    };
}
int main(int argc, char** argv) {
    Queue q;
    
    q.insert(1);
    q.insert(2);
    q.insert(3);
    q.insert(4);
    
    q.display();
    return 0;
}

