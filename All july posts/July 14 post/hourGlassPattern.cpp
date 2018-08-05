/*
Pattern HourGlass

Take N as input. For a value of N=5, we wish to draw the following pattern :

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4 
                              3 2 1 0 1 2 3 
                                2 1 0 1 2 
                                  1 0 1 
                                    0 
                                  1 0 1 
                                2 1 0 1 2 
                              3 2 1 0 1 2 3 
                            4 3 2 1 0 1 2 3 4 
                          5 4 3 2 1 0 1 2 3 4 5

Input Format:

Take N as input.
Output Format:

Pattern should be printed with a space between every two values.
*/

#include<iostream>
using namespace std;
int main(){
int N;
cin>>N;
for(int i=1;i<=N+1;i++){
for(int j=1;j<=i;j++){
cout<<"  ";}
for(int j=N+1-i;j>=0;j--)
cout<<j<<" ";
for(int j=1;j<=N-i+1;j++)
cout<<j<<" ";
cout<<endl;
}
//     lower area
int val=1;
for(int i=1;i<=N;i++){
for(int j=N-i+1;j>=1;j--)
cout<<"  ";
val=i;
for(int j=0;j<=i;j++){
cout<<val<<" ";
val=val-1;
}
for(int k=1;k<=i;k++){
cout<<k<<" ";
}

cout<<endl;
}
return 0;
}