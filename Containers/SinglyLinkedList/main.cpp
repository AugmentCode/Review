#include <iostream>

using namespace std;

class Link{
    private:
        struct Node{
            int data;
            Node* next;
        }
        *head;
        
    public:
        Link(){ head = NULL; }
        
        void insert(int);
        void showList();
        void removeByVal(int);
        int countNodes();
        void removeByPlacement(int);
};

void Link::insert(int inVal){
    if(head == NULL){
        head = new Node;
        head->data = inVal;
        head->next = NULL;
    }else{
        Node *temp = new Node;
        
        temp->data = inVal;
        temp->next = head;
        head = temp;
    }
}

void Link::showList(){
    if(countNodes() > 0){
        Node *temp = head;

        cout<<endl;

        cout<<"Count = "<<countNodes()<<endl;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        };
    }else
        cout<<"\nEmpty\n";
    cout<<endl;
}

void Link::removeByVal(int inVal){
    Node *temp = head;
    Node *prev;
    while(temp != NULL){
        prev = temp;
        
        if(inVal == head->data){
            head = head->next;
            return;
        }else if(temp->next->data == inVal){
            
            temp->next = temp->next->next;
            temp = prev;
            return;
        }
        temp = temp->next;
    };
}

int Link::countNodes(){
    int numNode = 0;
    Node *temp = head;
    while(temp != NULL){
        numNode++;
        temp = temp->next;
    };
return numNode;}


void Link::removeByPlacement(int nNode){
    Node *temp = head;
    Node *prev;
    int maxNumNode = countNodes();
    
    if(nNode > maxNumNode && nNode <= 0){
        cout<<"\nError: Node's Number to be deleted is out of bound.\n";
    }else{

        if(nNode == 1)
            head = head->next;
        else{
            for(int i = 0; i < nNode; i++){
                prev = temp;
                temp = temp->next;
            }

            if(countNodes() - nNode == 1)
                c
            temp = prev;
             
            
            
        }
    }
        
}
int main(){
    Link l;
    
    l.insert(1);
    l.insert(2);
    l.insert(3);
    
    l.showList();
    
    l.removeByVal(3);
    
    l.showList();
  
    l.removeByPlacement(2);
    
    l.showList();
    

    
return 0;}