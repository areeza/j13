/*Exercise 3
Write a probram with a mother class animal. Inside it define a name and an age variables, and
 set_value() function.Then create two bases variables Zebra and Dolphin which write a message
  telling the age, the name and giving some extra information (e.g. place of origin).

Solution*/
#include<iostream>
#include<string>
using namespace std;
class Animal{
	public:
		string name;
		int age;
		int set_value(string a,int b){
			name=a;
			age=b;
		}
};
class Zebra : public Animal{
	public:
	void msg_zebra(){
		cout<<"The zebra named "<<name<<" is "<<age<<" years old."<<endl;
	}
};
class Dolphin : public Animal{
	public:
	void msg_dolphin(){
		cout<<"The dolphin named "<<name<<" is "<<age<<" years old.";
	}
	
};
int main(){
	Zebra zeb;
	Dolphin doll;
	zeb.set_value("ana",7);
	doll.set_value("jiy",2);
	zeb.msg_zebra();
	doll.msg_dolphin();
}
