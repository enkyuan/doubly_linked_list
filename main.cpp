#include <iostream>
#include "doublyLinkedList.tpp"


using namespace std;

int main() {

    int m, n, x;
    DoublyLinkedList <int> newDoublyLinkedList;

    cout << "How many values will the list contain? ";
    cin >> m;

    cout << "Should the list be built backwards (1) or forwards (2)? ";
    cin >> n;

    /*
     * cout << "Is the integer value meant to be added to the head or tail of the list?" << endl;
     * cout << "1. Head" << endl;
     * cout << "2. Tail" << endl;
     * cin >> userSelection;
     */

    for (int i = 0; i < m; i++) {
        cout << "Enter a value: ";
        cin >> x;

        if (n == 1) {
            newDoublyLinkedList.insertFirst(x);
        } else {
            newDoublyLinkedList.insertLast(x);
        }

        cout << endl;

        /*
         * SinglyLinkedList<int>::node newNode;
         * newSinglyLinkedList.display();
         */

        // cout << endl << endl;
    }

    // newSinglyLinkedList.traverse();

    cout << "Forward traversal of list: " << endl;
    newDoublyLinkedList.traverseForward();

    cout << endl;

    cout << "Backward traversal of list: " << endl;
    newDoublyLinkedList.traverseBackward();

    cout << endl;

    cout << "The list contains: " << endl;
    newDoublyLinkedList.displayList<int>();

    return 0;
}
