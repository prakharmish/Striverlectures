/*
A
AB
ABC
ABCD
ABCDE*/
#include <iostream>
using namespace std;

void pattern14(int n){
    for(int i =1;i<=n;i++){
        for(char ch = 'A'; ch < 'A' + i;ch++){

            /*
            For examplpe
            when i =3;
            The loop will run from 'A to 'A + 3
            which is A-->B-->C*/
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
     int t;
    cin>>t;
    for(int i = 0;i <t;i++){
        int n;
        cin >> n;
        pattern14(n);
    }
    
    return 0;
}