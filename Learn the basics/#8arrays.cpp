#include <iostream>
using namespace std;

int main(){
  int arr[5]; //Everything has to be of similar data type
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[3] += 10;
    //arr[3] = 16;
  cout << arr[3];
      return 0;
}