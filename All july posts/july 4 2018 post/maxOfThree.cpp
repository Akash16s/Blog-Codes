
/*----------------------------------------------------------------------------------------------------------------

ques: Take three number as input and find maximum among them.

constraint:  2<N<=1000000000

sample input:  3

                      2

                      4

sample output: 4

----------------------------------------------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){
  int number1,number2,number3;
  cin>>number1;

  cin>>number2;

  cin>>number3;
  if(number1>number2 && number1>number3) {
  cout<<number1;
  }else if(number2>number1 && number2>number3){
  cout<<number2;
  }else {
  cout<<number3;
  }
   return 0;
  }


