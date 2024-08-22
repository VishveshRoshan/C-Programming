#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() 
{
srand(static_cast<unsigned int>(std::time(nullptr)));
int random=rand()%100+1;
int user=0;
cout<<"I have generated a number from 1 to 100";
cout<<"\n Guess the number";
while(user!=random) 
{
cout<<"\n Enter your guess: ";
cin>>user;
if(user>random) 
{
cout<<"\n "<<user<<" is high,Retry!";
} 
else if(user<random) 
{
cout<<"\n "<<user<<" is low,Retry!";
} 
else 
{
cout<<"\n You are right and you have won the game!";
}
}
}
