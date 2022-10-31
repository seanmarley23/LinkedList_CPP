#include "List.h"
#include "LinkedList.cpp"
#include <iostream>
using namespace std;

int main(){
    List testing;
    testing.addNode(1);
    testing.addNode(2);
    testing.addNode(3);
    testing.addNode(4);
    testing.print(); //1,2,3,4
    testing.deleteNodeWithValue(1);
    testing.print(); //2,3,4
    testing.deleteNodeWithValue(3);
    testing.print(); //2,4

    return 0;
};