#include "Patterns.h"
#include <iostream>

using namespace std;

void Patterns::printDiamond(int n) {
    diamondTop(n);
    diamondBottom(n - 1);
}

void Patterns::diamondTop(int n) {
    for (int i = 0; i < n; i++) {
        int space = n - i - 1;
        int stars = (i * 2) + 1;

        for (int j = 0; j < space; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << '*';
        for (int j = 0; j < space; j++) cout << " ";
        cout << '\n';
    }
}

void Patterns::diamondBottom(int n) {
    for (int i = n; i >= 0; i--) {
        int space = n - i;
        int stars = (i * 2) + 1;

        for (int j = 0; j < space; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << '*';
        for (int j = 0; j < space; j++) cout << " ";
        cout << '\n';
    }
}

void Patterns::distanceMatrix(int n) {
    const int size = 2 * n - 1;
    const int endNumber = size - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top    = i;
            int left   = j;
            int bottom = endNumber - i;
            int right  = endNumber - j;

            int value = min(min(top, bottom), min(left, right));
            value = n - value;
            cout << value << " ";
        }
        cout << "\n";
    }
}

