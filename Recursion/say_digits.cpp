#include<iostream>
using namespace std;

void digits(string arr[], int n){
   
   // Base case : 
   if(n == 0){
       return;
   }
   int dig = n % 10;

   n = n /10;

   digits(arr, n);

   cout << arr[dig] << endl;
}
int main(){
    
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    
    int n = 420;

    digits(arr, n);

    return 0;
}