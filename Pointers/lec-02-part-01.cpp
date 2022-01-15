#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // Address of first memory block of an array is denoted by the name of array itself.
    cout << "Address of first memory block : " << arr << endl;

    int *ptr = &arr[0];

    cout << "Address of first memory block : " << ptr << endl;

    cout << "Address of first memory block : " << *ptr << endl;

    cout << "Defrencing arr : " << *arr << endl; // Derefrencing arr (arr is denoting address of arr[0]; so *arr will give the value of arr[0])

    cout << "Value is : " << *arr + 1 << endl;

    cout << "value is: " << *(arr + 1)<< endl;

    cout << "value is: " << *(arr + 3)<< endl; // Pointer Arithematics

    cout << "value is: " << arr[3]<< endl;

    int i = 3;
    cout << i[arr] << endl; // we can access the array like this (because : arr[i] = *(arr + i), so we can write it in this way too : i[arr] = *(i + arr)).

    // DIFFRENCES : POINTER AND ARRAYS :
    int arr1[10] = {1,2,3,4,5,6,7,8,9,21};

    cout << "Size of 1 : " << sizeof(*arr1) << endl;

    cout << "Size of 2 : " << sizeof(&arr) << endl;

    cout << "Size of 3 : " << sizeof(arr1) << endl;

    int *p = &arr[0];
    cout << "Size of 4 : " << sizeof(p) << endl;

    cout << "Size of 5 : " << sizeof(*p) << endl;

    cout << "Size of 6 : " << sizeof(&p) << endl;

    int temp[20] = {1,2,3,4,5};

    cout << &temp[0] << endl;

    cout << &temp << endl;

    cout << temp << endl;

    int *a = &temp[0];

    cout << a << endl;

    cout << *a << endl;

    cout << &a << endl;

    // Symbol table content cannot be changed :

    int a1[10];

    // arr = arr + 1; // we cannot change mapping in symbol table.

    int *b = &a1[0];

    cout << b << endl;

    b = b + 1;

    cout << b << endl;

    // CHAR ARRAYS :

    char ch[5] = "abcd";

    cout << ch << endl; //Pura content print hoga.

    char *c = &ch[0];

    cout << c << endl; 

    return 0;
}