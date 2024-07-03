#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QPixmap>
#include <gamewindow.h>

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    QPixmap logo("C:/Users/ethan/OneDrive/Desktop/Development/BlackJack/Resources/blackJackLogo.jpg");
    ui->mainMenuLogo->setPixmap(logo);
}

MainMenu::~MainMenu()
{
    delete ui;
}


void MainMenu::on_exitButton1_clicked()
{
    close();
}



void MainMenu::on_playButton_pressed()
{
    gameWindow gameWin;
    gameWin.show();
    gameWin.setModal(true);
    gameWin.exec();
}

