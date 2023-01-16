#include<bits/stdc++.h> 
using namespace std; 

class Stack {
  public:
    queue &lt; int &gt; firstQ, secondQ;
  
  int currentSize;
  
  Stack() {
    currentSize = 0;
  }
  int top() {
    return firstQ.empty() ? -1 : firstQ.front();
  }
  
  int getSize() {
    return currentSize;
  }
  
  void push(int val) {
    secondQ.push(val);
    currentSize += 1;
    
    while (!firstQ.empty()) {
      int x = firstQ.front();
      secondQ.push(x);
      firstQ.pop();
    }
    swap(firstQ, secondQ);
  }
  
  void pop() {
    if (!firstQ.empty()) {
      firstQ.pop();
      currentSize -= 1;
    }
    return;
  }
};
