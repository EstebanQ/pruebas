/* 
 * File:   main.cpp
 * Author: alan.calderon
 *
 * Created on 5 de agosto de 2015, 05:35 PM
 */

#include <iostream>
using namespace std;

#include "CnjOrdInt.h"
/*
 * 
 */
int main(int argc, char** argv) {
    CnjOrdInt a,b; // a = { 1, 2, 3 } y b = { 10, 11, 13}
    a.insertarOrd(1);
    a.insertarOrd(2);
    a.insertarOrd(3);
    cout << a.aHil() << endl;
    b.insertarOrd(10);
    b.insertarOrd(11);
    b.insertarOrd(13);
    cout << b.aHil() << endl;
    // CnjOrdInt c = a + b; // une a con b igual a { 1, 2, 3, 10, 11, 13 }
    // CnjOrdInt d = a / b; // construye la diferencia simétrica entre a y b.
    // c.insertarOrd(5);
    return 0;
}

