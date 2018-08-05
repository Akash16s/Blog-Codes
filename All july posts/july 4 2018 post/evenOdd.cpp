/*
----------------------------------------------------------------------------------------------------------------

ques: Take as input a number N, print "even" if it is even, if not Print "odd".

constraint:  2<N<=1000000000

sample input: 3

sample output: odd

 ----------------------------------------------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){
   int number;
   cin>>number;
   if(number%2==0){
       cout<<"even";
   }
   else{
       cout<<"odd";
   }
  return 0;
}
