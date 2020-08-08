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
for(j=i+1;j<n;j++)
{
if(arr[i]<arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
cout<<"second maximum : "<<arr[1]<<endl;
cout<<"second minimun : "<<arr[n-2]<<endl;
}
