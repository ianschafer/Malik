/*
Program name: main.cpp
Version: 1.0
Author: Ian A Schafer
Date: 25-June-2018
Description: Test file for mergeLists function of class orderedLinkedList.h
*/

#include <windows.h>
#include "ConsoleOutro.h"
#include <iostream>
#include "orderedLinkedList_v2.h"

using namespace std;

int main()
{
    cout << "-----------------------------------------------" << endl;
    cout << "           Test Program - mergeLists" << endl;
    cout << "-----------------------------------------------" << endl;

    ConsoleOutro Outro;

    cout << endl;
    orderedLinkedList<int> newList;
    orderedLinkedList<int> list1;
    orderedLinkedList<int> list2;

    cout << "Populating list1 .. ";
    list1.insert(2);
    list1.insert(6);
    list1.insert(7);
    cout << endl;

    cout << "Printing list1 .. ";
    list1.print();
    cout << endl << endl;

    cout << "Populating list2 .. ";
    list2.insert(3);
    list2.insert(5);
    list2.insert(8);
    cout << endl;

    cout << "Printing list2 .. ";
    list2.print();
    cout << endl << endl;

    cout << "Merging list1 and list2 .. ";
    newList.mergeLists(list1, list2);
    cout << endl;
    cout << "Printing newList .. ";
    newList.print();
    cout << endl << endl;


    return 0;
}//End main
