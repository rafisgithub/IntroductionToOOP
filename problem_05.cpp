/*Write a program that will take employee information such as id, name, age, and salary. After that display all
employee’s information as a table.*/
#include<iostream>
#include<string>
using namespace std;
class EmployeesInfo{
	private:
		int id,age,salary;;
		string name;
		public:
			EmployeesInfo(int id,string name,int age,int salary){
				this->id=id;
				this->name=name;
				this->age=age;
				this->salary=salary;
			}
			~EmployeesInfo(){
				cout<<"\t\t\t\t.|..........Employee’s information Table.............|\n";
				cout<<"\t\t\t\t|                  |                                 |\n";
				cout<<"\t\t\t\t|    Name          |       Information               |\n";
				cout<<"\t\t\t\t|....................................................|\n";
				cout<<"\t\t\t\t|Employee id     : |"<<id<<"                         |\n";
				cout<<"\t\t\t\t|....................................................|\n";
				cout<<"\t\t\t\t|Employee name   : |"<<name<<"                       |\n";
				cout<<"\t\t\t\t|....................................................|\n";
				cout<<"\t\t\t\t|Employee age    : |"<<age<<"                        |\n";
				cout<<"\t\t\t\t|....................................................|\n";
				cout<<"\t\t\t\t|Employee salary  :|"<<salary<<"                       |\n";
				cout<<"\t\t\t\t|....................................................|\n";
				cout<<"\t\t\t\t|                  |                                 |\n";
				cout<<"\t\t\t\t|....................................................|\n";
				
}
		
};
int main(){
		int id,age,salary;
		string name;
		cout<<"Enter your ID:\n";
		cin>>id;
		cout<<"Enter name:\n";
		cin.ignore();
		getline(cin,name);
		cout<<"Enter age:\n";
		cin>>age;
		cout<<"Enter salarary:\n";
		cin>>salary;
		EmployeesInfo obj(id,name,age,salary);
		
}
