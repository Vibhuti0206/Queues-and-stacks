#include <iostream>
#include <queue>

using namespace std;
//queue in C++ Standard Template Library

int main() {

    queue<int> q;

  for(int i=1;i<=5;i++)
  {
  	q.push(i);
  }
    while(!q.empty()){
        cout<<q.front() <<endl;
        q.pop();
    }



    return 0;
}

