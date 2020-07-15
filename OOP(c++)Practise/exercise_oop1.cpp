/*Exercises 1
Write a program that defines a shape class with a constructor that gives value to width and height. The define two sub-classes
 triangle and rectangle, that calculate the area of the shape area (). In the main, define two variables a triangle and a 
 rectangle and then call the area() function in this two varibles.
Solution
*/
#include<iostream>
using namespace std;
class Shape{
	public:
		int width,height;
		Shape(){
			width=10;
			height=20;
		}
};
class Triangle : public Shape{
	public:
	int area(){
		return (width * height / 2);
		}
};
class Rectangle : public Shape{
	public:
	int area(){
		return (width * height);
		}
};
int main(){
	Rectangle rect;
	Triangle tri;
	cout<<rect.area()<<endl;
	cout<<tri.area();
	
}
