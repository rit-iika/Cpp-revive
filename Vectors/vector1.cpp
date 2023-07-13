#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	vector<int> v= {1,2,4,2,3,6};
	
	vector<int> :: iterator itr;
cout<<"printing v1. . . "<<endl;
	for(itr = v.begin(); itr != v.end() ; itr++)
	{cout<<*itr<<endl;}

	vector<int> v2;
	vector<int> :: iterator itr2;

	for(int i=0;i<=5;i++)
	{ v2.push_back(i); }

cout<<v2[2]<<endl;
cout<<v2.at(3)<<endl;
cout<<v2.front()<<endl;
cout<<v2.back()<<endl;

//fill the vector with 10, for five times 
v2.assign(5,10 );
cout<<"assigning 10 at 5 places.."<<endl;
//inserts 10 at the beginning
v2.emplace(v2.begin(), 12);
cout<<" assigning 12 at first place.." <<endl;
//inserts 20 at end of vector
v2.emplace_back(20);
cout<<"placing 20 at back.."<<endl;
cout<<"printing v2.."<<endl;
for(itr2 = v2.begin(); itr2 != v2.end() ; itr2++)
{ cout<<*itr2<<endl; }

	return 0;
}
