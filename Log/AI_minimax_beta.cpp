#include "AI_minimax_beta.h"

    int minimax(GameBoard& board, int depth, bool isMaximizing, int alpha, int beta)
{
    int boardState = board.checkboard();
    if (boardState == 1) return 10 - depth; // Player 1 win
    if (boardState == -1) return depth - 10; // Player 2 (AI) win
    if (boardState == 2) return 0; // Draw

    if (isMaximizing) {
        int maxEval = INT_MIN;
        for (int row = 0; row < 3; ++row) {
            for (int col = 0; col < 3; ++col) {
                if (board.getCellValue(row, col) == "0") {

                    board.setBoard(row,col,board.getPlayer1Symbol());
                    int eval = minimax(board, depth + 1, false, alpha, beta);
                    board.setBoard(row,col,"0");    //Undo
                    maxEval = std::max(maxEval, eval);
                    alpha = std::max(alpha, eval);
                    if (beta <= alpha) return maxEval;
                }
            }
        }
        return maxEval;
    } else {
        int minEval = INT_MAX;
        for (int row = 0; row < 3; ++row) {
            for (int col = 0; col < 3; ++col) {
                if (board.getCellValue(row, col) == "0") {
                    board.setBoard(row,col,board.getPlayer2Symbol());
                    int eval = minimax(board, depth + 1, true, alpha, beta);
                    board.setBoard(row,col,"0");    //Undo
                    minEval = std::min(minEval, eval);
                    beta = std::min(beta, eval);
                    if (beta <= alpha) return minEval;
                }
            }
        }
        return minEval;
    }
}

std::pair<int, int> getBestMove( GameBoard& board)
{
    int bestScore = INT_MIN;
    std::pair<int, int> bestMove = { -1, -1 };
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            if (board.getCellValue(row, col) == "0") {
                 board.setBoard(row,col,board.getPlayer1Symbol());
                int moveScore = minimax(const_cast<GameBoard&>(board), 0, false, INT_MIN, INT_MAX);
                board.setBoard(row,col,"0");    //Undo
                if (moveScore > bestScore) {
                    bestScore = moveScore;
                    bestMove = { row, col };
                }
            }
        }
    }
    return bestMove;
}


