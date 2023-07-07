#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
//creating a new file
ofstream myFile("filenew.cpp");
//writting in new file
myFile<<"hey its a newly created file";

myFile.close();

string myText;
ifstream myRead("filenew.cpp");
while(getline(myRead, myText));
{ cout<<myText; }

myRead.close();




	return 0;
}
