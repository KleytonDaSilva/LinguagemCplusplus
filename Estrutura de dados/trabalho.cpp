//
// Created by nksaddam on 13/09/23.
//
#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* prev;
    Node* next;

    Node(T value) : data(value), prev(nullptr), next(nullptr) {}
};

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* first;
    Node<T>* last;
    int size;

public:
    DoublyLinkedList() : first(nullptr), last(nullptr), size(0) {}

    ~DoublyLinkedList() {
        while (!isEmpty()) {
            removeFirst();
        }
    }

    bool isEmpty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }

    bool contains(T value) {
        Node<T>* current = first;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    T getAt(int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds");
        }

        Node<T>* current;
        if (index < size / 2) {
            current = first;
            for (int i = 0; i < index; i++) {
                current = current->next;
            }
        } else {
            current = last;
            for (int i = size - 1; i > index; i--) {
                current = current->prev;
            }
        }

        return current->data;
    }

    void insertAt(T value, int index) {
        if (index < 0 || index > size) {
            throw std::out_of_range("Index out of bounds");
        }

        Node<T>* newNode = new Node<T>(value);
        if (isEmpty()) {
            first = newNode;
            last = newNode;
        } else if (index == 0) {
            newNode->next = first;
            first->prev = newNode;
            first = newNode;
        } else if (index == size) {
            newNode->prev = last;
            last->next = newNode;
            last = newNode;
        } else {
            Node<T>* current;
            if (index < size / 2) {
                current = first;
                for (int i = 0; i < index - 1; i++) {
                    current = current->next;
                }
            } else {
                current = last;
                for (int i = size - 1; i > index; i--) {
                    current = current->prev;
                }
            }
            newNode->prev = current;
            newNode->next = current->next;
            current->next->prev = newNode;
            current->next = newNode;
        }

        size++;
    }

    void remove(T value) {
        Node<T>* current = first;
        while (current != nullptr) {
            if (current->data == value) {
                if (current == first) {
                    removeFirst();
                } else if (current == last) {
                    removeLast();
                } else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                    delete current;
                    size--;
                }
                return;
            }
            current = current->next;
        }
    }

    void removeAt(int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds");
        }

        if (index == 0) {
            removeFirst();
        } else if (index == size - 1) {
            removeLast();
        } else {
            Node<T>* current;
            if (index < size / 2) {
                current = first;
                for (int i = 0; i < index; i++) {
                    current = current->next;
                }
            } else {
                current = last;
                for (int i = size - 1; i > index; i--) {
                    current = current->prev;
                }
            }
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
            size--;
        }
    }

    void removeFirst() {
        if (isEmpty()) {
            throw std::underflow_error("List is empty");
        }

        Node<T>* temp = first;
        first = first->next;
        if (first != nullptr) {
            first->prev = nullptr;
        } else {
            last = nullptr;
        }
        delete temp;
        size--;
    }

    void removeLast() {
        if (isEmpty()) {
            throw std::underflow_error("List is empty");
        }

        Node<T>* temp = last;
        last = last->prev;
        if (last != nullptr) {
            last->next = nullptr;
        } else {
            first = nullptr;
        }
        delete temp;
        size--;
    }

    void display() {
        Node<T>* current = first;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
    void destruirLista(DoublyLinkedList<T>& lista) {
        while (!lista.isEmpty()) {
            lista.removeFirst();
        }
}

int main() {
    DoublyLinkedList<int> myList;

    myList.insertAt(1, 0);
    myList.insertAt(2, 1);
    myList.insertAt(3, 2);

    myList.display(); // Deve imprimir: 1 2 3

    myList.remove(2);

    myList.display(); // Deve imprimir: 1 3


    destruirLista(myList);
    std::cout << "Size: " << myList.getSize() << std::endl; // Deve imprimir: Size: 2
    if (myList.isEmpty()) {
        cout << "A lista está vazia." << endl;
    } else {
        cout << "A lista não está vazia." << endl;
    }


    return 0;
}

