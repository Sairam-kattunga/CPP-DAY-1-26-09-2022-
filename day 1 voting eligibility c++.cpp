#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age ";
	cin>>age;
	if (age>18)
	{
		cout<<"eligible for voting ";
	}
	else if (age>=0 || age<18)
	{
		cout<<"not eligible for voting\n";
		cout<<18-age<<"  years are left for voting ";
	}
	else
	cout<<"invalid ";
	return 0;
}
