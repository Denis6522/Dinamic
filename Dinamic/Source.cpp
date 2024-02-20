#include "Header.h"
#include <iostream>
#include <ctime>

using namespace std;

Node* F1() {//Создание пустого множества
    return nullptr;
}

bool F2(Node* set) {//Пустое множество? 
    return set == nullptr;
}

bool F3(Node* set, int value) {//Проверка принадлежности элемента множеству.
    while (set != nullptr) {
        if (set->data == value) {
            return true;
        }
        set = set->next;
    }
    return false;
}

Node* F4(Node* set, int value) {//Добавление нового элемента в множество. 
    if (!F3(set, value)) {
        Node* newNode = new Node{ value, set };
        return newNode;
    }
    return set;
}

Node* F5(int count, int min, int max) {//Создание множества.
    Node* set = F1();
    srand(time(0));

    for (int i = 0; i < count; ++i) {
        int value = rand() % (max - min + 1) + min;
        set = F4(set, value);
    }

    return set;
}

int F6(Node* set) {//F6. Мощность множества. 
    int count = 0;
    while (set != nullptr) {
        count++;
        set = set->next;
    }
    return count;
}

void F7(Node* set, char delimiter) {//Вывод элементов множества. 
    while (set != nullptr) {
        cout << set->data;
        set = set->next;
        if (set != nullptr) {
            cout << delimiter;
        }
    }
    cout << std::endl;
}

Node* F8(Node* set) {//Удаление множества (очистка памяти, занимаемой списком)
    while (set != nullptr) {
        Node* temp = set;
        set = set->next;
        delete temp;
    }
    return nullptr;
}