/*
A   1st row--> 1 times
BB  2nd row--> 2 times
CCC 3rd row--> 3 times
DDDD
EEEEE
*/
#include <iostream>
using namespace std;
void pattern16(int n){
            for(int i =1;i<=n;i++){
    for(char ch = 'A'; ch <= 'A'+ i -1;ch++){
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
        pattern16(n);
    }
    
    
    
    
    return 0;
}