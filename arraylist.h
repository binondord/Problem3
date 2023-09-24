#pragma once
#include <iostream>
#include <cstdlib>
#include <math.h>
#include "list.h"
using namespace std;

class ArrayList : public List {
    double* array;
    int size;
    int capacity = 5;

public:
    // constructor
    ArrayList() {
        // initialize array using malloc or calloc here
        size = 0;
    }

    void add(double num) {
        // TODO implement add with dynamic array
    }

    int remove(double num) {
        // TODO implement remove with dynamic array
    }

    double get(int pos) {
        // TODO implement get
    }

    void print() {
        int i;
        for (i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        for (; i < capacity; i++) {
            cout << "? ";
        }
        cout << endl;
    }
};