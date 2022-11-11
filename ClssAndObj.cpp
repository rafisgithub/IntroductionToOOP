#include<iostream>
using namespace std;
class Student{
	public:
		int sID;
		string sName;
		
};
int main(){
	Student obj;
	obj.sID=12;
	obj.sName="rafi Ahmed";
	cout<<obj.sID<<endl;
	cout<<obj.sName<<endl;
}
