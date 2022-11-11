#include<iostream>
using namespace std;
class Sum{
	private:
		int n1,n2;
		void setValue(){
			cout<<"Enter 1st number:"<<endl;
			cin>>n1;
			cout<<"Enter 2nd number:"<<endl;
			cin>>n2;
		}
		public:
			void result(){
				setValue();
				int sum=0;
				sum=n1+n2;
				cout<<"Sum="<<sum<<endl;
			}
};
int main(){
	Sum obj;
	obj.result();
	return 0;
}
