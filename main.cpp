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
    cout << endl;
    testing.addNodeAtPosition(500,1);
    testing.print();//500,1,2,3,4
    cout << endl;
    testing.addNodeAtPosition(800,3);
    testing.print();//500,1,800,2,3,4
    return 0;
};