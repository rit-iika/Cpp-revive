#include<iostream>
#include<string>
using namespace std;

class Employee{
	private:
		int phone=928300802;
	protected:
		string address="12888 baner, pune";

	public:
		string name;
		int id;
	
		void display(int id)
		{cout<<"employee is: "<<name<<id<<endl;}

		friend void getCall(Employee& obj1); //friend function	 //DECLARATION 

};

void getCall(Employee& obj1) 			 		 //DEFINITION OF FRIEND FUNCTION
{
	obj1.phone+= 0;
	cout<<"emp contact is: "<< obj1.phone<<endl;
	cout<<"emp address is: "<<obj1.address;
}

int main()
	{

Employee obj;
obj.display(6);
getCall(obj);          						 //CALLING FRIEND FUNCTION


//friend keyword is used only during function declaration.

return 0;

	}
