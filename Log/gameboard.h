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
    Q_INVOKABLE bool checkWin(const QString &symbol) const;
    Q_INVOKABLE QString getCellValue(int row, int col) const;

signals:
    void boardChanged();

private:
    QVector<QVector<QString>> m_board;
    QString m_player1Symbol="X";
    QString m_player2Symbol="Y";
    int mode=0; //1:CPU 2:Player2
    int moveNum=0; //how many moves
};

#endif // GAMEBOARD_H
