#include<iostream>

void matrix(int ,int );
using namespace std;

int main(){
   int m,n;
   
   
   cout<<"enter the no. of rows";
   cin>>m;
   cout<<"enter the no. of columns";
   cin>>n;
     
   matrix(m,n);
   
   return 0;
   }

void matrix(int m,int n){

  
  int arr[m][n];
 int i,j;
   
 
 for( i=0;i<m;i++){
     for(j=0;j<n;j++){
      cin>>arr[i][j];
      }
      }
      
      
    for(i=0;i<m;i++){
     for(j=0;j<n;j++){
     cout<<arr[i][j]<<;
     }
     cout<<endl;
     }
    } 
