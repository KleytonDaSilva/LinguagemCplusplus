//
// Created by nksaddam on 13/09/23.
//
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

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

        // Implemente aqui as funções necessárias para manipular a lista

        void insertAtEnd(T value) {
            Node<T>* newNode = new Node<T>(value);
            if (isEmpty()) {
                first = newNode;
                last = newNode;
            } else {
                newNode->prev = last;
                last->next = newNode;
                last = newNode;
            }
            size++;
        }

        bool isEmpty() {
            return size == 0;
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

        void remove(T value) {
            Node<T>* current = first;
            while (current != nullptr) {
                if (current->data == value) {
                    if (current == first) {
                        if (current->next) {
                            current->next->prev = nullptr;
                        }
                        first = current->next;
                    } else if (current == last) {
                        if (current->prev) {
                            current->prev->next = nullptr;
                        }
                        last = current->prev;
                    } else {
                        current->prev->next = current->next;
                        current->next->prev = current->prev;
                    }
                    delete current;
                    size--;
                    return;
                }
                current = current->next;
            }
        }

        void display() {
            Node<T>* current = first;
            while (current != nullptr) {
                std::cout << current->data << " ";
                current = current->next;
            }
            std::cout << std::endl;
        }
    };

    int main() {
        ifstream inputFile("ENTRADA.txt");

        if (!inputFile) {
            std::cerr << "Erro ao abrir o arquivo de entrada." <<endl;
            return 1;
        }

        DoublyLinkedList<string> voos;

        string line;
        while (getline(inputFile, line)) {
            voos.insertAtEnd(line);
        }

        inputFile.close();

        char escolha;
        while (true) {
            cout << "Deseja marcar (+) ou desmarcar (-) uma passagem? (M/D/S para sair): ";
            cin >> escolha;

            if (escolha == 'S' || escolha == 's') {
                break;
            }

            if (escolha == '+' || escolha == '-') {
                string nome, origem, destino;
                cout << "Nome do cliente: ";
                cin.ignore(); // Limpar o buffer do teclado
                getline(std::cin, nome);
                cout << "Origem: ";
                getline(std::cin, origem);
                cout << "Destino: ";
                getline(std::cin, destino);

                std::string reserva = escolha + nome + " " + origem + " " + destino;
                if (voos.contains(reserva)) {
                    voos.remove(reserva);
                    cout << "Passagem " << escolha << " marcada para " << nome << std::endl;
                } else {
                   cout << "Voo não encontrado ou passagem já marcada/desmarcada." << std::endl;
                }
            }
        }

        cout << "Lista de voos disponíveis:" << std::endl;
        voos.display();

        return 0;
    }

