#include<iostream>
using namespace std;

void destination(int dest, int src){
   
   cout << "Source : " << src << " Destination  : " << dest << endl;

   // Base case : 
   if(src == dest){
       cout << "Pahuch gaya" << endl;
       return ;
   }

   src++;

   destination(dest, src);
}
int main(){
    
    int n = 5;
    int src = 1;

    destination(n, src);

    return 0;
}