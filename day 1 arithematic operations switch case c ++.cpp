#include<iostream>
using namespace std;
int main()
{
	float num_1,num_2;
	int operation;
	
	cout<<"what arithematis operation you want to perform \n ";
	cout<<"enter 1 for addition \n";
	cout<<"enter 2 for subtraction \n";
	cout<<"enter 3 for multiplication \n"; 
	cout<<"Press 4 for Division\n";
    cin>>operation;

    cout<<"Now Enter Two Numbers\n";
    cin>>num_1>>num_2;

switch (operation)

    {
    case 1:
    cout<<"The Addition result is: "<<num_1+num_2;
    break;

    case 2:
    cout<<"The Subtraction result is: "<<num_1-num_2;
    break;

    case 3:
    cout<<"The Multiplication result is: "<<num_1*num_2;
    break;

    case 4:
    cout<<"The Division result is: "<<num_1/num_2;
    break;
    }
return 0;
}
