/*                          Polymorphism

                    (1)Complile Time         (2)Run Time
                        
         (1)Function           (2)Operaton                  (1)Virtual Funtions
        Overloading            overloading    
  
  */ 
//function overloading
#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}                
