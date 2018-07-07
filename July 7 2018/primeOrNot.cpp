//que2
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i=2,k;
while(i<n){
   if(n%i==0) {cout<<"\nnot prime"; return 0;}
   i++;
   }
cout<<"prime";
return 0;

}


