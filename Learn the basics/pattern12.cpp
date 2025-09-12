/*
1             1
1 2         2 1 
1 2 3     3 2 1
1 2 3 4 4 3 2 1
*/
//numbers,space,numbers
// 4 times outer loop.
//formula for spaces is 2*(n-1) if n = 4 then spaces 6
/*
1st row-->[1,6,1]
2nd row-->[2,4,2]
3rd row-->[3,2,3]
4th row-->[4,0,4]*/
#include <iostream>
using namespace std;
void pattern12(int n){
    int space = 2*(n-1);
    for(int i =1;i<=n;i++){
        //Numbers
        for(int j =1;j<=i;j++){
            cout<<j<<" ";
        }
        //spaces
        for(int k =1;k<=space;k++){
            cout<<" ";
        }

        //numbers
        for(int l =i;l>=1;l--){
            cout<<l<<" ";
        }
        cout<<endl;
        space -=2;

    }
}


int main(){
    int t;
    cin>>t;
    for(int i = 0; i <t ; i ++){
        int n ;
        cin>>n;
        pattern12(n);

    }

    
    return 0;
}