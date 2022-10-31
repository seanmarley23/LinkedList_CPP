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
    testing.deleteNodeAtPosition(2);
    testing.print(); //1,3,4
    testing.deleteNodeAtPosition(1);
    cout << endl;
    testing.print(); //3,4
    



    return 0;
};