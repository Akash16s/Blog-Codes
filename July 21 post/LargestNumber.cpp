//Largest among the inputs
#include<iostream>
#include<climits>
using namespace std;
int main(){
	 int N;
	 cin>>N;
     int arr[10];
     for(int i=0;i<N;i++){
     	cin>>arr[i];
     }

     int maxNum=INT_MIN;
     for(int i=0;i<N;i++){
     	if(maxNum<arr[i]) maxNum=arr[i];
     }
     cout<<maxNum;
	return 0;
}