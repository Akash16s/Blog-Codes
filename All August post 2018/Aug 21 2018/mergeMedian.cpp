#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n;
    m=2*n;
    int arr1[100],arr2[100];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cin>>arr2[i];
    //for(int i=0;i<m;i++) cout<<arr1[i];
    for(int i=m-1,k=n-1,l=n-1;i>=0;i--)
    {
        if(arr2[k]<arr1[l]){
        arr1[i]=arr1[l];
        l--;
    }else {arr1[i]=arr2[k];
    k--;  
    }
    }
	if(m%2==0) cout<<arr1[m/2-1];
	else cout<<arr1[(m+1)/2-1];
	return 0;
}