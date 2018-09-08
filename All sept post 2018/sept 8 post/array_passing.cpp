#include<iostream>
using namespace std;
void arrayPass(int arrPassed[]){
for(int i=0;i<10;i++){
	cout<<++arrPassed[i];
}
}
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    arrayPass(arr);   // point to be noted

	return 0;
}