/*
ABCDE
ABCD
ABC
AB
A
*/



#include <iostream>
using namespace std;
 void pattern15(int n ){
    for(int i = 1;i<=n;i++){
        for(char ch ='A'; ch <= 'A'+(n-i) ;ch++){
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
        pattern15(n);
    }
    
    
    
    
    return 0;
}