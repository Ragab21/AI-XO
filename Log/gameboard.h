#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QMainWindow>
#include <QObject>
#include <cmath>
#include <QSharedDataPointer>
#include <QWidget>
#include <QVector>

class GameBoard : public QObject
{
    Q_OBJECT

public:
    explicit GameBoard(QObject *parent = nullptr);
    Q_INVOKABLE void clear();
    Q_INVOKABLE int playAtPosition(int row, int col);
    int checkboard();
    Q_INVOKABLE QString getCellValue(int row, int col) const;

    // Getter and setter for mode
    int getMode() const { return mode; }
    void setMode(int value) { mode = value; }

    // Getter and setter for moveNum
    int getMoveNum() const { return moveNum; }
    void setMoveNum(int value) { moveNum = value; }

    // Getter and setter for wincode
    int getwincode() const { return wincode; }
    void setwincode(int value) { wincode = value; }

    // Getters and setters for player symbols
    QString getPlayer1Symbol() const { return m_player1Symbol; }
    void setPlayer1Symbol(const QString &symbol);

    QString getPlayer2Symbol() const { return m_player2Symbol; }
    void setPlayer2Symbol(const QString &symbol);

    // Getter and setter for m_board
    const QVector<QVector<QString>>& getBoard() const { return m_board; }
    void setBoard(int raw,int col,QString symbol) { m_board[raw][col] = symbol; }

    // Getters and setters for player1 name
    QString getPlayer1name() const { return player1name; }
    void setPlayer1name(const QString &name) { player1name = name; }

    // Getters and setters for player2 name
    QString getPlayer2name() const { return player2name; }
    void setPlayer2name(const QString &name) { player2name = name; }

    int getCPUindex();

signals:
    void boardChanged();

private:
    Q_INVOKABLE bool checkWin(const QString &symbol);
    QVector<QVector<QString>> m_board;
    QString m_player1Symbol="X";
    QString m_player2Symbol="O";
    int mode=1; //1:Easy 2:Impossiblle 3:Player2
    int moveNum=0; //how many moves
    int wincode=-1;
    QString player1name = "You";
    QString player2name = "CPU";


};

#endif // GAMEBOARD_H
