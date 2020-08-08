#include<iostream>
using namespace std;

int main(){
int i,temp,j,n;
float arr[100];
cout<<"Enter number of elements : "<<endl;
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{
temp=arr[i];
j=i-1;
while((temp<arr[j])&&(j>=0))
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
cout<<"sorted list : "<<endl;
for(i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}
