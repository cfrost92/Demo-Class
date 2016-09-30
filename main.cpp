//Main.cpp
//Client File

 #include "MyClass.h"
 #include <string>
 #include <iostream>

 using namespace std;


 int main()
 {
	myClass myVar;
	int var = 10;
	string str;
	MyClass myVar;
	//int var = 10;
	//string str;

	cin >> var;
	cout << "var = " << var < endl;
	/*cin >> var;
	cout << "var = " << var << endl;
	cin >> str;
	cout << "str = " << str;
	cout << "str = " << str << endl; */

 	myVar.setNum(32);
	myVar.getNum();
	cout<< myVar.getNum()<< endl;
	myVar.setRoom("LR 12");
	myVar.getRoom();
	myVar.setFun('True');
	myVar.getFun();
	cout<<myVar.getRoom()<< endl;
	myVar.setFun(true);
	cout<<myVar.getFun()<<endl;


	cout<< myVar;
}
