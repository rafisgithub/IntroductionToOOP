#include<iostream>
using namespace std;
class MathematicalOparation{
	private:
		int n,i,counter=0;
	public:
		MathematicalOparation(int x){
			n=x;
		}
	friend void primeNum(MathematicalOparation ob);
};
void primeNum(MathematicalOparation ob){
	for(ob.i=2;ob.i<=ob.n/2;ob.i++){
		if(ob.n%2==0){
			ob.counter++;
		}
	}
	if(ob.counter==0){
		cout<<"Prime number.\n";
	}else{
		cout<<"Not prime.\n";
	}
}
int main(){
	int n;
	cout<<"Enter a number:\n";
	cin>>n;
	MathematicalOparation obj(n);
	primeNum(obj);
	
	
	return 0;
}
