//
// Created by kimem on 2019-09-27.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "myStack.hpp"

// Test Stack if it can push integers
TEST_CASE("A stack was created", "testStack"){
    myStack tester;
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(50) == true);
    REQUIRE(tester.push(100) == true);
    REQUIRE(tester.push(-10) == true);
    REQUIRE(tester.push(-100) == true);
    REQUIRE(tester.push(1000) == true);

}
// Test Empty Stack
TEST_CASE("A new stack is empty", "testEmptyStack"){
    myStack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);

}
//Test Full Stack
TEST_CASE("A stack is full","testFullStack" ){
    myStack tester;
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);
    tester.push(10);
    REQUIRE(tester.full() == true);
}
//Test Push Function
TEST_CASE("A stack is full, unable to push new integer", "testPush"){
myStack tester;
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);
    tester.push(10);
    //11th element
    REQUIRE(tester.push(11) == false);
}
//Test Top Function
TEST_CASE("Top element of this stack", "testTop"){
    myStack tester;
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);
    tester.push(10);

    REQUIRE(tester.top() == 10);

}

TEST_CASE("Unable to add new element, top element remains the same", "testTop2"){
myStack tester;
tester.push(1);
tester.push(2);
tester.push(3);
tester.push(4);
tester.push(5);
tester.push(6);
tester.push(7);
tester.push(8);
tester.push(9);
tester.push(10);

tester.push(11);
tester.push(12);

REQUIRE(tester.top() == 10);

}
//Test Pop Function
TEST_CASE("Top element was removed", "testPop"){
    myStack tester;
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);
    tester.push(10);
    //Remove 10
    tester.pop();
    REQUIRE(tester.top() == 9);
}

//Test pop when the stack is empty
TEST_CASE("Unable to pop off the empty stack", "testEmptyPop"){
    myStack tester;
    tester.pop();
    REQUIRE(tester.getIndex() == -1);
}
