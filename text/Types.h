#ifndef Types_h
#define Types_h

#pragma once

const int MaxLen = 20;
const int a = 50;

struct S {
    char* str; // ��������� �� ��������� ������
    int dl; // ����� ��������� ������
    char Mark = '*';
};

struct T {
    S* pT; // ��������� �� ������������ ������ ����������
    int Len; // ���������� �����
};

#endif Types_h// !Types_h

