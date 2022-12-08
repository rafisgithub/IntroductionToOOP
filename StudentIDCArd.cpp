#include<iostream>
using namespace std;
class Student{
	private:
		string ID;
		string universityName;
		string Name;
		string enrolledSemister;
		string bloodGroup;
		string dateOfBirth;
		string department;
		string mobileNumber;
		
	public:
		void get_StudentIno(){
			cout<<"Enter you university name:\n";
			getline(cin,universityName);
			cout<<"Enter your ID:\n";
//		 	cin>>ID;//scanf("%d",ID;
            getline(cin,ID);
		 	cout<<"Enter your name:"<<endl;
//		 	cin>>Name;
            getline(cin,Name);
		 	cout<<"Enter your enrolled semister:\n";
//		 	cin>>enrolledSemister;
            getline(cin,enrolledSemister);
		 	cout<<"Enter your Deparment name:\n";
//		 	cin>>department;
            getline(cin,department);
		 	cout<<"Enter your date of birth:\n";
//		 	cin>>dateOfBirth;
            getline(cin,dateOfBirth);
		 	cout<<"Enter your mobile number:\n";
		 	cin>>mobileNumber;
		 	getline(cin,mobileNumber);
		 	cout<<"Enter your blood group:\n";
//		 	cin>>bloodGroup;
            getline(cin,bloodGroup);
		 
		 	
	}
	void display(){
		cout<<"Name             :"<<Name<<endl;
		cout<<"ID               :"<<ID<<endl;
		cout<<"Enrolled semister:"<<enrolledSemister<<endl;
		cout<<"Department       :"<<department<<endl;
		cout<<"Date of birth    :"<<dateOfBirth<<endl;
		cout<<"Mobiel number    :"<<mobileNumber<<endl;
		cout<<"Blood group      :"<<bloodGroup<<endl;
	}
		 
		 
};
int main(){
	Student object;
	object.get_StudentIno();
	object.display();
	
	return 0;
}

