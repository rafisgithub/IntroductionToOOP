/*Write a class called Circle that has setRadius(float r) function to set radius of a circle and getArea() and
getPerimeter() function to get area and perimeter of that circle respectively. Create two objects of that class
to calculate area and perimeter of those objects.*/
#include<iostream>
#define PI 3.141592653589793238462643383279502884197169399375105820974944
using namespace std;
class Circle{
	private:
		float radius;
		public:
			void setRadius(float r){
				radius=r;
			}
			void getArea(){
				cout<<"Area of circle:"<<PI*radius*radius<<endl;
			}
			void setPerimeter(){
				cout<<"Perimeter of Circle:"<<2*PI*radius;
			}
};
int main(){
	Circle ob1,ob2;
	float r;
	cout<<"Enter radius of  circle:\n";
	cin>>r;
	ob1.setRadius(r);
	ob1.getArea();
	ob2.setRadius(r);
	ob2.setPerimeter();
	
	return 0;
}
