#include<iostream>
using namespace std;
int main(){
    int arr[]={44,555,66,22,11,333,4};
    int n=7;
    int j;
	for(int i=1;i<n;i++){
         int k=arr[i];
         int j=i-1;
		while(j>=0 && arr[j]>k){
			arr[j+1]=arr[j];
			j--;
		}
		j++;
		arr[j]=k;
		}
     for(int i=0;i<n;i++){
    	cout<<arr[i]<<"  ";
    }

	return 0;
}