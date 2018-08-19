#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5,start,last,mid;
    int target = 5;
    start=0;
    last=n-1;
    while(start<=last){
    	 mid=(start+last)/2;
    	if(arr[mid]==target){
    		break;
    	}
    	else if(target>arr[mid]){
    		start=mid+1;
    	}
    	else last=mid-1;
    }
    cout<<"\nThe index is:"<<mid;
	return 0;
}