#include<iostream>
using namespace std;

void rotate(int arr[], int start, int end){
   
   // Base case : 
   if(start > end) return;

   swap(arr[start], arr[end]);

   rotate(arr,start + 1, end - 1);
}
int main(){
    
    int arr[5] = {1,2,3,4,5};

    int start = 0;

    int end = 4;

    rotate(arr,start, end);

    for(int i = 0; i<5; i++){
        cout<< arr[i] << " ";
    }

    return 0;
}