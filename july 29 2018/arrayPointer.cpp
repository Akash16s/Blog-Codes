#include<iostream>
using namespace std;

int main(){
 int N,arr[100];
 cin>>N;
 int *ptr=arr;           //initialising pointer
 for(int i=0;i<N;i++){    //for taking input
 	cin>>*ptr;
 	ptr++;
 }
ptr=arr;                 //initialising pointer
 for(int i=0;i<N;i++){    //fot output
 	cout<<*ptr<<endl;
 	ptr++;
 }
return 0;
}
