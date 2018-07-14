//averageClassMarks
#include<iostream>
using namespace std;
int main(){
    int marks[100];
    int noOfStudents;
    cout<<"Enter the number of students :";
    cin>>noOfStudents;
    for(int i=0;i<noOfStudents;i++){
    	cout<<"Enter the marks of student "<<i+1<<":";
    	cin>>marks[i];
    }
    float avg=0;
    for(int i=0;i<noOfStudents;i++){
    	avg=avg+marks[i];
    }
    cout<<"\nthe average is :"<<avg/(noOfStudents*1.00)<<endl;

	return 0;
}