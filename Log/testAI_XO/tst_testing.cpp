#include <QCoreApplication>
#include <QtTest>
#include "../AI_minimax_beta.h"

class TestAIModel : public QObject
{
    Q_OBJECT

private slots:
    void testMinimaxPlayer1()
    {
        GameBoard board;
        int depth = 0;
        bool isMaximizing = true;
        int alpha = INT_MIN;
        int beta = INT_MAX;

        int result = minimax(board, depth, isMaximizing, alpha, beta);

        QVERIFY(result >= -10 && result <= 10); // Example assertion
    }

    void testMinimaxPlayer2()
    {
        GameBoard board;
        int depth = 0;
        bool isMaximizing = false;
        int alpha = INT_MIN;
        int beta = INT_MAX;

        int result = minimax(board, depth, isMaximizing, alpha, beta);

        QVERIFY(result >= -10 && result <= 10); // Example assertion
    }

    void testGetBestMove()
    {
        GameBoard board;
        std::pair<int, int> bestMove = getBestMove(board);

        QVERIFY(bestMove.first >= 0 && bestMove.first < 3); // Example assertion
        QVERIFY(bestMove.second >= 0 && bestMove.second < 3); // Example assertion
    }

    void testGameBoardInitialization()
    {
        GameBoard board;
        QCOMPARE(board.getMode(), 1); // Example assertion for initial mode
        QCOMPARE(board.getMoveNum(), 0); // Example assertion for initial move number
        QCOMPARE(board.getwincode(), -1); // Example assertion for initial win code
    }

    void testGameBoardPlayAtPosition()
    {
        GameBoard board;
        QCOMPARE(board.playAtPosition(0, 0), 0); // Example assertion for play at position
        QCOMPARE(board.playAtPosition(1, 1), 0); // Example assertion for play at position
        // Add more assertions for different positions and scenarios
    }

    void testGameBoardCheckWin()
    {
        GameBoard board;
        // Simulate a winning condition and test checkWin method
        board.setBoard(0, 0, "X");
        board.setBoard(0, 1, "X");
        board.setBoard(0, 2, "X");
        QCOMPARE(board.checkWin("X"), 1); // Example assertion for player 1 win
    }
};

QTEST_APPLESS_MAIN(TestAIModel)
#include "tst_testing.moc"
