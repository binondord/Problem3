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

    void dynamic_add() {
        double new_size = ceil(capacity * 1.5);
        double* new_array = (double*)realloc(array, sizeof(double) * new_size);
        array = new_array;
        capacity = new_size;
    }

    void dynamic_deduce() {
        double new_size = ceil(capacity * 0.75);
        double* new_array = (double*)realloc(array, sizeof(int) * new_size);
        array = new_array;
        capacity = new_size;
    }

public:
    // constructor
    ArrayList() {
        // initialize array using malloc or calloc here
        array = (double*)calloc(capacity, sizeof(double));
        size = 0;
    }

    void add(double num) {
        // TODO implement add with dynamic array
        if (size == capacity) {
            dynamic_add();
        }
        array[size++] = num;
    }

    int remove(double num) {
        // TODO implement remove with dynamic array

        return -1;
    }

    double get(int pos) {
        // TODO implement get
        return array[pos -1];
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