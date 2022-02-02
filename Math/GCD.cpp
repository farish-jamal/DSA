#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main(){
    // GCD

    // gcd(a,b) = gcd(a-b, b) || gcd(a,b) = gcd(b, a%b)
    // a > b
    int a = 3;
    int b = 6;

    int ans = gcd(a, b);

    cout << "ans is : "<< ans << endl;

    return 0;
}