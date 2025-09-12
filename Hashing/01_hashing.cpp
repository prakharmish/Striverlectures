#include <iostream>
using namespace std;

/*
5 size array 
1 3 2 1 3 elements
5 for how many queries?
1 how many times they appear?
4
2
3
12
*/

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13] = {0};
    for(int i = 0; i<n;i++){
        hash[arr[i]] +=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number] <<endl;
    }

    
    return 0;
}