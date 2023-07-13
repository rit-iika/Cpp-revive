#include<iostream>
#include<iterator>
#include<set>
using namespace std;

int main()
{
	multiset<int> m;
	m.insert(2);
	m.insert(12);
	m.insert(99);
	m.insert(2);
	m.insert(2);

	for(auto& i:m)
		cout<<i<<"-";

	m.erase(m.end()--);


        for(auto i=m.begin(); i!=m.end(); i++)
		cout<<*i<<endl;

	return 0;
}
