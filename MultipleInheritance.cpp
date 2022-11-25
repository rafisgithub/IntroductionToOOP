#include <iostream> 
using namespace std;
//base or parent or super class
class Shape{
 public:
 void setWidth(int w){
 width = w;
 }
 void setHeight(int h){
 height = h;
 }
 protected:
 int width;
 int height;
};
class paintCost{
 public:
 int getCost(int area){
 return area * 70;
 }
};
//derived or child or sub class
class Rectangle:public Shape, public paintCost{
 public:
 int getArea(){
 return width * height;
 }
};
int main(){
 Rectangle rec;
 int area;
 rec.setWidth(5);
 rec.setHeight(10);
 area = rec.getArea();
 cout << "Total Area : " << area << endl;
 cout << "Total Cost : Tk." << rec.getCost(area);
 cout << endl;
 return 0;
}
