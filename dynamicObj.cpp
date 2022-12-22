#include<iostream>
using namespace std;
class Hero{
	private:
		string name;
		int health;
		char level;
		public:
		void getValues(){
	        cout<<"Enter player name:"<<endl;
	        cin.ignore();
	        getline(cin,name);
	        cout<<"Enter health in percentage:"<<endl;
	        cin>>health;
	        cout<<"Enter player level:"<<endl;
	        cin>>level;
	    }       
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Health: "<<health<<endl;
			cout<<"Level: "<<level<<endl<<endl;
		}
	
};
int main(){
	//Static Allocation
	Hero x;
	x.getValues();
	x.display();//The dot operator is applied to the actual object.
    //Dynamic Allocation
    Hero *y=new Hero;
    y->getValues();
	y->display();/*The arrow operator is used with a pointer to an object*/                  
    
	
	
	return 0;
}
