#include<iostream>
using namespace std;

void print(int i){
    if(i>3){
        return;
    }

    cout << "Farish" << endl;

    print(i+1);
}

int main(){

    int i;
    cin >> i;

    print(i);

    return 0;
}