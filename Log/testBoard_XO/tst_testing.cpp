#include <QCoreApplication>
#include <QtTest>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

#include "../gameboard.h"
#include "../AI_minimax_beta.h"
#include "../CPU.h"

class TestGameBoard : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase()
    {
        // Initialize any resources needed for tests here
        srand(static_cast<unsigned int>(time(0))); // Initialize random seed
    }

    void cleanupTestCase()
    {
        // Cleanup any resources used for tests here
    }

    void testPlayAtPosition()
    {
        GameBoard board;
        QCOMPARE(board.playAtPosition(0, 0), 0); // Ensure first move returns correct index
        QCOMPARE(board.playAtPosition(1, 1), 4); // Ensure second move returns correct index
        QVERIFY(board.getCellValue(0, 0) == board.getPlayer1Symbol()); // Ensure symbol is placed correctly
        QVERIFY(board.getCellValue(1, 1) == board.getPlayer2Symbol()); // Ensure symbol is placed correctly
    }

    void testCheckWin()
    {
        GameBoard board;
        board.setPlayer1Symbol("X");
        board.setPlayer2Symbol("O");

        // Test horizontal win for player 1
        board.setBoard(0, 0, "X");
        board.setBoard(0, 1, "X");
        board.setBoard(0, 2, "X");
        QCOMPARE(board.checkWin("X"), true);

        // Test diagonal win for player 2
        board.clear();
        board.setBoard(0, 0, "O");
        board.setBoard(1, 1, "O");
        board.setBoard(2, 2, "O");
        QCOMPARE(board.checkWin("O"), true);

        // Test no win scenario
        board.clear();
        board.setBoard(0, 0, "X");
        board.setBoard(1, 0, "O");
        board.setBoard(2, 0, "X");
        QCOMPARE(board.checkWin("X"), false);
    }

    void testGameFlow()
    {
        GameBoard board;
        board.setPlayer1Symbol("X");
        board.setPlayer2Symbol("O");

        QCOMPARE(board.getMoveNum(), 0); // Ensure initial move number is correct

        // Perform a series of moves to simulate game flow
        board.playAtPosition(0, 0);
        QCOMPARE(board.getMoveNum(), 1); // Ensure move number increments correctly
        board.playAtPosition(1, 1);
        QCOMPARE(board.getMoveNum(), 2);
        board.playAtPosition(0, 1);
        QCOMPARE(board.getMoveNum(), 3);
        board.playAtPosition(1, 0);
        QCOMPARE(board.getMoveNum(), 4);

        // Simulate a win and check game status
        board.setBoard(0, 2, "X");
        QCOMPARE(board.checkboard(), 1); // Check if player 1 wins
    }

    void testEasyCPU()
    {
        GameBoard board;
        board.setPlayer1Symbol("X");
        board.setPlayer2Symbol("O");

        // Perform easyCPU move and verify it's valid
        int move = easyCPU(board);
        QVERIFY(move >= 0 && move < 9); // Ensure move is within valid range (0-8)
        QVERIFY(board.getCellValue(move / 3, move % 3) == "O"); // Ensure CPU symbol is placed correctly
    }

    void testGetBestMove()
    {
        GameBoard board;
        board.setPlayer1Symbol("X");
        board.setPlayer2Symbol("O");

        // Simulate board state and verify best move
        std::pair<int, int> bestMove = getBestMove(board);
        QVERIFY(bestMove.first >= 0 && bestMove.first < 3); // Ensure best move row is within range
        QVERIFY(bestMove.second >= 0 && bestMove.second < 3); // Ensure best move column is within range
    }

    void testCPUIndex()
    {
        GameBoard board;
        board.setPlayer1Symbol("X");
        board.setPlayer2Symbol("O");

        // Test CPU index function for different modes
        board.setMode(1); // Easy mode
        int moveIndex = board.getCPUindex();
        QVERIFY(moveIndex >= 0 && moveIndex < 9); // Ensure move index is within valid range (0-8)

        board.setMode(2); // Impossible mode
        moveIndex = board.getCPUindex();
        QVERIFY(moveIndex >= 0 && moveIndex < 9); // Ensure move index is within valid range (0-8)
    }
};

QTEST_APPLESS_MAIN(TestGameBoard)

#include "tst_testing.moc"
