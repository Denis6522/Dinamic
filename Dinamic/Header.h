#pragma once

struct Node {
    int data;
    Node* next;
};

// �������
Node* F1(); // �������� ������� ���������
bool F2(Node* set); // ������ ���������?
bool F3(Node* set, int value); // �������� �������������� �������� ���������
Node* F4(Node* set, int value); // ���������� ������ �������� � ���������
Node* F5(int count, int min, int max); // �������� ���������
int F6(Node* set); // �������� ���������
void F7(Node* set, char delimiter); // ����� ��������� ���������
Node* F8(Node* set); // �������� ���������