#include "MainWindow.h"
#include "./ui_MainWindow.h"

#include <QtCore/QDebug>
#include <QtCore/QLibrary>

#include <ComponentsCore5alpha/ComponentManager>
#include <ComponentA/IAObject.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect (ui->pushBtn1_, &QPushButton::clicked, this, &MainWindow::load1Clicked);
    connect (ui->pushBtn2_, &QPushButton::clicked, this, &MainWindow::load2Clicked);
    connect (ui->pushBtn3_, &QPushButton::clicked, this, &MainWindow::load3Clicked);
}

MainWindow::~MainWindow()
{
    ComponentsCore::ComponentManager::instance ()->shutdown ();
    delete ui;
}

void MainWindow::load1Clicked()
{
    if (!ComponentsCore::ComponentManager::setComponentPaths ({"components"}, true))
    {
        qCritical () << "[MainWindow][load1Clicked] Could not 'setComponentPaths'";
        return;
    }

    ComponentsCore::ComponentManager::instance ()->startup ();
}

void MainWindow::load2Clicked ()
{
    auto object = ComponentsCore::ComponentManager::instance ()->getObject<IAObject> ();
    if (!object)
    {
        qCritical () << "[MainWindow][load2Clicked] Could not find IAObject";
        return;
    }

    object->foo ();
}

void MainWindow::load3Clicked()
{
    qDebug () << "load 3 Clicked";
}

