#include<iostream>
using namespace std;
class Hero{
	//properties
	private:
	int health;
	public:
	char level;
	
	int getHealth(){
		return health;
	}
	void setHealth( int h){
		health=h;
	}
	
};
int main(){
//	Hero h1;
    Hero rafi;
//    rafi.health=86;
    rafi.level='B';
//	cout<<"size :"<<sizeof(h1);
//    cout<<"Health is: "<<rafi.health<<endl;
      rafi.setHealth(70);
      cout<<"Health is :"<<rafi.getHealth()<<endl;
    cout<<"Level is: "<<rafi.level<<endl;
	
	return 0;
}
