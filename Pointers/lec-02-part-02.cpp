#include<iostream>
using namespace std;

// Pointers and functions :
void print(int *q){
    cout << *q << endl;
}

void update(int *q){
    *q = *q + 1;
}

int getSum(int *d, int n){

    cout << "size : " << sizeof(d) << endl;
    int sum = 0;
    for(int i =0; i<n; i++){
        sum += d[i];
    }
    return sum;
}

int main(){
    // Pointers and functions : 

    int val = 5;

    int *q = &val;

    print(q);
   
    cout << "Before " << *q << endl;

    update(q);

    cout << "After " << *q << endl;


    // arrays and functions and pointers :

    int d[5] = {1,2,3,4,5};

    int e = getSum(d+3, 2);
    cout << "Sum is " << e << endl;

    return 0;
}