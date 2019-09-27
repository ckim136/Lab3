//
// Created by kimem on 2019-09-27.
//

#ifndef LAB3_MYSTACK_HPP
#define LAB3_MYSTACK_HPP
#include <vector>
constexpr int size = 10;
using namespace std;
class myStack{
private:
   vector<int> stackArray;
    int currentTop;
public:
    myStack();
    bool push(int newInt);
    void pop();
    int top() const ;
    bool empty() const;
    bool full() const;


};

#endif //LAB3_MYSTACK_HPP
