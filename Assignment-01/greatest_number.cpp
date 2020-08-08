#include<iostream>
using namespace std;

int main(){
int n1,n2,n3,max;
cout<<"Enter first number"<<endl;
cin>>n1;
cout<<"Enter second number"<<endl;
cin>>n2;
cout<<"Enter third number"<<endl;
cin>>n3;
max=n1;
if(n2>max&&n2>>n3){
cout<<"Greatest number is:"<<n2<<endl;
}else if(n3>max&&n3>n2){
cout<<"Greatest number is:"<<n3<<endl;
}else{
cout<<"Greatest number is : "<<n1<<endl;
}
}
