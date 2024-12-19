#include <iostream>
#include <unordered_set>

using namespace std;

struct Node {
    unsigned int value;
    Node* next = nullptr;
};

class LinkedList {
    Node* head = nullptr;

public:
    ~LinkedList();
    void add(unsigned int value);
    void print() const;
    void sort();
    bool hasDuplicates() const;
    void deleteEven();
    void doubleOdd();
    bool isEmpty() const { return head == nullptr; }
};

int main() {
    LinkedList list;
    unsigned int n;
    cin >> n;

    for (unsigned int i = 0; i < n; i++) {
        unsigned int value;
        cin >> value;
        list.add(value);
    }

    if (list.hasDuplicates()) {
        list.sort();
    } else {
        list.deleteEven();
        list.doubleOdd();
    }

    list.print();
    return 0;
}

LinkedList::~LinkedList() {
    while (!isEmpty()) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::add(unsigned int value) {
    Node* newNode = new Node{value, nullptr};
    if (isEmpty()) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList::print() const {
    for (Node* current = head; current != nullptr; current = current->next) 
    {
        cout << current->value << " ";
    }
    cout << endl;
}

bool LinkedList::hasDuplicates() const {
    unordered_set<unsigned int> seen;
    for (Node* current = head; current != nullptr; current = current->next) {
        if (seen.find(current->value) != seen.end()) {
            return true;
        }
        seen.insert(current->value);
    }
    return false;
}

void LinkedList::sort() {
    if (isEmpty()) return;

    for (Node* i = head; i != nullptr; i = i->next) {
        for (Node* j = i->next; j != nullptr; j = j->next) {
            if (i->value > j->value) {
                swap(i->value, j->value);
            }
        }
    }
}

void LinkedList::deleteEven() {
    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr) {
        if (current->value % 2 == 0) {
            if (prev == nullptr) {
                head = current->next;
                delete current;
                current = head;
            } else {
                prev->next = current->next;
                delete current;
                current = prev->next;
            }
        } else {
            prev = current;
            current = current->next;
        }
    }
}

void LinkedList::doubleOdd() {
    Node* current = head;
    while (current != nullptr) {
        if (current->value % 2 != 0) {
            Node* newNode = new Node{current->value, current->next};
            current->next = newNode;
            current = newNode->next; // Move to the next original node
        } else {
            current = current->next;
        }
    }
}