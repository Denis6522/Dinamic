// Dinamic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include "Header.h"
#include <iostream>

using namespace std;


int main() {

    setlocale(LC_ALL, "Russian");

    Node* set = F1(); // Создание пустого множества
    cout << "Пустое множество? " << (F2(set) ? "Да" : "Нет") << endl;

    set = F5(6, 1, 10); // Создание множества
    cout << "Мощность множества: " << F6(set) << endl;

    cout << "Элементы множества: ";
    F7(set, ',');
    
    int valueToAdd = 42;
    set = F4(set, valueToAdd); // Добавление нового элемента в множество
    cout << "Добавлен элемент " << valueToAdd << endl;

    cout << "Элементы множества с добавлением: ";
    F7(set, ',');

    int elementToCheck = 8;
    cout << "Принадлежит ли " << elementToCheck << " множеству? " << (F3(set, elementToCheck) ? "Да" : "Нет") << endl;

    set = F8(set); // Удаление множества

    return 0;
}