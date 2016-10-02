//This is the header file
#include<iostream>
#include<string>

using namespace std;

class MyClass
{
	public:
		void setNum(int);
		int getNum();
		void setRoom(string);
		string getRoom();
		void setFun(bool);
		bool getFun();
	private:
		int num=0;
		string room=" ";
		bool fun=true;
};//end of class definition
