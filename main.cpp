#include "List.h"
#include "LinkedList.cpp"
#include <iostream>
using namespace std;

int main(){
    List list1;
    list1.addNode(1);
    list1.addNode(2);
    list1.addNode(3);
    list1.addNode(4);
    cout << "List 1: " << endl;
    list1.print(); // 1,2,3,4
    cout << endl;

    List list2;
    list2.addNode(1);
    list2.addNode(2);
    list2.addNode(3);
    list2.addNode(4);
    cout << "List 2 Before: " << endl;
    list2.print(); //1,2,3,4
    cout << endl;

    list2.addNodeAtPosition(100, 1);
    list2.addNodeAtPosition(500,3);
    cout << "List 2 After: " << endl;
    list2.print();//100,1,500,2,3,4
    cout << endl;

    List list3;
    list3.addNode(1);
    list3.addNode(2);
    list3.addNode(3);
    list3.addNode(4);
    list3.addNode(5);
    list3.addNode(6);
    list3.addNode(7);
    list3.addNode(8);

    cout << "List 3 Before: " << endl;
    list3.print(); //1,2,3,4,5,6,7,8
    cout << endl;

    list3.deleteNodeWithValue(1);
    list3.deleteNodeWithValue(3);
    list3.deleteNodeWithValue(6);
    list3.deleteNodeWithValue(8);

    cout << "List 3 After: " << endl;
    list3.print();//2,4,5,7
    cout << endl;


    List list4;
    list4.addNode(1);
    list4.addNode(2);
    list4.addNode(3);
    list4.addNode(4);
    list4.addNode(5);
    list4.addNode(6);

    cout << "List 4 Before: " << endl;
    list4.print(); //1,2,3,4,5,6
    cout << endl;

    list4.deleteNodeAtPosition(1);
    cout << "List 4 After 1 deletion: " << endl;
    list4.print();//2,3,4,5,6
    cout << endl;

    list4.deleteNodeAtPosition(4);
    cout << "List 4 After 2 deletions: " << endl;
    list4.print();//2,3,4,6
    cout << endl;


    



    return 0;
};