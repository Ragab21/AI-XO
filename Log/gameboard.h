#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QMainWindow>
#include <QObject>
//#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>
#include <QVector>



class GameBoard : public QObject
{
    Q_OBJECT

public:
    explicit GameBoard(QObject *parent = nullptr);
    Q_INVOKABLE void clear();
    Q_INVOKABLE bool playAtPosition(int row, int col);
    int checkboard();
    Q_INVOKABLE QString getCellValue(int row, int col) const;

    // Getter and setter for mode
    int getMode() const { return mode; }
    void setMode(int value) { mode = value; }

    // Getter and setter for moveNum
    int getMoveNum() const { return moveNum; }
    void setMoveNum(int value) { moveNum = value; }

    // Getters and setters for player symbols
    QString getPlayer1Symbol() const { return m_player1Symbol; }
    void setPlayer1Symbol(const QString &symbol) { m_player1Symbol = symbol; }

    QString getPlayer2Symbol() const { return m_player2Symbol; }
    void setPlayer2Symbol(const QString &symbol) { m_player2Symbol = symbol; }

    // Getter and setter for m_board
    const QVector<QVector<QString>>& getBoard() const { return m_board; }
    void setBoard(const QVector<QVector<QString>>& board) { m_board = board; }

signals:
    void boardChanged();

private:
    Q_INVOKABLE bool checkWin(const QString &symbol) const;
    QVector<QVector<QString>> m_board;
    QString m_player1Symbol="X";
    QString m_player2Symbol="O";
    int mode=0; //1:CPU 2:Player2
    int moveNum=0; //how many moves
};

#endif // GAMEBOARD_H
