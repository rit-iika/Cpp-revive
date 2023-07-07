
#include<iostream>
#include<cstring>
using namespace std;
//templates

//class templates
template<class C>
class myClass{
	public:
		int id;
		string name;
		void display(int id, string name)
		{cout<<"name is: "<<name<<" id is: "<<id<<endl;}
};
//
//functional template
template <typename T>
T myFunc(T a, T b)
{
	return a+b;

}

int main()
{
cout<<myFunc<int>(32,12)<<endl;

cout<<myFunc<int>(10,0)<<endl;
cout<<myFunc<string>("ten","twnety")<<endl;

myClass<int>obj1;
obj1.display(122,"boston");
return 0;

}
