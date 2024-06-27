#include <QCoreApplication>
#include <QtTest>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

#include "../CPU.h"
#include "../gameboard.h"

class TestCPU : public QObject
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

    void testEasyCPUMove()
    {
        GameBoard board;
        int move = easyCPU(board);

        QVERIFY(move >= 0 && move < 9); // Ensure move is within valid range (0-8)
        QVERIFY(board.getCellValue(move / 3, move % 3) == "0"); // Ensure cell is empty after move
    }

    void testEasyCPUMultipleMoves()
    {
        GameBoard board;
        // Simulate multiple moves and verify each one
        for (int i = 0; i < 5; ++i) {
            int move = easyCPU(board);
            QVERIFY(move >= 0 && move < 9); // Ensure move is within valid range (0-8)
            QVERIFY(board.getCellValue(move / 3, move % 3) == "0"); // Ensure cell is empty after move
        }
    }

    void testEasyCPUInvalidMoves()
    {
        GameBoard board;
        // Fill the board to prevent valid moves
        board.setBoard(0, 0, "X");
        board.setBoard(0, 1, "O");
        board.setBoard(0, 2, "X");
        board.setBoard(1, 0, "O");
        board.setBoard(1, 1, "X");
        board.setBoard(1, 2, "O");
        board.setBoard(2, 0, "X");
        board.setBoard(2, 1, "O");
        board.setBoard(2, 2, "X");

        // Attempt to make a move; should return -1 (invalid move)
        int move = easyCPU(board);
        QCOMPARE(move, -1);
    }

    void testEasyCPURandomized()
    {
        GameBoard board;
        // Track moves to ensure non-repeating behavior
        std::vector<int> moves;

        for (int i = 0; i < 9; ++i) {
            int move = easyCPU(board);
            QVERIFY(move >= 0 && move < 9); // Ensure move is within valid range (0-8)
            QVERIFY(board.getCellValue(move / 3, move % 3) == "0"); // Ensure cell is empty after move

            // Check for duplicate moves
            QVERIFY(std::find(moves.begin(), moves.end(), move) == moves.end());
            moves.push_back(move);
        }
    }

    void testEasyCPUSmartMove()
    {
        GameBoard board;
        // Simulate a board state where a smart move is possible
        board.setBoard(0, 0, "X");
        board.setBoard(1, 1, "O");
        board.setBoard(2, 2, "X");

        int move = easyCPU(board);

        // Ensure the CPU makes the winning move if available
        QVERIFY(move == 1 || move == 3 || move == 5 || move == 7);
    }
};

QTEST_APPLESS_MAIN(TestCPU)

#include "tst_testing.moc"
