/*A tutor asked his student to add two random integer numbers. After right answer, tutor again told the student to add
three numbers. Like earlier, student added up the numbers correctly. Similarly, your job is to write a program that adds
the two or three numbers according to your input using only one function name Sum(parameter-list).*/
#include<iostream>
using namespace std;
void Sum(int x=0,int y=0,int z=0){
	int sum=0;
	sum=x+y+z;
	cout<<"sum:"<<sum<<endl;
}
int main(){
	int n1,n2,n3,choice;
	while(1){
	cout<<"1)Add two integer:\n";
	cout<<"2)Add three integer:\n";
	cout<<"Choose option.\n";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter two integer:\n";
			cin>>n1>>n2;
			Sum(n1,n2);
			break;
		case 2:
			cout<<"Enter three integer:\n";
			cin>>n1>>n2>>n3;
			Sum(n1,n2,n3);
			break;
		default:
			cout<<"Please select correct option.\n";
	}
	}
	return 0;
}
