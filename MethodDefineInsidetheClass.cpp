#include<iostream>
using namespace std;
class Student{
	public:
		void display(){
			cout<<"Enter you roll and Name:"<<endl;
			int roll;
			string name;
			cin>>roll>>name;
			cout<<roll<<endl;
			cout<<name<<endl;
		}
};
int main(){
	Student obj;
	obj.display();
	return 0;
}
