/*                          Polymorphism

                    (1)Complile Time         (2)Run Time
                        
         (1)Function           (2)Operaton                  (1)Virtual Funtions
        Overloading            overloading    
  
  */ 
//function overloading
#include <iostream>
using namespace std;
class MathematicalOp{
	private:
		int n1,n2,n4;
		double n3;
	public:
		void calculate(int x,int y){
			n1=x;
			n2=y;
			int sum=0;
			sum=n1+n2;
			cout<<"Sum:"<<sum<<endl;
		}
		void calculate(int x, int y ,double z){
			n1=x;
			n2=y;
			n3=z;
			double multiplication;
			multiplication=n1*n2*n3;
			cout<<"multiplication:"<<multiplication<<endl;
		}
		void calculate(int x,int y,double z,int d){
			n1=x;
			n2=d;
			int subtraction;
			subtraction=n1-d;
			cout<<"subtraction:"<<subtraction;
		}
};
int main() {
  MathematicalOp obj;
  int n1,n2,n4;
  double n3;
  cout<<"Enter four numbers:\n";
  cin>>n1>>n2>>n3>>n4;
  obj.calculate(n1,n2);
  obj.calculate(n1,n2,n3);
  obj.calculate(n1,n2,n3,n4);
}                
