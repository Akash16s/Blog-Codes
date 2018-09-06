//Digits of Number in reverse order
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

    for(int j=0;j<i;j++){
    	cout<<arr[j];
    }
	return 0;
}