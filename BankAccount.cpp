#include<iostream>
using namespace std;
class Bank{
	public:
		string name;
		long long int amount;
		long long int balance=0;
		long long int depositAmount;
		long long int withdrawAmount;
		int choice;
		public:
			
		    void checkBalance(){
		    	cout<<"Your current balance is="<<balance<<endl;
			}
			void deposit(){
				cout<<"Enter deposit amount.\n";
				cin>>amount;
				balance+=amount;
			}
			void withDraw(){
				cout<<"Enter your withdrawal amonunt.\n";
				cin>>amount;
				if(amount<0 || amount>balance){
					cout<<"Invalid input.\n";
				}else{
					balance-=amount;
				}
				
			}
			int exit(){
				return 0;
			}
			
};
int main(){
	Bank obj;
	    again:
		cout<<"1)Check Balance.\n";
		cout<<"2)Deposit amount.\n";
		cout<<"3)With draw amonut.\n";
		cout<<"4.Exit.\n";
		cin>>obj.choice;
		switch(obj.choice){
			case 1:
			    obj.checkBalance();
			    goto again;
			case 2:
					obj.deposit();
					goto again;
			case 3:
					obj.withDraw();
					goto again;
			case 4:
					obj.exit();
					break;
			default:
					cout<<"Please choose the corrct option.\n";	  	
				
				
			}
	return 0;
}
