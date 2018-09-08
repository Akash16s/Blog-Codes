#include<iostream>
using namespace std;
void add(int a, int b){
 
 cout<<a+b<<endl;
}
void sub(int a, int b){
    
   cout<<a-b<<endl;
}
void mul(int a, int b){
    cout<<a*b<<endl;
}
void divi(int a, int b){

    cout<<a/b<<endl;
}
void mod(int a, int b){
    cout<<a%b<<endl;
}
int main() {
    char ch;
    int n1,n2;
    do{
        cin>>ch;
        switch(ch)
        {
            case '+':{
                cin>>n1>>n2;
                 add(n1,n2);
                break;}
            case '-':{
                cin>>n1>>n2;
                sub(n1,n2);
                break;}
            case '*':{
                cin>>n1>>n2;
                mul(n1,n2);
                break;}
            case '/':{
                cin>>n1>>n2;
               divi(n1,n2);
                break;}
            case '%':{
                cin>>n1>>n2;
                mod(n1,n2);
                break;}
            case 'x':
            case 'X':break;
            default: cout<<"Invalid operation. Try again.\n";
            }
        
        
    }while(ch!='X'&& ch!='x');
    
	return 0;
}