#include<iostream>
#include "list.h"
using namespace std;

int main() {


#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif

    List l;
    l.push_front(5);
    l.push_back(7);
    l.push_front(8);
    l.push_front(1);
    l.push_back(10);
    l.push_back(13);
    l.push_front(0);
    l.insert(2, 2);
    l.insert(3, 3);
    l.pop_front();
    l.pop_back();
    l.remove(3);


    Node *head = l.begin();
    while (head != NULL) {
        cout << head->getData() << "->";
        head = head->next;
    }

    cout << endl;

    cout << "Element is present at index: " << l.recursiveSearch(8) << endl;

    cout << "reversing linked list: " << endl;

    l.reverse();

    head = l.begin();
    while (head != NULL) {
        cout << head->getData() << "->";
        head = head->next;
    }

    cout << endl;


    return 0;
}