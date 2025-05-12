#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {

    Node* head = new Node{10, nullptr, nullptr};
    head->next = new Node{20, head, nullptr};
    head->next->next = new Node{30, head->next, nullptr};
    head->next->next->next = new Node{40, head->next->next, nullptr};


    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
