/*Consider you have a class named Animal which has a public method eat(). Another class Dog which inherits
Animal class to get access of eat() method and it has bark() method to show its barking attribute. Moreover,
Babydog class is getting properties from Dog class and has own method weep() to show weeping status of it.
Construct C++ program to display this scenario.*/
#include<iostream>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"it can eat.\n";
		}
};
class Dog:public Animal{
	public:
		void bark(){
			cout<<"It can bark.\n";
		}
};
class Babydog:public Dog{
	public:
		void weep(){
			cout<<"it weep.\n";
		}
};
int main(){
	Babydog obj;
	obj.eat();
	obj.bark();
	obj.weep();
	return 0;
}
