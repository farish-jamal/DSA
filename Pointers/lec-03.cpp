#include<iostream>
using namespace std;

void update( int **ptr2 ) {
    // ptr2 = ptr2 + 1; // Change nahi hoga

    // *ptr2 = *ptr2 + 1; // - Change Hoga

    **ptr2 = **ptr2 + 1; // - Change Hoga
}

int main(){
    // Double Pointers :
    int i = 5;
    
    int *ptr = &i;

    int **ptr2 = &ptr;

    cout << ptr << " " << ptr2 << endl;

    cout << &ptr << " " << *ptr2 << endl;

    cout << *ptr << " " << **ptr2 << endl;

    // Double pointers and functions : 

    cout << endl << "Before : " << i << " " << ptr << " " << ptr2 << endl;

    update(ptr2);

    cout << endl << " After : " << i << " " << ptr << " " << ptr2 << endl;
    
    return 0;
}