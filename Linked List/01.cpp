#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
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

};
int main(){
    vector<int> arr = {2,5,8,7};
    Node* y = new Node(arr[0], nullptr);
    cout<<y; // will print the pointer to the memory location.
    //New keyword gives the pointer to the memory location then we can store it.
    //  Node y =  Node(arr[0], nullptr); creating an object. Cout<<y; will give error.
    // cout<< y.data() will print 2
    // cout<< y.next() will print the next that is the nullptr.
    cout<< y->data; // return 2.



    //for 2nd 
    Node* head = convertArr2LL(arr);
    cout << head->data;
    
    return 0;
}