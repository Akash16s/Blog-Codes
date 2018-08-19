#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1},n=5;
    int target=3,i;
    for(i=0;i<n;i++){
    	if(arr[i]==target)
    		break;
    }
    cout<<"\nThe value is at :"<<i;

	return 0;
}