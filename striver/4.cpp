#include<iostream>
using namespace std;

void print(int i){
    if(i>3){
        return;
    }

    print(i+1);
    cout << i << endl;
}
int main(){

    int i;
    cin >> i;

    print(i);

    return 0;
}