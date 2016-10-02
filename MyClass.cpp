//Implementation file

#include<iostream>
#include "MyClass.h"
#include <string>

void MyClass::setNum (int v)
{
	num=v;
}

int MyClass::getNum ()
{
	return num;
}

void MyClass::setRoom (string x)
{
	room = x;
}

string MyClass::getRoom()
{
	return room;
}

void MyClass::setFun(bool y)
{
	fun = y;
}

bool MyClass::getFun()
{
	return fun;
}


