#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QStackedWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *libraryPageWidget = new QWidget;
    QWidget *homePageWidget = new QWidget;
    QWidget *searchPageWidget = new QWidget;

    QStackedWidget *stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(libraryPageWidget);
    stackedWidget->addWidget(homePageWidget);
    stackedWidget->addWidget(searchPageWidget);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(stackedWidget);
    setLayout(layout);

}


MainWindow::~MainWindow()
{
    delete ui;
}
