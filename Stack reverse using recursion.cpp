#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int x)
{
	if(s.empty())
	{
		s.push(x);
		return;
	}
	int y=s.top();
	s.pop();
	insertatbottom(s,x);
	s.push(y);
}
void reversestackrec(stack<int>& s)
{
	if(s.empty()) return;
	int x=s.top();
	s.pop();
	reversestackrec(s);
	insertatbottom(s,x);
}
int main()
{
	stack<int>s;
	s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reversestackrec(s);
    while(s.empty() == false)
    {
    	cout<<s.top() <<" ";
    	s.pop();
	}
return 0;
}
