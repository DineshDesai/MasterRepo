#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QQuickView>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QQuickView *view = new QQuickView();
    QWidget *container = QWidget::createWindowContainer(view, this);
    container->setMinimumSize(300, 200);
    container->setMaximumSize(300, 200);

    view->setSource(QUrl("qrc:/QmlMenu.qml"));
    ui->verticalLayout->addWidget(container);
}

MainWindow::~MainWindow()
{
    delete ui;
}
