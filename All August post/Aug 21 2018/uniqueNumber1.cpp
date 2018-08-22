#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
      sum=sum^a[i];
        
    }
    cout<<sum;
    
	return 0;
}