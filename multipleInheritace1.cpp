#include<iostream>
using namespace std;
class Base1{
	protected:
		int base1int;
	public:
		void set_base1int(int x){
				base1int=x;
		}
};
class Base2{
	protected:
		int base2int;
	public:
		void set_base2int(int x){
				base2int=x;
		}
};
class Derived:public Base1,public Base2{
	public:
		void show(){
			cout<<"The value of base1 is "<<base1int<<endl;
			cout<<"The value of base2 is "<<base2int<<endl;
			cout<<"The sum of these valudes = "<<base1int+base2int<<endl;
		}
};
int main(){
	Derived obj;
	obj.set_base1int(10);
	obj.set_base2int(10);
	obj.show();
	return 0;
}
