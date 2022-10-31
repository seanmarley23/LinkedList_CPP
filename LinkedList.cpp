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
        while(current->next != NULL){
            current = current->next;
        }
        current->next = this_node;
    }
    else{
        head = this_node;
    }
};

void List::deleteNodeWithValue(int value){
    if(head == NULL){
        cout << "List is empty. Nothing to delete." << endl;
    }
    else{
        nodePtr delPtr = NULL;
        current = head;
        temp = head;
        while(current != NULL and current->data != value){
            temp = current;
            current = current->next;
        }

        if(current == NULL){
            cout << "The node with this value could not be found" << endl;
        }
        else{
            delPtr = current;
            current = current->next;
            temp->next = current;

            if(delPtr == head){
                head = head->next;
            }
            delete delPtr;
            cout << "The node with the value of " << value << " has been deleted" << endl;
        }
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
