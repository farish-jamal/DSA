#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
   
   // Base case : 
   if(n == 0 || n == 1){
       return true;
   }

   if(arr[0] > arr[1]){
       return false;
   }else{
       return sorted(arr + 1, n - 1);
   }
}
int main(){
    
    int arr[10] = {2,3,4,5,6,7,11,9,10,11};
    
    int n = 10;

    bool ans = sorted(arr, n);

    if(ans){
        cout << "Array is sorted " << endl;
    }else{
        cout << "Array not is sorted " << endl;
    }

    return 0;
}