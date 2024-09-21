#include<iostream>

using namespace std;

class Node {

    public:
        Node *lchild;
        int data;
        Node *rchild;

      Node(int data){
        this->data = data;
      }  
};

class Queue {

    private:
        int front;
        int rear;
        int size;
        Node **Q;

    public:
        Queue(){
            front=rear=-1;
            size=10;
            Q=new Node*[size];
        }
        Queue(int size){
            front=rear=-1;
            this->size=size;
            Q=new Node*[size];
        }
        void enqueue(Node *x);
        Node *dequeue();

        int isEmpty(){
            return front==rear;
        }  

};

void Queue::enqueue(Node *x){
    if(rear==size-1)
        printf("Queue Full\n");
    else
        {
        rear++;
        Q[rear]=x;
    }
}


Node* Queue::dequeue(){
    Node *x=NULL;
    if(front ==rear){
        printf("Queue Empty\n");
    }else{
        x=Q[front+1];
        
    }
}

int main(){

    Node* node1=new Node(40);
    return 0;
}


// Node *node1 = new Node;
// node1->data = 10;

// Node *Q = node1; // Q points to node1

// Node **P = &Q; // P points to Q (a pointer to node1)

// // Accessing the data using Q:
// cout << Q->data << endl; // Output: 10

// // Accessing the data using P:
// cout << (*P)->data << endl; // Output: 10