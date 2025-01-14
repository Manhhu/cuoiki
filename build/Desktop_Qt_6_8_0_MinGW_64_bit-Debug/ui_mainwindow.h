/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *playButton;
    QPushButton *addButton;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QPushButton *bluetoothButton;
    QListWidget *playlistWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1962, 1186);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        playButton = new QPushButton(centralwidget);
        playButton->setObjectName("playButton");
        playButton->setGeometry(QRect(510, 400, 83, 29));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(630, 400, 83, 29));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(730, 400, 83, 29));
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName("loadButton");
        loadButton->setGeometry(QRect(840, 400, 83, 29));
        bluetoothButton = new QPushButton(centralwidget);
        bluetoothButton->setObjectName("bluetoothButton");
        bluetoothButton->setGeometry(QRect(940, 400, 83, 29));
        playlistWidget = new QListWidget(centralwidget);
        playlistWidget->setObjectName("playlistWidget");
        playlistWidget->setGeometry(QRect(600, 70, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1962, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        playButton->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add Song", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save Song", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "Load Playlist", nullptr));
        bluetoothButton->setText(QCoreApplication::translate("MainWindow", "Bluetooth", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
