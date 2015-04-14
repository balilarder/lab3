#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int main()
{
	int length;
	int result=0;
	ifstream inFile("file.in.txt",ios::in);
	if(!inFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	inFile>>length;
	vector<int> heaviness(length);
	for(int i=0;i<length;i++)
		inFile>>heaviness.at(i);
	sort(heaviness.begin(),heaviness.end());
	for(int i=length-5;i<length;i++)
		result+=heaviness.at(i);
	cout<<result<<endl;	
		
}
