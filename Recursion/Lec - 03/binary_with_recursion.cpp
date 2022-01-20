#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int target){

    int mid = start + (end - start)/2;
    // Base cases : 
    // Element not found :
    if(start > end){
        return false;
    }

    //Element Found
    if(arr[mid] == target){
        return true;
    }

    if(arr[mid] < target){
        return binarySearch(arr, mid + 1 , end, target);
    }else{
        return binarySearch(arr, start, mid - 1, target);
    }
}
int main(){
    
    int arr[5] = {2,3,4,5,7};

    int target = 7;

    int start = 0;
    
    int end = 5;

    bool ans = binarySearch(arr, start, end, target);

    if(ans){
        cout << " Target Found " << endl;
    }else{
        cout << " Target Not Found " << endl;
    }

    return 0;
}