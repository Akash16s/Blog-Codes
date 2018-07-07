//average marks using while loop
#include<iostream>
using namespace std;
int main(){
  int N,sum=0;
  cin>>N;
  int i=1;
  while(i<=N){
     int num;
     cin>>num;
     sum=sum+num;
     i++;
   }
cout<<sum/N<<" %";
return 0;
}
