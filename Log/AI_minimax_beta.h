#ifndef AI_MINIMAX_BETA_H
#define AI_MINIMAX_BETA_H

#endif // AI_MINIMAX_BETA_H
#include "gameboard.h"

class TreeNode {
public:
    QVector<QVector<QString>> boardState; // Represents the game board state
    std::vector<TreeNode*> children; // Children nodes representing possible future states
    int score; // Evaluation score for the board state

    TreeNode(const QVector<QVector<QString>>& state)
        : boardState(state), score(0) {}

    ~TreeNode() {
        for (auto child : children) {
            delete child;
        }
    }

    void addChild(TreeNode* child) {
        children.push_back(child);
    }
};


int minimax(GameBoard& board, int depth, bool isMaximizing, int alpha, int beta);
std::pair<int, int> getBestMove( GameBoard& board);
