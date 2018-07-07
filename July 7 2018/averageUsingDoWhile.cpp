//average using do_while loop
#include<iostream>
using namespace std;
int main(){
int N,sum=0;
cin>>N;
int i=1;
do{
  int num;
  cin>>num;
  sum=sum+num;
  i++;
}while(i<=N);
cout<<sum/N<<" %";
return 0;
}
