#include "gameboard.h"
#include "AI_minimax_beta.h"
#include "CPU.h"
#include <algorithm>
#include <limits.h>

GameBoard::GameBoard(QObject *parent) : QObject(parent), m_board(3, QVector<QString>(3, "0")), m_player1Symbol("X"), m_player2Symbol("O"), mode(1), moveNum(0), wincode(-1), player1name("You"), player2name("CPU")
{
    clear();
}

void GameBoard::setPlayer1Symbol(const QString &symbol){
    m_player1Symbol=symbol;
    if(m_player1Symbol=="X"){
        m_player2Symbol="O";
    }
    else if(m_player1Symbol=="x"){
        m_player2Symbol="o";
    }
    else if(m_player1Symbol=="O"){
        m_player2Symbol="X";
    }
    else if(m_player1Symbol=="o"){
        m_player2Symbol="x";
    }
}

void GameBoard::setPlayer2Symbol(const QString &symbol){
    m_player2Symbol=symbol;
    if(m_player2Symbol=="X"){
        m_player1Symbol="O";
    }
    else if(m_player2Symbol=="x"){
        m_player1Symbol="o";
    }
    else if(m_player2Symbol=="O"){
        m_player1Symbol="X";
    }
    else if(m_player2Symbol=="o"){
        m_player1Symbol="x";
    }
}

void GameBoard::clear()
{
    // Clear the board by resetting all elements to empty spaces
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            m_board[i][j] = "0";
        }
    }
    moveNum = 0;
    wincode = -1;
    emit boardChanged();
}

int GameBoard::playAtPosition(int row, int col)
{
    // Check if the position is valid and not already taken
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || m_board[row][col] != "0") {
        return -1;
    }

    // Place the symbol at the specified position
    if (moveNum % 2 == 0) //player1
    {
        m_board[row][col] = m_player1Symbol;
    } else {
        m_board[row][col] = m_player2Symbol;
    }
    moveNum++;
    emit boardChanged();
    return row * 3 + col;
}

int GameBoard::checkboard()
{
    if (checkWin(getPlayer1Symbol())) {
        return 1;   //win
    } else if (checkWin(getPlayer2Symbol())) {
        return -1;  //lose
    } else if (getMoveNum() == 9) {
        wincode = -2;
        return 2;   //draw
    } else //continue
        return 0;
}

bool GameBoard::checkWin(const QString &symbol)
{
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; ++i) {
        if (m_board[i][0] == symbol && m_board[i][1] == symbol && m_board[i][2] == symbol) {
            wincode = i * 10 + 4;
            return true; // Check rows
        }
        if (m_board[0][i] == symbol && m_board[1][i] == symbol && m_board[2][i] == symbol) {
            wincode = i + 40;
            return true; // Check columns
        }
    }

    // Check diagonals
    if (m_board[0][0] == symbol && m_board[1][1] == symbol && m_board[2][2] == symbol) {
        wincode = 110;
        return true;
    }
    if (m_board[0][2] == symbol && m_board[1][1] == symbol && m_board[2][0] == symbol) {
        wincode = 101;
        return true;
    }
    wincode = -1;
    return false; // No win found
}

QString GameBoard::getCellValue(int row, int col) const
{
    // Retrieve the value of the cell at the specified position
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        return "0";
    }
    return m_board[row][col];
}

int GameBoard::getCPUindex()
{
    if (mode == 1) { // Easy
        return easyCPU(*this);
    } else if (mode == 2) { // Impossible
        auto bestMove = ::getBestMove(*this);
        return bestMove.first * 3 + bestMove.second;
    }
    return 1; // default case
}

