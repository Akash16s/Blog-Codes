//2-D matrix and displaying
#include<iostream>
using namespace std;
int main(){
    int N,M;
    int a[100][100];
    cin>>N>>M;
    for(int i=0;i<N;i++){
    	for(int j=0;j<M;j++){
    		cin>>a[i][j];
    	}
    }
    for(int i=0;i<N;i++){
    	cout<<"[";
    	for(int j=0;j<M;j++){
    		cout<<a[i][j]<<" ";
    	}
    	cout<<"]"<<endl;
    }
	return 0;
}