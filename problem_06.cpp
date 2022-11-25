/*Write a C++ program to make use of this pointer.*/
#include<iostream>
using namespace std;
class UsingThisPointer{
	private:
		int n;
		public:
		UsingThisPointer(int n){
			this->n=n;
		}
		~UsingThisPointer(){
			if(n%2){
				cout<<"I'm here cause of this selector.\n";
			}else{
				cout<<"I'm also here cause of this selector.\n";
			}
		}
};
int main(){
	int num;
	cout<<"Enter a integer:\n";
	cin>>num;
	UsingThisPointer obj(num);
	return 0;
}
