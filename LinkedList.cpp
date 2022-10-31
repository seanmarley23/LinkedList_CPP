#include "List.h"
#include <iostream>
using namespace std;

List::List(){
    head = NULL;
    current = NULL;
    temp = NULL;
};
List::~List(){

};

void List::addNode(int data){
    nodePtr this_node = new node;
    this_node->data = data;
    this_node->next = NULL;

    if(head != NULL){
        current = head;
        current->next = this_node;
    }
    else{
        head = this_node;
    }
};

void List::print(){
    
    if(head == NULL){
        cout << "List is empty" << endl;
    }
    else{
        current = head;
         while(current != NULL){
            cout << current->data << endl;
            current = current->next;
    }
    }

};
