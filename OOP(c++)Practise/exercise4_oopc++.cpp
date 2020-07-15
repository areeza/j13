/*Write a class having two private variables and one member function which will return the area of the rectangle.
Solution:
*/
#include<iostream>
using namespace std;
class Info{
	private:
		int a;
		int b;
	public:
	int width,height;	
		int area(){
			cout<<"Area of rectangle is: ";
			return width*height;
		}
};
int main(){
	Info rec;
	cout<<"Enter the width of rectangle"<<endl;
	cin>>rec.width;
	cout<<"Enter the height of rectangle"<<endl;
	cin>>rec.height;
	cout<<rec.area();
	
}
