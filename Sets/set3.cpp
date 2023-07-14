#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{

set<int>s;
s.insert(202);
s.insert(23);
s.insert(75);
s.insert(0);

//s.find(23);
//sort(s.begin(), s.end());
for(auto& it: s)
{cout<<it<<"-";}


set<string> s2;
s2.insert("isro");
s2.insert("nasa");
s2.insert("anything");

auto x= s2.find("nas");

if(x != s2.end())
{ cout<<"element found at position. "<<distance( s2.begin(), x)<<endl; }
else
{ cout<<"element not found "<<endl; }

for(string value: s2)
{ cout<<value<<endl;}


	return 0;

}
