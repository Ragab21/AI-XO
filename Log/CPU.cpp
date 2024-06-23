#include "CPU.h"


int easyCPU(GameBoard& board){
    int x = rand() % 9;
    while (board.getCellValue(x / 3, x % 3) != "0") { // to ensure non-repeating
        x = rand() % 9;
    }
    return x;
}
