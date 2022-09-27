#include <iostream>
using namespace std;
int main()
{
 int pay;
 int tax;
 cout<<"please enter your income"<<endl;
 cin>>pay;
 
 
 if(pay<=60000)
 {
 tax=pay;
 }
 else if(pay>60000 && pay<=150000)
 {
 tax=pay*0.05;
 }
 else if(pay>150000 && pay<=500000)
 {
 tax=pay*0.1;
 }
 else 
 {
 tax=pay*0.15;
 }
 cout<<" income tax for the employee is  "<<tax<<endl;
}
