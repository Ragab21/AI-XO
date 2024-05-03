// GameBoard.cpp

#include "gameboard.h"

GameBoard::GameBoard(QObject *parent) : QObject(parent), m_board(3, QVector<QString>(3, " ")), m_player1Symbol("X")
{
    // Constructor initializes the board with empty spaces
}

void GameBoard::clear()
{
    // Clear the board by resetting all elements to empty spaces
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            m_board[i][j] = "0";
        }
    }
    emit boardChanged();
}

bool GameBoard::playAtPosition(int row, int col)
{
    // Check if the position is valid and not already taken
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || m_board[row][col] != "0") {
        return false;
    }

    // Place the symbol at the specified position
    if(moveNum%2==0) //player1
    {
        m_board[row][col] = m_player1Symbol;
    }else{
        m_board[row][col] = m_player2Symbol;
    }
    emit boardChanged();
    return true;
}

bool GameBoard::checkWin(const QString &symbol) const
{
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; ++i) {
        if (m_board[i][0] == symbol && m_board[i][1] == symbol && m_board[i][2] == symbol) {
            return true; // Check rows
        }
        if (m_board[0][i] == symbol && m_board[1][i] == symbol && m_board[2][i] == symbol) {
            return true; // Check columns
        }
    }

    // Check diagonals
    if ((m_board[0][0] == symbol && m_board[1][1] == symbol && m_board[2][2] == symbol) ||
        (m_board[0][2] == symbol && m_board[1][1] == symbol && m_board[2][0] == symbol)) {
        return true;
    }

    return false; // No win found
}

QString GameBoard::getCellValue(int row, int col) const
{
    // Retrieve the value of the cell at the specified position
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        return "";
    }
    return m_board[row][col];
}
