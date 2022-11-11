/*A destructor is defined like constructor and it is invoked/called automatically. It must have same name 
as class. But it is prefixed with a tilde sign (~)*/
#include <iostream> 
using namespace std;
class Student { // The class
 public: // Access specifier
 int sID; // Attribute (int variable)
 string sName; // Attribute (string variable)
 Student(){ //Default constructor
 cout << "Constructor is called\n";
 }
 Student(int x, string y){ //Parameterized constructor
 sID = x;
 sName = y;
 }
 ~Student(){ //Destructor
 cout << "Destructor is called\n";
 }
 void getValue(){
 cout << sID << "\n" << sName << "\n";
 }
};
int main(){
 Student obj;
 Student obj1(1001,"Bulbul Ahamed");
 obj1.getValue(); //Call the method
 return 0;
}
