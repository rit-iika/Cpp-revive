#include<iostream>
#include<iterator>
#include<list>

using namespace std;

int main()
{
	list<int> numbers= {1,2,3,4,5,7};
	list<char>chars {'z', 'a', 'r', 'u', 'o'};

	for(auto i:numbers)
		cout<<i<<endl;

	cout<<"printing char list.."<<endl;
	 
	for(auto c: chars)
		cout<<c<<endl;
	

	numbers.push_front(0);
	numbers.push_back(0);
	cout<<numbers.front()<<"-"<<numbers.back()<<endl;

	numbers.pop_front(); //deleted front element
	numbers.pop_back(); //deletes back element

	//to access elements using iterators.. 
	list<int> :: iterator itr = numbers.begin();
	cout<<*itr<<endl;
	++itr;
	cout<<*itr<<endl;
	
	return 0;
}
