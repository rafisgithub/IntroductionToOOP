/*Write a class called Square that has setLength(float l) function to set length of square and getArea() and
getPerimeter() function to get area and perimeter of that square respectively. Create an object of that class to
calculate area and perimeter of that object.*/
#include<iostream>
using namespace std;
class Square{
	private:
		float a;
		public:
			void setLength(float l){
				a=l;
			}
			void getArea(){
				float area=0;
				area=a*a;
				cout<<"Area of Square:"<<area<<endl;
			}
			float getPerimeter(){
			return 4*a;	
			}
			
};
int main(){
	Square obj;
	float l;
	cout<<"Enter length of Square:"<<endl;
	cin>>l;
	obj.setLength(l);
	obj.getArea();
	cout<<"Perimeter of Square:"<<obj.getPerimeter();
	return 0;
}
