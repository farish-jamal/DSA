#include<iostream>
using namespace std;

int main(){
    // Dynamic Memory in 2D-Array (Using Heap Memory) :

    // int arr[5][5]; // Static Memory allocation to 2D Array.

    int row;
    cin >> row;

    int col;
    cin >> col;

    int **arr = new int *[row];

    for(int i = 0; i<row; i++){
        arr[i] = new int[col];
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocation of heap memory :
    for(int i = 0; i<row; i++){
        delete [] arr[i]; // Clearing memory
    }

    delete []arr; // Clearing pointers array.

    return 0;
}