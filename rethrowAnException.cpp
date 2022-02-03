#include <bits/stdc++.h>
using namespace std;
int division(){
    try
	{
		int a, b;
		cout<<"Enter two integer values: ";
		cin>>a>>b;
		try
		{
			if(b == 0)
			{
				throw b; //accept throw
			}
			else
			{
				cout<<(a/b); //
			}
		}
		catch(...)
		{
			throw; //rethrowing the exception
		}
	}
	catch(int)
	{
		cout<<"Second value cannot be zero";
	}
}
int main()
{
	cout<<division();
	return 0;
}