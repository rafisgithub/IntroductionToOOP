#include<iostream>
using namespace std;
class Student{
	public:
		int sID;
		string sName;
		Student(int x,string y){
			sID=x;
			sName=y;
		}
		void getValue(){
			cout<<sID<<endl<<sName<<endl;
		}
};
int main(){
	Student obj1(150, "Rafi Ahmed");
	obj1.getValue();
	Student obj2(32,"Oyasick");
	obj2.getValue();
	return 0;
}
