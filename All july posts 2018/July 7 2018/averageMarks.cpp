/*
----------------------------------------------------------------------------------------------------------------

que 1: Take as input a number N, print "even" if it is even, if not Print "odd".

constraint:  2<N<=1000000000

sample input: 3

sample output: odd

 ----------------------------------------------------------------------------------------------------------------
*/

//using for loop
#include<iostream>
using namespace std;
int main(){
int N,sum=0;
cin>>N;
for(int i=1;i<=N;i=i+1){
    int num;
    cin>>num;
    sum=sum+num;
}
cout<<sum/N<<" % ";
return 0;
}
