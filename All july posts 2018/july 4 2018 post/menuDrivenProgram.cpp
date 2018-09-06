/*
----------------------------------------------------------------------------------------------------------------

que 2 : Make a menu driven program for calculating various operation

                    1 for addition

                    2 for subtraction

                    3 for division

                    4 for multiplication

constraint:  2<N<=1000000000

sample input:  4

                                2

                                1

sample output: 6

Input format: num 1

                              num 2

                              operation

----------------------------------------------------------------------------------------------------------------

 */
#include<iostream>
using namespace std;
int main(){
  int num1,num2,decision;
  cin>>num1>>num2>>decision;
  switch(decision){
   case 1: cout<<num1+num2;
           break;
   case 2: cout<<num1-num2;
           break;
   case 3: cout<<num1/num2;
           break;
   case 4: cout<<num1*num2;
           break;
   default : cout<<"Wrong input";
  }
 return 0;
  }

