/*Write the definition for a class called Rectangle that has data member length and width as float. The class
has the following member functions: -
void setLength(float l) to set the length data member
void setWidth(float w) to set the width data member
float getPerimeter() to calculate and return the perimeter of the rectangle
float getArea() to calculate and return the area of the rectangle
i) Write the definitions for each of the above member functions.
ii) Write main function to create one rectangle object. And after that set length and width for this object.
And also display rectangle’s perimeter and area.*/
#include<iostream>
using namespace std;
class Rectangle{//class
	private:
		float length,width;//data members
		public:
			void selLenght(float l){//user defined method
				length=l;
			}
			void setWidth(float w){//user defined method
				width=w;
			}
			float getPerimeter(){//user defined method
				return 2*(length+width);
			}
			float getArea(){//user defined method
				return (length*width);
			}
};
int main(){
	Rectangle obj;//creating Rectangle class object
	float l,w;
	cout<<"Enter Rectangle lenght and width:\n"<<endl;
	cin>>l>>w;
	obj.selLenght(l);
	obj.setWidth(w);
	cout<<"\nPerimeter of Rectangle:"<<obj.getPerimeter();
	cout<<"\nArea of Rectangle:"<<obj.getArea();
	return 0;
}
