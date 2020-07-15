/*Write a c++ class called 'student' with
Data members:
name(char type),
marks1,marks2 (integer type)
The program asks the user to enter name and marks. Then calc_media() calculates the media note
and disp() display name and total media mark on screen in different lines.
Solution*/
#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
	string name;
	int marks1,marks2;
	calc_media(int marks1,int marks2){
		return (marks1+marks2);
	}	
	disp(){
		cout<<"name = "<<name<<endl<<"Total Media Marks = "<<calc_media(marks1,marks2)<<endl<<endl;
	}
};
int main(){
	Student stu;
	cout<<"Enter name of Student with two marks"<<endl;
	cin>>stu.name>>stu.marks1>>stu.marks2;	
	cout<<stu.disp();
	
	
}

