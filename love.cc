//Write a program for an armstrong number .
//Create a  function containing name ,roll no., course.
//Write a function to read a matrix of size m x n from the keyboard.

#include<iostream>
using namespace std;

void arms(int a);
int main(){

 int x,n;
 cout<<"How many numbers do u want to input?\n";
 cin>>n;
 cout<<"enter the numbers";
 for(int i=0;i<n;i++){
     cin>>x;
         arms(x);
     }
     
 
     }
     

     

void arms(int a){
   int b,sum=0;
   int temp=a;
   while(temp!=0){
    b=temp%10;
    sum=sum+(b*b*b);
    temp=temp/10;
    }
    
    
    if(sum==a){
    cout<<a<< "is armstrong value";
    }
    else
    {
    cout<<a<<" is not an armstromg value\n";
    }
}     
   
