/*Write the definition for a class called Rectangle that has data members length and width as float. The class
has the following member functions: -
float getPerimeter() to calculate and return the perimeter of the rectangle
float getArea() to calculate and return the area of the rectangle
Write a parameterized constructor to set data member length and width when object is being created.*/
#include<iostream>
using namespace std;
class Rectangle{
	private:
		float length,width;
		public:
			Rectangle(float l,float w){
				length=l;
				width=w;
			}
			float getPerimeter(){
				return 2*(length+width);
			}
			float getArea(){
				return length*width;
			}
};
int main(){
	float l,w;
	cout<<"Enter length and width of rectangle:\n";
	cin>>l>>w;
	Rectangle obj(l,w);
	cout<<"Perimeter of Rectangle:"<<obj.getPerimeter()<<endl;
	cout<<"Area of Rectangle:"<<obj.getArea()<<endl;
	return 0;
}
