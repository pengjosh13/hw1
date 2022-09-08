/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"
#include <iostream>
using namespace std;

/* Add a prototype for a helper function here if you need */

void printList(Node* head)
{
    Node* ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->value);
        ptr = ptr->next;
    }
 
    printf("NULL\n");
}


void push(Node** head, int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = data;
    newNode->next = *head;
    *head = newNode;
}

void checkEndOdd(Node*& brode){
    if(!brode){
        return;
    }else{
        if(brode->next){
    if (brode->value % 2 != 0 && brode->next->value % 2 == 0){
        brode->next = brode->next->next;
    }
    }
    }
}

void checkEndEven(Node*& brode){
    if(!brode){
        return;
    }else{
        if(brode->next){
    if (brode->value % 2 == 0 && brode->next->value % 2 != 0){
        brode->next = brode->next->next;
    }
    }
    }
}

void split(Node*& in, Node*& odds, Node*& evens){
    
    if (!in){
        checkEndOdd(odds);
        checkEndEven(evens);
        return;
    }else{
    
    
    
    if (in->value % 2 == 0) {
        if (!evens){
            evens = in;
            split(in->next, odds, evens);
        }else{
            evens->next = in;
            

            split(in->next, odds, evens->next);
        }
    }else if (in->value % 2 != 0){
        if (!odds){
            odds = in;
            split(in->next, odds, evens);
        }else{
            odds->next = in;
            

            split(in->next, odds->next, evens);
        }
    }
}

}

  /* Add code here */
// WRITE YOUR CODE HERE



/* If you needed a helper function, write it here */

// WRITE YOUR CODE HERE

