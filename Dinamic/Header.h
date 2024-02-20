#pragma once

struct Node {
    int data;
    Node* next;
};

// Функции
Node* F1(); // Создание пустого множества
bool F2(Node* set); // Пустое множество?
bool F3(Node* set, int value); // Проверка принадлежности элемента множеству
Node* F4(Node* set, int value); // Добавление нового элемента в множество
Node* F5(int count, int min, int max); // Создание множества
int F6(Node* set); // Мощность множества
void F7(Node* set, char delimiter); // Вывод элементов множества
Node* F8(Node* set); // Удаление множества