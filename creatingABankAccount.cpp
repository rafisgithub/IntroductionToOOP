#include<iostream>
using namespace std;
class Bank{
	private:
		string name;
		string NIDcardNum;
		int mobileNum;
		float InitailaBalance=0;
		public:
		void set_values(string x,string y,int z,float k){
			name=x;
			NIDcardNum=y;
			mobileNum=z;
			InitailaBalance=k;
		}
		void display(){
			cout<<"\n\n\n\n";
			cout<<"\t\t\tCongratualation! mr "<<name<<" "<<"your acount has created successfully.\n";
			cout<<"\t\t\t|#####################################################|\n";
			cout<<"\t\t\t|     Name            :"<<name<<"                     |\n";
			cout<<"\t\t\t|     NID number      :"<<NIDcardNum<<"               |\n";
			cout<<"\t\t\t|     Mobile no       :"<<mobileNum<<"                |\n";
			cout<<"\t\t\t|     Balance         :"<<InitailaBalance<<"          |\n";
			cout<<"\t\t\t|#####################################################|\n";
		}
		
};
int main(){
	Bank obj;
        string name;
		string NIDcardNum;
		int mobileNum;
		float InitailaBalance;
		cout<<"Enter your name:\n";
		cin>>name;
		cout<<"Enter your NID card number:\n";
		cin>>NIDcardNum;
		cout<<"Enter your mobile number:\n";
		cin>>mobileNum;
		cout<<"Enter your Initial balance:\n";
		cin>>InitailaBalance;
		obj.set_values(name,NIDcardNum,mobileNum,InitailaBalance);
		obj.display();
	return 0;
}
