#include<iostream>
using namespace std;
class Animal{//base class or parent class
	public:
		void eat(){
			cout<<"I can eat.\n";
		}
		void sleep(){
			cout<<"I can sleep.\n";
		}
		void run(){
			cout<<"I can run.\n";
		}
};
//derived class or child class
class Dog:public Animal{
	public:
		void bark(){
			cout<<"I am a dog.\n";
			cout<<"I can bark.\n";
		}
};
//child class or derived class
class Cow:public Animal{
	public:
		void milk(){
			cout<<"I'm a cow.\n";
			cout<<"I give milk.\n";
		}
};
int main(){
	Dog dog;
	dog.bark();
	dog.eat();
	dog.run();
	dog.sleep();
	
	Cow cow;
	cow.milk();
	cow.eat();
	cow.run();
	cow.sleep();
	return 0;
}
