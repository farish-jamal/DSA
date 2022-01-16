#include<iostream>
using namespace std;
 
// This is bad practice as these all are local variable at the end memory will be wipped out after execution of particular function. 

// int &func(int a){
//     int num = a;
//     int &ans = num;
//     return ans;
// }

void update(int &n){ // Pass by refrence
    n++;
}

int getSum( int *arr, int a){
    int sum = 0;

    for(int i = 0; i<a; i++){
       sum += arr[i];
    }

    return sum;
}

int main(){
    // Refrence variable - Same memory block but with diffrent name.
    
    int i = 5;

    int &j = i; // Decleration of refrence variable

    cout << i << " " << j << endl;

    cout << ++i << " " << ++j << endl;

    cout << i << " " << j << endl;

    // Why refrence variable ?

    int n = 5;

    cout << " Before : " << n << endl;

    update(n);

    cout << " After : " << n << endl;

    // Refrence variable and Arrays : 

    // How we should make variable size of array ?
    
    int a;
    cout << "Enter a number : " << endl;
    cin >> a;

    int *arr = new int[a];

    for(int i = 0; i<a; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, a);

    cout << "Answer is : " << ans << endl;
    
    return 0;
}