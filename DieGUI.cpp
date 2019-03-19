#include "DieGUI.h"
#include "ThreeDicePoker.h"
#include <QBoxLayout>

DieGUI::DieGUI(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout* buttonBox = new QVBoxLayout;
    QHBoxLayout* diceBox = new QHBoxLayout;
    QVBoxLayout* middle = new QVBoxLayout;
    QHBoxLayout* end = new QHBoxLayout;
    QHBoxLayout* foo = new QHBoxLayout;

    dieOne = new QPushButton("?");
    dieTwo = new QPushButton("?");
    dieThree = new QPushButton("?");

    dieOne->setMinimumSize(60, 60);
    dieOne->setMaximumSize(60, 60);

    dieTwo->setMinimumSize(60, 60);
    dieTwo->setMaximumSize(60, 60);

    dieThree->setMinimumSize(60, 60);
    dieThree->setMaximumSize(60, 60);

    start = new QPushButton("Start");

    title = new QLabel("Three Dice Poker");
    startLabel = new QLabel("Click Button to Start");
    scoreLabel = new QLabel("Score");

    score = new QLineEdit();

    buttonBox->addWidget(title);

    diceBox->addWidget(dieOne);
    diceBox->addWidget(dieTwo);
    diceBox->addWidget(dieThree);

    middle->addWidget(startLabel);
    middle->addWidget(start);

    end->addWidget(scoreLabel);
    end->addWidget(score);

    foo->addLayout(middle);

    foo->addLayout(end);

    buttonBox->addLayout(diceBox);
    buttonBox->addLayout(foo);

    setLayout(buttonBox);

    connect(start, SIGNAL(clicked()), this, SLOT(textChange()));
    connect(dieOne, SIGNAL(pressed()), this, SLOT(changeDieOne()));
    connect(dieTwo, SIGNAL(pressed()), this, SLOT(changeDieTwo()));
    connect(dieThree, SIGNAL(pressed()), this, SLOT(changeDieThree()));



}

void DieGUI::textChange(){
    if(start->text() == "Start"){

    start->setText("ReRoll");

    rollAll();
    }

    else{
        if(dieOne->text() == "?"){
            dice[0].roll();
        }

        if(dieTwo->text() == "?"){
            dice[1].roll();
        }

        if(dieThree->text() == "?"){
            dice[2].roll();
        }
        start->setText("Start");
    }

    std::string one = std::to_string(dice[0].getValue());
    QString qstrOne = QString::fromStdString(one);
    dieOne->setText(qstrOne);


    std::string two = std::to_string(dice[1].getValue());
    QString qstrTwo = QString::fromStdString(two);
    dieTwo->setText(qstrTwo);

    std::string three = std::to_string(dice[2].getValue());
    QString qstrThree = QString::fromStdString(three);
    dieThree->setText(qstrThree);

    std::string s = std::to_string(getScore());
    QString qs = QString::fromStdString(s);
    score->setText(qs);

}

void DieGUI::changeDieOne(){
    dieOne->setText("?");
}

void DieGUI::changeDieTwo(){
    dieTwo->setText("?");
}

void DieGUI::changeDieThree(){
    dieThree->setText("?");
}


