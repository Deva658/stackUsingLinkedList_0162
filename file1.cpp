#include <iostream>

using namespace std;

// node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

// stack class
class Stack {
private:
 Node* top; // pointer to the top node of the stack

public:
 Stack() {
  top = NULL; // intialaze the stack with a null top pointer
 }

 // push operation: insert an element onte the top of the stack
 int push(int value) {
  Node* newNode = new Node(); // 1.allocate mmeory for the new node
  newNode->data = value; // 2.assign value
  newNode->next = top; // 3. set the next pointer of the new node to the curret top
  top = newNode; // 4, update the top pointer to the new node
  cout << "Push Value: " << value << endl;
 }
}