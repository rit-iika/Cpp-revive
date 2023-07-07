#include<iostream>
using namepsace std;

//function template
template<typename T>
T myFunc(T x, T y)
{
	cout<<x+y;
}


//class template
template<class C>
class myClass{
   public:
	int id;
	void display(){}
};

int main()
{

myFunc<int>(20,30);  //calling function template

myClass<int> (obj1);
obj1.display();




return 0;

}