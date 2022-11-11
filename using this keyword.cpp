#include<iostream>
using namespace std;
class Student{
	public:
		int sID;
		string sName;
		void setValue(int sID, string sName){
			this->sID=sID;
			this->sName=sName;
		}
		void getValue(){
			cout<<sID<<endl<<sName<<endl;
		}
};
int main(){
	Student obj1,obj2;
	obj1.setValue(20,"Rafi");
	obj1.getValue();
	obj2.setValue(50,"oyasick");
	obj2.getValue();
	return 0;
}
