#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool checkexpression(string str)
{
	stack<char>s;
	int n=str.length();
	for(int i=0;i<n;i++)
	{  char curchar=str[i];
	if(curchar=='(')
	{
		s.push(curchar);
	}
	else if(curchar=')')
	{
		if(s.empty() || s.top()!='(')
		{
			return false;
		}
		s.pop();
	}
	}
	return s.empty();
}

int main()
{
	string expr;
	cin>>expr;
	bool isvalid=checkexpression(expr);
	if(isvalid)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
