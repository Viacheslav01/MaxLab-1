#include"Types.h"
#include <iostream>
#include <fstream>
using namespace std;

void InText(T& t, S& str, ifstream& f1, ofstream& f2, int A[a]) {
    cout << "\n";
    f2 << "\n";
    t.pT = new S[t.Len];// создали двумерный массив.
    for (int v = 0; v < t.Len; v++) {
        t.pT[v].str = new char[A[v] + 1];// заполнили каждую ячейку новым массивом.
        t.pT[v].str[A[v]] = str.Mark;
    }

    char s;
    for (int i = 0; i < t.Len; i++) {
        int j = 0;
        while (t.pT[i].str[j] != str.Mark) {
            f1 >> s;
            t.pT[i].str[j] = s;// заполняем по элементно каждую строку.
            j++;
        }
    }
}