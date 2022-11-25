/*Consider you have a class named Animal which has a public method eat(). Another class Dog which inherits
Animal class to get access of eat() method and it has bark() method to show its barking attribute.
Write C++ program to reflect this scenario.*/
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
int main(){
	Dog obj;
	obj.eat();
	obj.bark();
	return 0;
}
