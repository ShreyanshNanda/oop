#include<iostream>
using namespace std;

int main(){
int n,i,m=0,flag=0;
cout<<"Enter the number"<<endl;
cin>>n;
m=n/2;
for(i=2;i<n;i++)
{
if(n%i==0)
{
cout<<"It is not a prime Number"<<endl;
flag=1;
break;
}
}
if(flag==0)
{
cout<<"It is a prime Number"<<endl;
}
return 0;
}
