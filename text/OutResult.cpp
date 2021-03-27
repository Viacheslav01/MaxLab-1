#include"Types.h"
#include <iostream>
#include <fstream>
using namespace std;
S str;
T t;
void OutResult(ofstream& f2, int& q1, int& q2, int& q3, int& zxc1, int& zxc2, int& zxc3, char Mass_1_tochki[100], char Mass_1_vopros[100], char Mass_1_vosclik[100], int Nomer_tochki[100], int Nomer_vopros[100], int Nomer_vosclik[100], int Mass_sum_tochki[300], int Mass_sum_vopros[300], int Mass_sum_vosclik[300], char Mass_2_tochki[100][200], char Mass_2_vopros[100][200], char Mass_2_vosclik[100][200]) {
    if (q1 > 3) {
        cout << "\n";
        f2 << "\n";
        for (int m = 0; m < q1; m++) {
            cout << Mass_1_tochki[m];
            f2 << Mass_1_tochki[m];
        }
        cout << ".";
        cout << "\n";
        f2 << ".";
        f2 << "\n";
        for (int m1 = 0; m1 < zxc1; m1++) {
            cout << Nomer_tochki[m1 + 1] << ")"; f2 << Nomer_tochki[m1 + 1] << ")";
            for (int m2 = 0; m2 < Mass_sum_tochki[m1]; m2++) {
                cout << Mass_2_tochki[m1][m2]; f2 << Mass_2_tochki[m1][m2];
            }
            cout << "\n"; f2 << "\n";
        }
    }
    if (q1 == 3) {
        cout << "\n"; f2 << "\n";
        for (int m1 = 0; m1 < zxc1; m1++) {
            cout << Nomer_tochki[m1] << ")"; f2 << Nomer_tochki[m1] << ")";
            for (int m2 = 0; m2 < Mass_sum_tochki[m1]; m2++) {
                cout << Mass_2_tochki[m1][m2]; f2 << Mass_2_tochki[m1][m2];
            }
            cout << "\n"; f2 << "\n";
        }
    }
    if (q2 > 3) {
        cout << "\n"; f2 << "\n";
        for (int m = 0; m < q2; m++) {
            cout << Mass_1_vopros[m]; f2 << Mass_1_vopros[m];
        }
        cout << "?"; f2 << "?";
        cout << "\n"; f2 << "\n";
        for (int m1 = 0; m1 < zxc2; m1++) {
            cout << Nomer_vopros[m1 + 1] << ")";  f2 << Nomer_vopros[m1 + 1] << ")";
            for (int m2 = 0; m2 < Mass_sum_vopros[m1]; m2++) {
                cout << Mass_2_vopros[m1][m2]; f2 << Mass_2_vopros[m1][m2];
            }
            cout << "\n"; f2 << "\n";
        }
    }
    if (q2 == 3) {
        cout << "\n"; f2 << "\n";
        for (int m1 = 0; m1 < zxc2; m1++) {
            cout << Nomer_vopros[m1] << ")"; f2 << Nomer_vopros[m1] << ")";
            for (int m2 = 0; m2 < Mass_sum_vopros[m1]; m2++) {
                cout << Mass_2_vopros[m1][m2]; f2 << Mass_2_vopros[m1][m2];
            }
            cout << "\n"; f2 << "\n";
        }
    }
    if (q3 > 3) {
        cout << "\n";  f2 << "\n";
        for (int m = 0; m < q3; m++) {
            cout << Mass_1_vosclik[m]; f2 << Mass_1_vosclik[m];
        }
        cout << "!"; f2 << "!";
        cout << "\n"; f2 << "\n";
        for (int m1 = 0; m1 < zxc3; m1++) {
            cout << Nomer_vosclik[m1 + 1] << ")"; f2 << Nomer_vosclik[m1 + 1] << ")";
            for (int m2 = 0; m2 < Mass_sum_vosclik[m1]; m2++) {
                cout << Mass_2_vosclik[m1][m2]; f2 << Mass_2_vosclik[m1][m2];
            }
            cout << "\n"; f2 << "\n";
        }
    }
    if (q3 == 3) {
        cout << "\n";  f2 << "\n";
        for (int m1 = 0; m1 < zxc3; m1++) {
            cout << Nomer_vosclik[m1] << ")"; f2 << Nomer_vosclik[m1] << ")";
            for (int m2 = 0; m2 < Mass_sum_vosclik[m1]; m2++) {
                cout << Mass_2_vosclik[m1][m2]; f2 << Mass_2_vosclik[m1][m2];
            }
            cout << "\n"; f2 << "\n";
        }
    }
}
