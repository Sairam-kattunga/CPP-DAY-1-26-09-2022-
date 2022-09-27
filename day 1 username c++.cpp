#include<iostream>
using namespace std;
int main()
{
	char user1[100],user2[100];
	cout<<"enter the user name: \n";
	cin>>user1;
	cout<<"re enter the user name: \n";
	cin>>user2;
	if (user1==user2)
	{
		cout<<"user name is valid \n";
	}
	else
	{
		cout<<"user name is invalid \n";
	}
	return 0;
}
