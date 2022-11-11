#include<iostream>
using namespace std;
class Student{
	public:
		int sID;
		string sName;
		void setValue(int x,string y){
			sID=x;
			sName=y;
		}
		void getValue(){
			cout<<sID<<endl<<sName<<endl;
		}
};
int main(){
	Student obj1,obj2;
	obj1.setValue(12,"Rafi Ahmed");
	obj1.getValue();
	obj2.setValue(40,"Oyasick");
	obj2.getValue();
}
