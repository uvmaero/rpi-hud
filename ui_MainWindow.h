/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *batteryIndicatorProgBar;
    QLCDNumber *speedLCD;
    QLabel *batteryIndicatorTbx;
    QLineEdit *driveModeLineEdit;
    QLabel *driveModeTbx;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(480, 320);
        MainWindow->setMinimumSize(QSize(480, 320));
        MainWindow->setMaximumSize(QSize(480, 320));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        batteryIndicatorProgBar = new QProgressBar(centralwidget);
        batteryIndicatorProgBar->setObjectName("batteryIndicatorProgBar");
        batteryIndicatorProgBar->setGeometry(QRect(10, 220, 461, 51));
        batteryIndicatorProgBar->setValue(24);
        speedLCD = new QLCDNumber(centralwidget);
        speedLCD->setObjectName("speedLCD");
        speedLCD->setGeometry(QRect(160, 0, 311, 121));
        speedLCD->setLayoutDirection(Qt::LeftToRight);
        speedLCD->setSmallDecimalPoint(false);
        speedLCD->setSegmentStyle(QLCDNumber::Flat);
        batteryIndicatorTbx = new QLabel(centralwidget);
        batteryIndicatorTbx->setObjectName("batteryIndicatorTbx");
        batteryIndicatorTbx->setGeometry(QRect(10, 200, 81, 18));
        driveModeLineEdit = new QLineEdit(centralwidget);
        driveModeLineEdit->setObjectName("driveModeLineEdit");
        driveModeLineEdit->setGeometry(QRect(290, 180, 181, 31));
        driveModeLineEdit->setReadOnly(true);
        driveModeTbx = new QLabel(centralwidget);
        driveModeTbx->setObjectName("driveModeTbx");
        driveModeTbx->setGeometry(QRect(290, 160, 91, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 480, 23));
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
        batteryIndicatorTbx->setText(QCoreApplication::translate("MainWindow", "Battery %:", nullptr));
        driveModeTbx->setText(QCoreApplication::translate("MainWindow", "Drive Mode:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
