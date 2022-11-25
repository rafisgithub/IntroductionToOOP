/*Consider you have a class Shape which has two public methods setWidth(float w) and setHeight(float h) and
two protected variables width and height as float data type; and another class Rectangle which has a public
method float getArea(). Write code to calculate the area perimeter of a rectangle for given width and height
using the members of Shape class.*/
#include<iostream>
using namespace std;
class Shape{
		public:
			void setWidth(float w){
				width=w;
			}
			void setHeight(float h){
				height=h;
			}
		protected:
		float height,width;
};
class Rectangle:public Shape{
	public:
		float getArea(){
			cout<<"Perimeter:"<<2*(height+width)<<endl;
			return height*width;
		}
};
int main(){
	Rectangle obj;
	float h,w;
	cout<<"Enter height and width:\n";
	cin>>h>>w;
	obj.setHeight(h);
	obj.setWidth(w);
	cout<<"Area:"<<obj.getArea();
	return 0;
}
