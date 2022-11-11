#include <iostream> 
using namespace std;
class Account{
private:
 double balance;
public:
 Account(double amount){ //constructor
 balance = amount;
 }
 ~Account(){ //destructor
 cout << "Destructor is called\n";
 }
 //setter method/function
 void deposit(double amount){
 if(amount > 0){
 balance += amount;
 }
 }
 //setter method/function
 void withdraw(double amount){
 if(amount > 0 && balance >= amount){
 balance -= amount;
 }
 }
 //getter method/function
 double getBalance(){
 return balance;
 }
};
int main(){
 Account a1(5000); //Constructor called automatically when object is created
 cout << "Initial deposit: " << a1.getBalance() << endl;
 a1.deposit(10000); //deposit function called
 cout << "After 2nd deposit: " << a1.getBalance() << endl;
 a1.deposit(7000); //deposit function called
 cout << "After 3rd deposit: " << a1.getBalance() << endl;
 a1.withdraw(2000); //withdraw function called
 cout << "Current Balance: " << a1.getBalance() << endl;
 return 0;
}
