#include "Header.h"
#include <iostream>
#include <ctime>

using namespace std;

Node* F1() {//�������� ������� ���������
    return nullptr;
}

bool F2(Node* set) {//������ ���������? 
    return set == nullptr;
}

bool F3(Node* set, int value) {//�������� �������������� �������� ���������.
    while (set != nullptr) {
        if (set->data == value) {
            return true;
        }
        set = set->next;
    }
    return false;
}

Node* F4(Node* set, int value) {//���������� ������ �������� � ���������. 
    if (!F3(set, value)) {
        Node* newNode = new Node{ value, set };
        return newNode;
    }
    return set;
}

Node* F5(int count, int min, int max) {//�������� ���������.
    Node* set = F1();
    srand(time(0));

    for (int i = 0; i < count; ++i) {
        int value = rand() % (max - min + 1) + min;
        set = F4(set, value);
    }

    return set;
}

int F6(Node* set) {//F6. �������� ���������. 
    int count = 0;
    while (set != nullptr) {
        count++;
        set = set->next;
    }
    return count;
}

void F7(Node* set, char delimiter) {//����� ��������� ���������. 
    while (set != nullptr) {
        cout << set->data;
        set = set->next;
        if (set != nullptr) {
            cout << delimiter;
        }
    }
    cout << std::endl;
}

Node* F8(Node* set) {//�������� ��������� (������� ������, ���������� �������)
    while (set != nullptr) {
        Node* temp = set;
        set = set->next;
        delete temp;
    }
    return nullptr;
}