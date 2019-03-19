#ifndef DIEGUI_H
#define DIEGUI_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <string>
#include "ThreeDicePoker.h"

class DieGUI : public QWidget, public ThreeDicePoker
{
    Q_OBJECT
public:
    explicit DieGUI(QWidget *parent = nullptr);

private:
    QPushButton* dieOne;
    QPushButton* dieTwo;
    QPushButton* dieThree;

    QPushButton* start;

    QLabel* title;
    QLabel* startLabel;
    QLabel* scoreLabel;

    QLineEdit* score;

signals:

public slots:
    void textChange();
    void changeDieOne();
    void changeDieTwo();
    void changeDieThree();

};

#endif // DIEGUI_H
