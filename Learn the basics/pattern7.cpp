  /*  
      *
     ***
    *****
   *******
  **********  
  */


//total 9 columns
//We are printing space stars space
//0th row --> (4,1,4)
//1st row --> (3,3,3)
//2nd row --> (2,5,2)
//3rd row --> (1,7,1)
//4th row --> (0,9,0)
//(n - i -1) for spaces 
// (2i+1) for stars
#include <iostream>
using namespace std;

void pattern7(int n){
    for(int i = 0; i <n; i++){
        //space
        for(int j = 0; j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int k = 0;k<2*i+1;k++){
            cout<<"*";
        }
        //space
         for(int l = 0; l<n-i-1;l++){
            cout<<" ";
        }

        cout<<endl;
    }
    cout<<endl;

}

int main(){

    int t;
    cin >> t;
    for ( int i = 0; i <t ; i ++){
        int n;
        cin >> n;
        pattern7(n);

    }
    
    return 0;
}