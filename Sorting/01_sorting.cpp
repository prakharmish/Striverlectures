#include <iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i =0; i <=n-2;i++){
        int mini=i;
        for(int j =i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i]=temp;
    }
}

int main(){
    int n; 
    cin>>n; // Step 1: Take input for the size of the array
    int arr[n]; // Step 2: Declare an array of size 'n'
    for(int i = 0; i<n;i++) cin>>arr[i]; // Step 3: Take 'n' integer inputs and store them in the array

    /*
    cin>>arr[i]
    it reads a value from the user and stores it at index i in the array.
    i	             cin >> arr[i] (User enters)	        arr after input
    0	                           4	                     [4, _, _, _, _]
    1	                           2	                     [4, 2, _, _, _]
    2	                           5	                     [4, 2, 5, _, _]
    3	                           1	                     [4, 2, 5, 1, _]
    4	                           3	                     [4, 2, 5, 1, 3]*/
    selection_sort(arr,n); // Step 4: Call the selection sort function to sort the array
    //arr-> the arrat we want to sort and n is the number of elements in the array

    for(int i=0;i<n;i++){ 
        cout<<arr[i]<<" "; // Step 5: Print the sorted array elements
    }
    
    return 0;
}