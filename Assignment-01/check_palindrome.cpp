#include<iostream>
#include<string.h>
using namespace std;

int main(){
char c[20];
int i,length,flag=0;
cout<<"Enter the string : " <<endl;
cin>>c;
length=strlen(c);
for(i=0;i<length;i++)
{
if(c[i]!=c[length-i-1]){
flag =1;
break;
}
}
if(flag==0){
cout<<c<<" is a palindrome"<<endl;
}
else{
cout<<c<<" is not a palindrome"<<endl;
}
}
