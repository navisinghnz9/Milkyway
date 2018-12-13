#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    http = new HttpClient("", this);
    http->GetAPOD();
}

MainWindow::~MainWindow()
{
    delete ui;
    if (http) {
        delete http;
        http = nullptr;
    }
}
