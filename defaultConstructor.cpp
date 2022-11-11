//In C++ constructor is a special method/function which is invoked/called automatically when an object of a class is created.
//To create a constructor,use the same name as the class,followed by the parentheses().
//three type of constructor
//1.Default 2.Parameterized 3.Copy constructor
#include<iostream>
using namespace std;
class Student{
	public:
		Student(){
		cout<<"30"<<endl;
		cout<<"Rafi Ahmed"<<endl;	
		}
};
int main(){
	Student obj;
	return 0;
}
