//array wave print column wise
#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n;
    cin>>m;
    int arr[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>arr[i][j];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n&&i%2==0;j++)
            cout<<arr[j][i]<<", ";
            for(int j=n-1;j>=0&&i%2!=0;j--)
            cout<<arr[j][i]<<", ";
    }
    cout<<"END";
	return 0;
}