﻿#include <iostream>
using namespace std;

//ЗАВДАННЯ 1
//int main()
//{
//    system("chcp 1251>null");
//
//    const int size = 10;
//    int ar1[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int ar2[size];
//
//    int* ptr1 = ar1;
//    int* ptr2 = ar2;
//
//    for (int i = 0; i < size; i++) {
//        *(ptr2 + i) = *(ptr1 + i);
//    }
//
//    cout << "Перший масив: ";
//    for (int i = 0; i < size; i++) {
//        cout << *(ptr1 + i) << " ";
//    }
//
//    cout << endl << "Другий масив, в який ми скопіювали елементи з першого: ";
//    for (int i = 0; i < size; i++) {
//        cout << *(ptr2 + i) << " ";
//    }
//}


//ЗАВДАННЯ 2
//int main()
//{
//    system("chcp 1251>null");
//
//    const int size = 10;
//    int ar[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//    cout << "Початковий масив: ";
//    for (int i = 0; i < size; i++) {
//        cout << *(ar + i) << " ";
//    }
//
//    int* ptrPochatok = ar;
//    int* ptrKinezh = ar + size - 1;
//
//    while (ptrPochatok < ptrKinezh) {
//        int n = *ptrPochatok;
//        *ptrPochatok = *ptrKinezh;
//        *ptrKinezh = n;
//
//        ptrPochatok++;
//        ptrKinezh--;
//    }
//
//    cout << endl << "Масив в зворотньому порядку: ";
//    for (int i = 0; i < size; i++) {
//        cout << *(ar + i) << " ";
//    }
//}



//ЗАВДАННЯ 3
//int main()
//{
//    system("chcp 1251>null");
//
//    const int size = 10;
//    int ar1[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int ar2[size];
//
//    cout << "Перший масив: ";
//    for (int i = 0; i < size; i++) {
//        cout << *(ar1 + i) << " ";
//    }
//
//    int* ptrPochatok1 = ar1;
//    int* ptrKinezh1 = ar1 + size - 1;
//
//    while (ptrPochatok1 < ptrKinezh1) {
//        int n = *ptrPochatok1;
//        *ptrPochatok1 = *ptrKinezh1;
//        *ptrKinezh1 = n;
//
//        ptrPochatok1++;
//        ptrKinezh1--;
//    }
//
//    int* ptr1 = ar1;
//    int* ptr2 = ar2;
//
//    for (int i = 0; i < size; i++) {
//        *(ptr2 + i) = *(ptr1 + i);
//    }
//
//    cout << endl << "Другий масив, в який ми скопіювали елементи з першого в зворотньому порядку: ";
//    for (int i = 0; i < size; i++) {
//        cout << *(ptr2 + i) << " ";
//    }
//}
