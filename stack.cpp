//Sean O'Connor
#include <fstream>
#include <iostream>
#include <queue>
using namespace std;
class stack {

private:
  
    queue<int> Q1;
    queue<int> Q2;

public:
  bool empty() {return (Q1.empty() && Q2.empty());}

  void push(int e) {
   if (Q1.empty()){
      Q1.push(e);
    }
    else{
      while (!Q1.empty()){
        Q2.push(Q1.front());
        Q1.pop();
      }
        Q1.push(e);

      while(!Q2.empty()){
        Q1.push(Q2.front());
        Q2.pop();

      }
    }
  }

  void pop() {
    if (Q1.empty()){
      cout<<"Structure is already empty, try pushing"<<endl;
    }
    else{
      Q1.pop();
    }
  }

  int top() {
    if (Q1.empty()){
      cout<<"Nothing to return, structure is empty, try pushing"<<endl;
    }
    else{

      cout<<Q1.front()<<endl;
    }
          return Q1.front();
  }
};
int main() {
  int choice, element;
  stack st;
  while (true){
    cout<<"1. Push 2. Pop 3. Top 4. Exit "<<endl;
    cout<<"Enter Your Choice "<<endl;
    cin>> choice;
    switch(choice){
      case 1: cout<<"Enter the element ";
      cin>>element;
      st.push(element);
      break;
      case 2: st.pop();
      break;
      case 3: st.top();
      break;
      case 4: exit(0);
    }
  }
}
