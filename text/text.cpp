// text.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "Types.h"
#include "def.h"

using namespace std;

int main()
{
    S str;
    T t;

    int A[a];
    ifstream f1;
    ofstream f2;
    setlocale(LC_ALL, "russian");
    char name_in1[MaxLen], name_out[MaxLen];
    cout << "Введите имя файла с исходным текстом:";
    cin >> name_in1;
    f1.open(name_in1);
    cout << "Результаты будут выведены в файл.\n";
    cout << "Введите имя файла для вывода результатов:\n";
    cin >> name_out;
    f2.open(name_out);
    if (f1.bad() || f2.bad()) { cout << "Ошибка, один из этих файлов не найден!"; f2 << "Ошибка, один из файлов не найден!"; return -1; }
    else {

        f1.unsetf(ios::skipws);
        char s;// символьная переменная
        str.dl = 0; // кол-во элементов в очередной строке
        t.Len = 0; // кол-во строк
        while(!f1.eof()) {
            
            f1 >> s;          
            if (f1.eof()) {
                A[t.Len] = str.dl;
                str.dl = 0;
                t.Len++;// считаем количество строк в тексте
            }  
            if(s=='\n') {
                A[t.Len] = str.dl;//заполняем массив значения каждой строки
                str.dl = 0;
                t.Len++;// считаем количество строк в тексте
            }
            str.dl++;
        }
       
        f1.close();
        f1.open(name_in1);
        f1.unsetf(ios::skipws);
        
        cout << "\n\n";
        cout << "Количество строк: " << t.Len << "\n";
        cout << "Количество символов в каждой строке: \n";
        f2 << "\n\n";
        f2 << "Количество строк: " << t.Len << "\n";
        f2 << "Количество символов в каждой строке: \n";
        for (int j = 0; j < t.Len; j++) {
            cout << A[j] << "\n";
            f2 << A[j] << "\n";// массивчик количества элементов под каждую строку.
        }
    }
    InText(t, str, f1, f2, A);
    int Nomer_znakov[100];
    int Nomer_vtexte_x[100];
    int Nomer_vtexte_y[100];
    int Nomer_tochki[100];
    int Nomer_tochki_x[100];
    int Nomer_tochki_y[100];
    int Nomer_vopros[100];
    int Nomer_vopros_x[100];
    int Nomer_vopros_y[100];
    int Nomer_vosclik[100];
    int Nomer_vosclik_x[100];
    int Nomer_vosclik_y[100];
    int nomer_znakov = 0;
    int znaki_tochki = 0;
    int znaki_vopros = 0;
    int znaki_vosclik = 0;
    int count = 0;
    int itog = 0;  
    cout << "Input:\n\n";
    f2 << "Input:\n\n";

    FirstSearch(t, str, f2, itog, count, Nomer_znakov, Nomer_vtexte_x, Nomer_vtexte_y, nomer_znakov, znaki_tochki, znaki_vopros, znaki_vosclik, Nomer_tochki, Nomer_tochki_x, Nomer_tochki_y, Nomer_vosclik, Nomer_vosclik_x, Nomer_vosclik_y, Nomer_vopros, Nomer_vopros_y, Nomer_vopros_x);
    
    cout << "\n\nКоличество всех символов в тексте: " << itog << "\n";
    cout << "Количество всех завершающих знаков в тексте: " << count << "\n";
    cout << "Их позиция среди других завершающих знаков и позиция в строке: \n";
    f2 << "\n\nКоличество всех символов в тексте: " << itog << "\n";
    f2 << "Количество всех завершающих знаков в тексте: " << count << "\n";
    f2 << "Их позиция среди других завершающих знаков и позиция в строке: \n";
    for (int i = 0; i < count; i++) {
        cout << Nomer_znakov[i] << " \t" << Nomer_vtexte_x[i] + 1 << " " << Nomer_vtexte_y[i] + 1 << "\n";
        f2 << Nomer_znakov[i] << " \t" << Nomer_vtexte_x[i] + 1 << " " << Nomer_vtexte_y[i] + 1 << "\n";
    }
    cout << "Количество предложений с точкой в тексте: " << znaki_tochki << "\n";
    cout << "Их позиция среди других завершающих знаков и позиция в строке: \n";
    f2 << "Количество предложений с точкой в тексте: " << znaki_tochki << "\n";
    f2 << "Их позиция среди других завершающих знаков и позиция в строке: \n";
    for (int i = 0; i < znaki_tochki; i++) {
        cout << Nomer_tochki[i] << " \t" << Nomer_tochki_x[i] + 1 << " " << Nomer_tochki_y[i] + 1 << "\n";
        f2 << Nomer_tochki[i] << " \t" << Nomer_tochki_x[i] + 1 << " " << Nomer_tochki_y[i] + 1 << "\n";
    }
    cout << "\n";
    cout << "Количество предложений с вопросительным знаком в тексте: " << znaki_vopros << "\n";
    cout << "Их позиция среди других завершающих знаков и позиция в строке: \n";
    f2 << "\n";
    f2 << "Количество предложений с вопросительным знаком в тексте: " << znaki_vopros << "\n";
    f2 << "Их позиция среди других завершающих знаков и позиция в строке: \n";
    for (int i = 0; i < znaki_vopros; i++) {
        cout << Nomer_vopros[i] << " \t" << Nomer_vopros_x[i] + 1 << " " << Nomer_vopros_y[i] + 1 << "\n";
        f2 << Nomer_vopros[i] << " \t" << Nomer_vopros_x[i] + 1 << " " << Nomer_vopros_y[i] + 1 << "\n";
    }
    cout << "\n";
    cout << "Количество предложений с восклицательным знаком в тексте: " << znaki_vosclik << "\n";
    cout << "Их позиция среди других завершающих знаков и позиция в строке: \n";
    f2 << "\n";
    f2 << "Количество предложений с восклицательным знаком в тексте: " << znaki_vosclik << "\n";
    f2 << "Их позиция среди других завершающих знаков и позиция в строке: \n";
    for (int i = 0; i < znaki_vosclik; i++) {
        cout << Nomer_vosclik[i] << " \t" << Nomer_vosclik_x[i] + 1 << " " << Nomer_vosclik_y[i] + 1 << "\n";
        f2 << Nomer_vosclik[i] << " \t" << Nomer_vosclik_x[i] + 1 << " " << Nomer_vosclik_y[i] + 1 << "\n";
    }
    cout << "\n";
    f2 << "\n";
    int b1 = 0;
    int sum1= 0;
    int c1 = 0;
    int point1 = 0;
    int b2 = 0;
    int sum2 = 0;
    int c2 = 0;
    int point2 = 0;
    int b3 = 0;
    int sum3 = 0;
    int c3 = 0;
    int point3 = 0;
    char Mass_1_tochki[100];
    char Mass_1_vopros[100];
    char Mass_1_vosclik[100];
    char Mass_2_tochki[100][200];
    char Mass_2_vopros[100][200];
    char Mass_2_vosclik[100][200];
    int Mass_sum_tochki[300];
    int Mass_sum_vopros[300];
    int Mass_sum_vosclik[300];
    int zxc1 = 0;
    int q1 = 3;
    int zxc2 = 0;
    int q2 = 3;
    int zxc3 = 0;
    int q3 = 3;
    Process(t, str, A, sum1, sum2, sum3, point1, point2, point3, b1, b2, b3, c1, c2, c3, q1, q2, q3, zxc1, zxc2, zxc3, Mass_sum_vosclik, Mass_sum_vopros, Mass_sum_tochki, Mass_2_vosclik, Mass_2_tochki, Mass_2_vopros, Mass_1_tochki, Mass_1_vosclik, Mass_1_vopros, count, Nomer_znakov, Nomer_vtexte_x, Nomer_vtexte_y, nomer_znakov, znaki_tochki, znaki_vopros, znaki_vosclik, Nomer_tochki, Nomer_tochki_x, Nomer_tochki_y, Nomer_vosclik, Nomer_vosclik_x, Nomer_vosclik_y, Nomer_vopros, Nomer_vopros_y, Nomer_vopros_x);
    OutResult(t, str, f2, q1, q2, q3, zxc1, zxc2, zxc3, Mass_1_tochki, Mass_1_vopros, Mass_1_vosclik, Nomer_tochki, Nomer_vopros, Nomer_vosclik, Mass_sum_tochki, Mass_sum_vopros, Mass_sum_vosclik, Mass_2_tochki, Mass_2_vopros, Mass_2_vosclik);

    for (int index = 0; index < t.Len; index++) {
        //auto ptr = t.pT[index].str;
        //delete[] ptr;
        //delete[] t.pT[index].str;  // удаляем массив
    }
    f1.close();
    f2.close();
    system("pause");
    return 0;
}
