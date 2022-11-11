#include<iostream>
using namespace std;
class Student{
	private:
		int sID;
		string sName;
		public:
			Student(int x,string y){
				sID=x;
				sName=y;
			}
			Student(Student &obj){
				cout<<"Copy constructor runs successfully"<<endl;
				sID=obj.sID;
				sName=obj.sName;
			}
			void getValue(){
				cout<<sID<<endl<<sName<<endl;
			}
};
int main(){
	Student obj1(150,"Rafi Ahmed");
	obj1.getValue();
	Student obj2(obj1);
	obj2.getValue();
}
