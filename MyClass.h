//This is my header file
#include<string>
using std::string;

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
	int num;
	string room;
	bool fun;
};//end class
