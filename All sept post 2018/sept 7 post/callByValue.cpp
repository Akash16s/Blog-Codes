//calling function by value 
#include<iostream>
using namespace std;
int sum(int a1,int b1){
    int s1;
    s1=a1+b1;
    return s1;
}
int main(){
    int a,b,s;
    cin>>a>>b;
    s=sum(a,b);
    cout<<"\n"<<s;
	return 0;
}