#include<iostream>
using namespace std;
class Student{
	private:
		int sID;
		string sName;
		double GPA;
		public:
			void setValue(int x,string y,double z){
				sID=x;
				sName=y;
				GPA=z;
			}
			void displayID(){
				cout<<"ID:"<<sID<<endl;
			}
			void displayName(){
				cout<<"Name:"<<sName<<endl;
			}
			void displayGpa(){
				cout<<"GPA:"<<GPA<<endl;
			}
};
int main(){
	Student obj;
	int id;
	string name;
	double gpa;
	cout<<"Enter your ID:"<<endl;
	cin>>id;
	cout<<"Enter your name:"<<endl;
	cin>>name;
	cout<<"Enter your GPA:"<<endl;
	cin>>gpa;
	obj.setValue(id,name,gpa);
	obj.displayID();
	obj.displayName();
	obj.displayGpa();
}
