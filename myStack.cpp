//
// Created by kimem on 2019-09-27.
//

#include "myStack.hpp"

myStack::myStack() {
    currentTop = -1;
}

bool myStack::push(int newInt) {
    if (currentTop >= 9){
        return false;
    }else {
        stackArray.push_back(newInt);
        currentTop += 1;
        return true;
    }
}

void myStack::pop() {
    if(stackArray.empty()){
        //cout << "The stack is currently empty" << endl;
    } else{
        currentTop -= 1;
    }

}

int myStack::top() const {
    return stackArray[currentTop];
}

bool myStack::empty() const {
    if(stackArray.empty()){
        return true;
    }else{
        return false;
    }
}

bool myStack::full() const{
    if ((stackArray.size() == 10)){
        return true;
    }
    return false;
}

string myStack::print() const {
    cout<< "Contents of the stack" << endl;
    string output;
    for (int i = 0 ; i<=currentTop ; i++) {
        output.append(to_string(stackArray[i]));
        output.append("\n");
    }
    return output;
}

int myStack::getIndex() const {
    return currentTop;
}

