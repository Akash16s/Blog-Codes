#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[100]; 
    for(int i=0;i<N;i++){
    	cin>>arr[i];
    }

    int *ptrF=arr;
    int *ptrB=&arr[N-1];
    int i=0;
    while(i<(N+1)/2){
       //swap(*ptrF,*ptrB);    //you can use swap function as inbuilt function 
       //but for now we will do this
    	int temp=*ptrF;
    	*ptrF=*ptrB;
    	*ptrB=temp;
        ptrF++;
        ptrB--;
        i++;
    }

   for(int i=0;i<N;i++){
    	cout<<arr[i]<<" ";
    }


	return 0;
}