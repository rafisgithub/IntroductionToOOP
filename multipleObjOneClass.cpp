#include<iostream>
using namespace std;
class Student{
	public:
		int sID;
		string sName;
};
int main(){
	Student obj1;
	obj1.sID=32;
	obj1.sName="Rafi Ahmd";
	cout<<obj1.sID<<endl;
	cout<<obj1.sName<<endl;
	
	Student obj2;
	obj2.sID=23;
	obj2.sName="oyasick";
	cout<<obj2.sID<<endl;
	cout<<obj2.sName<<endl;
	return 0;
}
