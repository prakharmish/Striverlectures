#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next; // Pointer to the next node in the list.
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
     // Constructor for a node with only data provided, next initialized to nullptr
     Node(int data1) {
        data = data1;
        next = nullptr;
    }

};

    void printLL(Node* head){
        while(head!=NULL){
            cout <<head->data<<" ";
            head = head->next;
        }
    }

Node* removesHead(Node* head){
    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i =1; i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;

        
    }
    return head;

}

Node* removeTail(Node* head){
    if(head == nullptr || head->next == nullptr) 
    return nullptr;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp-> next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}


int main(){
    vector<int> arr = { 12 , 5 , 8 , 7 };
    Node* head = convertArr2LL(arr);
    head = removeTail(head);
    printLL(head); 
}