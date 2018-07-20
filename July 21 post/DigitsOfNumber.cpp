//Digits of Number
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[100];
    int i=0;
    while(N>0){
       arr[i]=N%10;
       N=N/10;
       i++;
    }

    for(int j=i-1;j>=0;j--){
    	cout<<arr[j]<<endl;
    }
	return 0;
}