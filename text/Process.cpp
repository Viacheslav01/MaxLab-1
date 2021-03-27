#include"Types.h"
#include <iostream>
#include <fstream>
using namespace std;

void Process(T& t, S& str, int A[a], int& sum1, int& sum2, int& sum3, int& point1, int& point2, int& point3, int& b1, int& b2, int& b3, int& c1, int& c2, int& c3, int& q1, int& q2, int& q3, int& zxc1, int& zxc2, int& zxc3, int Mass_sum_vosclik[300], int Mass_sum_vopros[300], int Mass_sum_tochki[300], char Mass_2_vosclik[100][200], char Mass_2_tochki[100][200], char Mass_2_vopros[100][200], char Mass_1_tochki[100], char Mass_1_vosclik[100], char Mass_1_vopros[100], int& count, int Nomer_znakov[100], int Nomer_vtexte_x[100], int Nomer_vtexte_y[100], int& nomer_znakov, int& znaki_tochki, int& znaki_vopros, int& znaki_vosclik, int Nomer_tochki[100], int Nomer_tochki_x[100], int Nomer_tochki_y[100], int Nomer_vosclik[100], int Nomer_vosclik_x[100], int Nomer_vosclik_y[100], int Nomer_vopros[100], int Nomer_vopros_y[100], int Nomer_vopros_x[100]) {
    for (int i = 0; i < count; i++) {
        if ((i == 0) && (Nomer_znakov[0] == Nomer_tochki[b1])) {//обработка первой строки
            int k = 0; int z = 0;
            Mass_1_tochki[0] = '1';
            Mass_1_tochki[1] = ')';
            Mass_1_tochki[2] = ' ';
            while (t.pT[k].str[z] != '.') {
                if (z == A[k]) {
                    k++; z = 0;
                }
                Mass_1_tochki[q1] = t.pT[k].str[z];
                q1++;
                z++;
            }
            b1++;
        }
        if ((i == 0) && (Nomer_znakov[0] == Nomer_vosclik[b3])) {//обработка первой строки
            int k = 0; int z = 0;
            Mass_1_vosclik[0] = '1';
            Mass_1_vosclik[1] = ')';
            Mass_1_vosclik[2] = ' ';
            while (t.pT[k].str[z] != '!') {
                if (z == A[k]) {
                    k++; z = 0;
                }
                Mass_1_vosclik[q3] = t.pT[k].str[z];
                q3++;
                z++;
            }
            b3++;
        }
        if ((i == 0) && (Nomer_znakov[0] == Nomer_vopros[b2])) {//обработка первой строки
            int k = 0; int z = 0;
            Mass_1_vopros[0] = '1';
            Mass_1_vopros[1] = ')';
            Mass_1_vopros[2] = ' ';
            while (t.pT[k].str[z] != '?') {
                if (z == A[k]) {
                    k++; z = 0;
                }
                Mass_1_vopros[q2] = t.pT[k].str[z];
                q2++;
                z++;
            }
            b2++;
        }
        if ((Nomer_znakov[i + 1] == Nomer_tochki[b1]) && (i < count - 1)) {//обработка от второй строки
            c1 = Nomer_tochki_x[b1] - Nomer_vtexte_x[i] - 1; // смотрим на каких строках границы предложений
            if (c1 < 0) {
                sum1 = Nomer_tochki_y[b1] - Nomer_vtexte_y[i]; // если на одной строке начало и конец
            }
            else
                sum1 = Nomer_tochki_y[b1] + (A[Nomer_vtexte_x[i]] - Nomer_vtexte_y[i]);
            if (c1 >= 1) { // если на разных строках, плюсуем количество символом меджу ними
                for (int p = 1; p <= c1; p++) {
                    sum1 += A[Nomer_vtexte_x[i] + p];
                }
            }
            int x, y = 0;
            y = Nomer_vtexte_y[i] + 1;
            x = Nomer_vtexte_x[i];
            Mass_sum_tochki[zxc1] = sum1;
            while (point1 < sum1) {  // идем по количеству симолволов                 
                if (t.pT[x].str[y] == str.Mark) { // до маркера очередной строки
                    x++; y = 0;          // переход на след строку             
                }
                if (t.pT[x].str[y] == '\n') {
                    t.pT[x].str[y] = ' ';
                }
                Mass_2_tochki[zxc1][point1] = t.pT[x].str[y];
                y++;
                point1++;
            }
            zxc1++;
            sum1 = 0;
            point1 = 0;
            b1++;
        }
        if ((Nomer_znakov[i + 1] == Nomer_vopros[b2]) && (i < count - 1)) {//обработка от второй строки
            c2 = Nomer_vopros_x[b2] - Nomer_vtexte_x[i] - 1;
            if (c2 < 0) {
                sum2 = Nomer_vopros_y[b2] - Nomer_vtexte_y[i];
            }
            else
                sum2 = Nomer_vopros_y[b2] + (A[Nomer_vtexte_x[i]] - Nomer_vtexte_y[i]);
            if (c2 >= 1) {
                for (int p = 1; p <= c2; p++) {
                    sum2 += A[Nomer_vtexte_x[i] + p];
                }
            }
            int x, y = 0;
            y = Nomer_vtexte_y[i] + 1;
            x = Nomer_vtexte_x[i];
            Mass_sum_vopros[zxc2] = sum2;
            while (point2 < sum2) {
                if (t.pT[x].str[y] == str.Mark) {
                    x++; y = 0;
                }
                if (t.pT[x].str[y] == '\n') {
                    t.pT[x].str[y] = ' ';
                }
                Mass_2_vopros[zxc2][point2] = t.pT[x].str[y];
                y++;
                point2++;
            }
            zxc2++;
            sum2 = 0;
            point2 = 0;
            b2++;
        }
        if ((Nomer_znakov[i + 1] == Nomer_vosclik[b3]) && (i < count - 1)) {//обработка от второй строки
            c3 = Nomer_tochki_x[b3] - Nomer_vtexte_x[i] - 1;
            if (c3 < 0) {
                sum3 = Nomer_vosclik_y[b3] - Nomer_vtexte_y[i];
            }
            else
                sum3 = Nomer_vosclik_y[b3] + (A[Nomer_vtexte_x[i]] - Nomer_vtexte_y[i]);
            if (c3 >= 1) {
                for (int p = 1; p <= c3; p++) {
                    sum3 += A[Nomer_vtexte_x[i] + p];
                }
            }
            int x, y = 0;
            y = Nomer_vtexte_y[i] + 1;
            x = Nomer_vtexte_x[i];
            Mass_sum_vosclik[zxc3] = sum3;
            while (point3 < sum3) {
                if (t.pT[x].str[y] == str.Mark) {
                    x++; y = 0;
                }
                if (t.pT[x].str[y] == '\n') {
                    t.pT[x].str[y] = ' ';
                }
                Mass_2_vosclik[zxc3][point3] = t.pT[x].str[y];
                y++;
                point3++;
            }
            zxc3++;
            sum3 = 0;
            point3 = 0;
            b3++;
        }
    }
}
