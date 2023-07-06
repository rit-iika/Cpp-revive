#include<iostream>
//virtual functions
#include<cstring>
using namespace std;

class A{
	public:
		virtual void func1()
		{
			cout<<"virtual function inside A"<<endl;
		}

};
class B: public A{
      	//B is derived of A
	public:
		void func1()
		{
			cout<<"virtual function inside B"<<endl;
		}

};


int main()
	{
	 A obj1;
	 obj1.func1();
	// obj1.func2();

	 A* aptr;
	 B b;
	 aptr = &b;
	 //to print virtual func
	 aptr -> func1();
	 





		return 0;
	}
