#include<iostream>
using namespace std;
int main()
{
int a,b;
char c;
cout<<"Enter two numbers : ";    
cin>>a>>b;    
cout<<"\n Enter the operation to be performed on the numbers : ";    
cout<<"\n For addition press +";    
cout<<"\n For subtraction press -";    
cout<<"\n For multiplication press *";    
cout<<"\n For division press / \n";    
cin>>c;
if(c=='+')    
{    
cout<<"\n The answer is : "<<a+b;
}    
else if(c=='-')
{
cout<<"\n The answer is : "<<a-b;
}
else if(c=='*')
{
cout<<"\n The answer is : "<<a*b;
}
else
{
cout<<"\n The answer is : "<<a/b;
}
} 
