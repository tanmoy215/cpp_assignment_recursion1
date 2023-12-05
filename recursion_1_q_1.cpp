#include<iostream>
using namespace std;
void fun(int a,int b,int sum){
  if(a==b) {
    cout<<"Final ans : "<<sum;
    return;
  }
  else if(a%2!=0){
    sum+=a;
  }
  fun(a+1,b,sum);
}
int main(){
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    int sum=0;
    fun(a,b,sum);
}