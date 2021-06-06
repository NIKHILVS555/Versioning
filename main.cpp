#include<iostream>
#include<cstring>
using namespace std;
int main(int argc,char * argv[])
{
        //cout<<argv[0]<<argv[1];
	if(argc>1)
	if(strcmp(argv[1],"-v")==0)
	{
		cout<<"Version : "<<"1.0.0";
		return 1;
	}
	cout<<"Hello World";
}

