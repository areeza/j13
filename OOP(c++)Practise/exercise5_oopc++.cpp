/*Write a program and input two integers in main and pass them to default constructor
k of the class. Show the result of the additon of two numbers.

Solution*/
#include<iostream>
using namespace std;
class First{
	public:
		int a,b;
	First(int num1,int num2){
		a = num1;
		b = num2;
		cout<<"numbers are initialized"<<endl;
	}
	int sum(){
		return a+b;
	}
};
int main(){
	int num1,num2;
	cout<<"Enter two numbers:"<<endl;
	cin>>num1>>num2;
	First fir(num1,num2);
	cout<<"sum of numbers = "<<fir.sum();
}
