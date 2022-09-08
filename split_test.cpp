#include "split.h"
#include "split.cpp"
#include <iostream>
using namespace std;

int main(){
      Node* odds = NULL;
  Node* evens = NULL;
  
  Node* in = NULL;
  
  Node* superevens = NULL;
  Node* superodds = NULL;
  
    int keys[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(keys)/sizeof(keys[0]);
    for (int i = n - 1; i >=0; i--) {
        push(&in, keys[i]);
    }
    cout << "in:";
    printList(in);
    
    split(in, odds, evens);
    
    cout << "odds:";
    printList(odds);
    cout << "evens:";
    printList(evens);

    return 0;
}