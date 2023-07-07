#include<iostream>
#include<cstring>
using namespace std;


//function templates
template <typename T>
T myMax( T x, T y )
{
	return (x>y)?x:y;

}


template <typename S>
S addString( S a, S b)
{
	return a+b;
}


template <typename Generic>
Generic print( Generic m, Generic n)
{
	cout<<m<<"---"<<n<<endl;

}

int main()
{
cout<<myMax<int> (3,7);
cout<<endl;
cout<<addString<string>("sam","ram");

cout<<endl;
cout<<addString<int>(97,45)<<endl;
cout<<addString<float>(323.1, 5.434);

cout<<endl;
print<string>("bostn","scientific");


return 0;

}
