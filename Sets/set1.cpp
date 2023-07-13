#include<iostream>
#include<set>
using namespace std;
int main()
{

	set<int> s;
	s.insert(2);
	s.insert(1);
	s.insert(11);
	s.insert(0);
	s.insert(5);

	for(auto i:s)
		cout<<i<<endl;
set<char> c;
c.insert('a');
c.insert('e');
c.insert('x');

for(auto& str:c)
	cout<<str<<endl;

set<int ,greater<int>> G;
G.insert(12);
G.insert(100);
G.insert(0);
for(auto n:G)
	cout<<n<<endl;
	return 0;

}
