<<<<<<< HEAD
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
=======
#include<string>
using std::string;


class MyClass
+//header file
+{
+	private:
+	 int room;
+	 string room;
+	 bool fun;
+	 
+	public:
+	 void setNum(int);
+	 int getNum;
+	 void setRoom (string);
+	 string getRoom();
+	 void setFun(bool);
+	 bool setFun();
+	 
+}
>>>>>>> f08af286dc25e83bf4744121a77a734bf0b42382
