//Main.cpp
//This is the client File

 #include "MyClass.h"
 #include <string>
 #include <iostream>

 using namespace std;


 int main()
{
	MyClass myVar;

	myVar.setNum(32);
	cout<<myVar.getNum()<<endl;
	myVar.setRoom("LR 12");
	cout<<myVar.getRoom()<<endl;
	myVar.setFun(true);
	cout<<myVar.getFun()<<endl;

	return 0;	
}
