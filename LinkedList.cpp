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

void List::addNodeAtPosition(int data, int p){
    nodePtr this_node = new node;
    this_node->data = data;
    int index = 1;
    current = head;
    
    if(p == 1){
        head = this_node;
        this_node->next = current;
    }
    else{
        while(index != p){
            temp = current;
            current = current->next;
            index++;
        }
        temp->next = this_node;
        this_node->next = current;
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

void List::deleteNodeAtPosition(int p){
    if(head == NULL){
        cout << "List is empty. Nothing to delete." << endl;
    }

    current = head;
    temp = head;
    nodePtr delPtr = NULL;
    int index = 1;

    if(p == index){
        temp = NULL;
        head = current->next;
        delPtr = current;
        delete delPtr;
    }

}

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
