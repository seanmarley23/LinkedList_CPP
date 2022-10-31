#ifndef LIST_H
#define LIST_H

class List{
    private:
        typedef struct node{
            int data;
            node* next;
        }* nodePtr;

        nodePtr head;
        nodePtr current;
        nodePtr temp;

    public:
        List();
        ~List();
        void addNode(int data);
        void addNodeAtPosition(int data, int p);
        void deleteNodeWithValue(int data);
        void deleteNodeAtPosition(int p);
        void print();
};
#endif

