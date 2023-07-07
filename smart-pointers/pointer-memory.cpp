#include<iostream>
#include<memory>
using namespace std;

class Demo{
	public:
		int x;
		int func(int x)
		//print all new addresses being allocated each time the statement runs. 
		{  for(int i=0;i<5;i++){
		       	Demo *ptr=new Demo();
			cout<<ptr<<endl;
			delete ptr;
	 }
		}
		

		
};

int main()
{
Demo obj1;
obj1.func(10);

unique_ptr<int> p1(new int(20));
cout<< *p1<< endl;

//unique_ptr<int> move(p1);
//	cout<< *p2 <<endl;
//	redclaration of unique pointer will give error

shared_ptr<int> a(new int(12));
cout<< *a<<endl;
shared_ptr<int> b(new int(14));
cout<< *b<<endl;
shared_ptr<int> c(new int(14));
cout<<b<<"-"<<a<<"-"<<c;

return 0;

}
