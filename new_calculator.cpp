#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"\nEnter the two numbers:"<<endl;
cin>>a;
cin>>b;
cout<<"\nThe addition is : "<<a+b<<endl;
cout<<"\nThe subtraction is : "<<a-b<<endl;
cout<<"\nThe product is : "<<a*b<<endl;
if(b==0)
{
    cout<<"Cannot divide by zero"<<endl;
}
else
{
cout<<"\nThe divison is :"<<a/b<<endl;

}


return 0;
}