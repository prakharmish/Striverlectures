
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



};
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
int main(){
    vector<int> arr = {12,5,8,7};

    Node* head = convertArr2LL(arr);

    //Traverse in a LL
    Node* temp = head; // Create a pointer 'temp' and initialize it with the head of the linked list
    while(temp){  // Loop until temp becomes NULL (i.e., we've reached the end of the list)

        cout << temp->data << " "; // Print the data of the current node followed by a space

        temp = temp->next;   // Move the temp pointer to the next node in the list
        
    }
}