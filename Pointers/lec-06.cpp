#include<iostream>
using namespace std;
#define PI  3.14

inline void fun(int a, int b){ // No function overhead
    cout << a << b << endl;
}

// Default argument
void print(int arr[], int n, int start = 0){ 
    for(int i = start; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    // Macros :
    int r = 5;

    double area = PI * r * r;

    cout << "Area is : " << area << endl;

    // Inline func -  are used to reduce the func calls overhead.

    int a = 1, b = 1;

    fun(a, b);

    // Default arg : 

    int arr[5] = {1,2,3,4,5};
    int n = 5;

    print(arr, n, 2);

    return 0;
}