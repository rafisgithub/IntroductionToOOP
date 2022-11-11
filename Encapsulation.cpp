//Encapsulation implemented using class and access modifiers
#include<iostream>
using namespace std;
class Student{
	private:
		int sID;
		public:
			void setID(int id){
				sID=id;
			}
			int display(){
				return sID;
			}
};
int main(){
	Student obj;
	int id;
	cout<<"Enter your ID:"<<endl;
	cin>>id;
	obj.setID(id);
	cout<<"Your ID is:"<<obj.display();
	return 0;
}
