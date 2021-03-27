#include"Types.h"
#include <iostream>
#include <fstream>
using namespace std;
S str;
T t;
void FirstSearch(ofstream& f2, int& itog, int& count, int Nomer_znakov[100], int Nomer_vtexte_x[100], int Nomer_vtexte_y[100], int& nomer_znakov, int& znaki_tochki, int& znaki_vopros, int& znaki_vosclik, int Nomer_tochki[100], int Nomer_tochki_x[100], int Nomer_tochki_y[100], int Nomer_vosclik[100], int Nomer_vosclik_x[100], int Nomer_vosclik_y[100], int Nomer_vopros[100], int Nomer_vopros_y[100], int Nomer_vopros_x[100]) {
    for (int i = 0; i < t.Len; i++) {
        int j = 0;
        while (t.pT[i].str[j] != str.Mark) { // идем до очередного маркера в строке
            cout << t.pT[i].str[j];
            f2 << t.pT[i].str[j];
            itog++;// выводим по элементно
            if ((t.pT[i].str[j] == '.') // ищем все координаты нужных знаков
                || (t.pT[i].str[j] == '!')
                || (t.pT[i].str[j] == '?')) {
                count++;
                Nomer_znakov[nomer_znakov] = count;
                Nomer_vtexte_x[nomer_znakov] = i;
                Nomer_vtexte_y[nomer_znakov] = j;
                nomer_znakov++;
                if (t.pT[i].str[j] == '.') { // для точки
                    Nomer_tochki[znaki_tochki] = count;
                    Nomer_tochki_x[znaki_tochki] = i;
                    Nomer_tochki_y[znaki_tochki] = j;
                    znaki_tochki++;

                }
                if (t.pT[i].str[j] == '!') { // для восклицания
                    Nomer_vosclik[znaki_vosclik] = count;
                    Nomer_vosclik_x[znaki_vosclik] = i;
                    Nomer_vosclik_y[znaki_vosclik] = j;
                    znaki_vosclik++;

                }
                if (t.pT[i].str[j] == '?') { // для вопроса
                    Nomer_vopros[znaki_vopros] = count;
                    Nomer_vopros_x[znaki_vopros] = i;
                    Nomer_vopros_y[znaki_vopros] = j;
                    znaki_vopros++;

                }
            }
            j++;
        }

    }
}
