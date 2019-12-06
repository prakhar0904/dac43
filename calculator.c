#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"\nEnter the two numbers:"<<endl;
cin>>a;
cin>>b;
cout<<"\n The addition of two numbers is : "<<a+b<<endl;
cout<<"\n The subtraction of two numbers is : "<<a-b<<endl;
cout<<"\n The addition of two numbers is : "<<a*b<<endl;
if(b==0)
{
cout<<"\n Divide by zero error:"<<endl;
}
else
cout<<"\nThe division of two numbers is:"<<a/b;



return 0;
}
