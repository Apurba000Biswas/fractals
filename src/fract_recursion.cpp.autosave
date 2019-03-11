
#include <iostream>
#include "console.h"
#include "ginteractors.h" // for GWindow
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
using namespace std;

void cantorSet(GWindow& window, int x, int y, int length, int levels);

int main() {
    GWindow window(800, 600);
    window.setWindowTitle("CS 106B/ x fractals");
    window.setColor("black");

    cantorSet(window, 50, 50, 700, 8);
    return 0;
}


/* We need to draw line in the following patterns
 *  --------------------------------
 *  ----------            ----------
 *  ---    ---            ---    ---
 *  - -    - -            - -    - -
 */
void cantorSet(GWindow& window, int x, int y, int length, int levels){
    if(levels > 0){
        window.drawLine(x, y, x+length, y); // big level line
        window.drawLine(x, y+1, x+length, y+1); // big level line
        window.drawLine(x, y+2, x+length, y+2); // big level line

        pause(60);

        cantorSet(window, x,            y + 20, length/3, levels-1); // left line
        cantorSet(window, x+2*length/3, y + 20, length/3, levels-1); // right line
    }
}
