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
Node* removeK(Node* head, int k){
    if(head== NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* removeEl(Node* head, int el){
    if(head== NULL) return head;
    if(head->data == el){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data==el){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* insertHead(Node* head,int val ){
    // Node* temp = new Node(val, head);
    // return temp;

    //OR
    return new Node(val, head);
}
Node* insertTail(Node* head, int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}
Node* insertPosition(Node* head, int el, int k){
    if(head == NULL){
        if(k == 1){
            return new Node(el);

        }
        else {
            return head;
        }
    }
        if(k==1){
            return new Node(el,head);
        }
        int cnt = 0;
        Node* temp = head;
        while(temp!= NULL){
            cnt ++;
            if(cnt == k-1){
                Node* x = new Node(el,temp->next);
                temp->next = x;
                break;

            }
            temp = temp->next;
        }
        return head;
    }


int main(){
    vector<int> arr = { 12 , 5 , 8 , 7 };
    Node* head = convertArr2LL(arr);
    //head = insertHead(head, 100);//

    head = insertPosition(head,100, 1);
    printLL(head); 
}