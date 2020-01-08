#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class stackusing queue
{
    queue<int> *q1,*q2;
	public:
	    stackusingqueue()
		{
		    q1=new queue<int>();	
		    q2=new queue<int>(); 
		}	
		void push(int x)
		{
			q1->push(x);
		}
		void pop()
		{
			int n=q1->size();
			//pop n-1 elements from q1 to q2
			for(int i=0;i<n;++i)
			{
				q2->push(q1->front());
				q1->pop();
			}
 			
		if(q1->empty() == false){		}
		q1->pop;
		swap(q1,q2); //maintain definition that q2 is always empty
	}
		void top()
		{
				int n=q1->size();
			//pop n-1 elements from q1 to q2
			for(int i=0;i<n;++i)
			{
				q2->push(q1->front());
				q1->pop();
			}
			
		
		int topelement=q1.front();
		if(q1->empty()== false)
		{   q2->push(q1->front());
			q1->pop();
			swap(q1,q2); 
		}
return topelement;
}
~stackusingqueue()
{
	delete q1;
	delete q2; 
}
};
int main()
{
	stackusingqueue s;
	s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top();
    cout<<s.top();
    s.pop();
    cout<<s.top();
    return 0;

}
