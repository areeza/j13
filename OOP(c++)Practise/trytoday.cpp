/*We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks
  of the class. The number of students in the class are entered by the user. Create a class named Marks 
  with data members for roll number, name and marks. Create three other classes inheriting the Marks class,
   namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student.*/
#include<iostream>
using namespace std;
class Marks{
public:
int roll_no;
string name;
int marks,pmarks,cmarks,mmarks;
int total(int pmarks,int cmarks,int mmarks){
return (pmarks+cmarks+mmarks);
}
int average(int pmarks,int cmarks,int mmarks){
	return (pmarks+cmarks+mmarks)/3;

}
};
class Physics : public Marks{
public:
int pmarks=50;
};
class Chemistry: public Marks{
public:
int cmarks=50;
};
class Mathematics: public Marks{
public:
int mmarks=50;
};
int main(){
	int pmarks,cmarks,mmarks;
	cout<<"Please enter 3 subject marks";
	cin>>pmarks>>cmarks>>mmarks;
	Marks mar;
	cout<<mar.total(pmarks,cmarks,mmarks)<<endl;
	cout<<mar.average(pmarks,cmarks,mmarks);
	return 8;

	
}
