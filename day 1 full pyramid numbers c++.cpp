#include<iostream>
using namespace std;
int main()
{
int i,j,n;

cout<<"Enter the value of n: ";

cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<i;
}
cout<<"\n";
}

for(int i =n-1; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout <<i;
        }
        cout << "\n";
    }
return 0;
}
