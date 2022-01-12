#include<iostream>
using namespace std;

int main(){
    int num = 5; // num is mapped with its address.
    // variable name is mapped with corresponding address in symbol table.
    
    cout << "Value of num : " << num << endl; // compiler will first find the address mapped with num. Then it will find the value which is stored in that address.

    // Address of opeartor : &
    cout << "Address of num : " << &num << endl; // It will give address of num.

    // Why Pointer? - it store the address of variable.

    // Pointer :
    int *ptr = &num; 

    // ptr is the pointer to the num : (same data type is must)

    cout << "Value is : " << *ptr << endl;
    // "*" - derefrence operator (ptr pe jo address hai uski value bata do).

    cout << "ptr is : " << ptr << endl; // Address of ptr 

    cout << "Size of ptr : " << sizeof(ptr) << endl; // size of pointer.

    // int *p // Pointer to int pointing to garbage address 
    // Bad practice

    int *pt = 0; // Segmentation fault | No memory exists 

    cout << "Before : " << num << endl;
    (*ptr)++;
    cout << "After : " << num << endl;

    // Copy one pointer to another pointer :
    int *q = ptr;

    cout << ptr << " - " << q <<endl;

    cout << *ptr << " - " << *q <<endl;

    // Pointer Arthimetics :

    int  i = 3;

    int *t = &i;

    cout << *t << endl;

    *t = *t + 1;

    cout << *t << endl;

    cout << "Before : "  << t << endl;

    t = t + 1; // jump to next integer address.

    cout << "Afetr : " << t << endl;

    cout << "Before : "  << t << endl;

    t = t - 1; // jump to previous integer address.

    cout << "Afetr : " << t << endl;

    return 0;
}