/*Exercise#2:
Write a program with a mother class and an inherited daugther class.Both of them should have a method
void display ()that prints a message (different for mother and daugther).In the main define a daughter
and call the display() method on it.
Solution:
*/
#include<iostream>
using namespace std;
class Mother{
	public:
	void display(){
		cout<<"Mother display method\n";
	}
};
class Daughter : public Mother{
	public:
		void display(){
			cout<<"Daughter display method";
		}
};
int main(){
	Daughter dau;
	dau.display();
}
