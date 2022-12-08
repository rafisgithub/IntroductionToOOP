//we have 5 different types of Inheritance. 
/*
1)Single Inheritance
2)Multiple Inheritance
3)Hierarchical Inheritance
4)Multilevel Inheritance
5)Hybrid Inheritance (also known as Virtual Inheritance)
*/
                            //Single Inheritance.
#include<iostream>
using namespace std;
class Shape{
	public:
		void setValues(int l,int w,int h){
			length=l;
			width=w;
			heigth=h;
		}
	protected:
		int length;
		int width;
		int heigth;
};
class Rectangle:public Shape{
	private:
		void getArea(){
			cout<<"Rectangle area:"<<length*width<<endl;
		}
};
class Box:public Shape{
	public:
		void getVolume(){
			cout<<"Box Volume:"<<length*width*heigth<<endl;
		}
};

int main(){
	Rectangle obj;
	int l,w,h;
	cout<<"Enter lenght,width and heigth:\n";
	cin>>l>>w>>h;
	obj.setValues(l,w,h);
	obj.getArea();
	Box obj1;
	obj1.setValues(l,w,h);
	obj1.getVolume();
	return 0;
}
