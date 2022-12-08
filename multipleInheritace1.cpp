#include<iostream>
using namespace std;
class A{
	public:
		int x,y;
		public:
			void sum(){
				int sum=0;
				sum=x+y;
			}
};
class B:public A{
	public:
	void display(){
			cout<<sum;
		}
	
};
int main(){
	B obj;
    obj.display();
	return 0;
}
