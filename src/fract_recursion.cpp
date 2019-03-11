/*
 * CS 106B/X Sample Project
 * last updated: 2018/09/19 by Marty Stepp
 *
 * This project helps test that your Qt Creator system is installed correctly.
 * Compile and run this program to see a console and a graphical window.
 * If you see these windows, your Qt Creator is installed correctly.
 */

#include <iostream>
#include "console.h"
#include "ginteractors.h" // for GWindow
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
using namespace std;

void cantorSet(GWindow& window, int x, int y, int length, int levels);

int main() {
    cout << "Hellow World!" << endl;
    GWindow window(800, 600);
    window.setWindowTitle("CS 106B/ x fractals");
    window.setColor("black");

    cantorSet(window, 50, 50, 700, 1);
    return 0;
}

void cantorSet(GWindow& window, int x, int y, int length, int levels){
    if(levels == 1){
        // base case
        window.drawLine(x,y, x+length, y);
    }
}
