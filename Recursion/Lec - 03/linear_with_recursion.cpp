#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int target){
   
   // Base case : 
   if(n == 0){
       return false;
   }
   if(arr[0] == target){
       return true;
   }else{
      return linearSearch(arr + 1, n - 1, target);
   }
}
int main(){
    
    int arr[5] = {2,3,4,5,7};
    
    int n = 5;

    int target = 71;

    bool ans = linearSearch(arr, n, target);

    if(ans){
        cout << " Target Found " << endl;
    }else{
        cout << " Target Not Found " << endl;
    }

    return 0;
}