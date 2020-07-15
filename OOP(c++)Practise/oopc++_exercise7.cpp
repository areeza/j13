/*Exercise 4
Perform addition operation on complex data using class and object. The program should ask
for real and imaginary part of two complex numbers, and display the real and imaginary parts of their sum.
Solution*/
#include<iostream>
using namespace std;
class Addition{
	public:
	int real_no1,real_no2,imaginary_no1,imaginary_no2;
	//sum(int real_no1,int real_no2,string imaginary_no1,string imaginary_no2){
	sum(){
		int real_part = real_no1 + real_no2;
		int imaginary_part = imaginary_no1 + imaginary_no2;
		cout<<real_part<<"+"<<imaginary_part<<"i";
	}
};
int main(){
	Addition add;
	cout<<"Enter first complex number:"<<endl;
	cout<<"real part: "<<endl;
	cin>>add.real_no1;
	cout<<endl<<"imaginary part: "<<endl;
	cin>>add.imaginary_no1;
	cout<<endl<<"Enter second complex  number:"<<endl;
	cout<<"real part: "<<endl;
	cin>>add.real_no2;
	cout<<endl<<"imaginary part: "<<endl;
	cin>>add.imaginary_no2;
	//cout<<add.sum(real_no1, real_no2, imaginary_no1,imaginary_no2);
	cout<<add.sum()<<endl;
}
