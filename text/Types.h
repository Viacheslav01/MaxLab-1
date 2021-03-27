#ifndef Types_h
#define Types_h

#pragma once

const int MaxLen = 20;
const int a = 50;

struct S {
    char* str; // указатель на очередную строку
    int dl; // длина очередной строки
    char Mark = '*';
};

struct T {
    S* pT; // указатель на динамический массив указателей
    int Len; // количество строк
};

#endif Types_h// !Types_h

