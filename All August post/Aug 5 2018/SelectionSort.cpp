#include<iostream>
using namespace std;
int main(){
    int arr[]={44,555,66,22,11,333,4};
    int n=7;
    for(int i=0;i<n-1;i++){
    	int minIndex=i;
          for(int j=i+1;j<n;j++){
          	if(arr[minIndex]>arr[j]){
          		minIndex=j;
          	}
          }
          swap(arr[minIndex],arr[i]);
    }
    
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<"  ";
    }
	return 0;
}