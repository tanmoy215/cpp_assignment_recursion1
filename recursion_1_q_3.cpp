#include<iostream>
using namespace std;
int fun(int n){
    if(n==1) return true;
    if(n%2!=0 || n==0) return false;
   return fun(n/2);
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int m=fun(n);
    if(m==0) cout<<"False";
    else cout<<"true";
}