/********************************************************************************
** Form generated from reading UI file 'TPCamera.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPCAMERA_H
#define UI_TPCAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPCameraClass
{
public:
    QWidget *centralWidget;
    QListWidget *log;
    QPushButton *bas;
    QPushButton *droite;
    QPushButton *gauche;
    QPushButton *haut;
    QPushButton *stop;
    QPushButton *allumer;
    QPushButton *eteindre;
    QPushButton *zoomMoins;
    QPushButton *zoomPlus;
    QPushButton *zoomStop;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TPCameraClass)
    {
        if (TPCameraClass->objectName().isEmpty())
            TPCameraClass->setObjectName(QString::fromUtf8("TPCameraClass"));
        TPCameraClass->resize(600, 354);
        centralWidget = new QWidget(TPCameraClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        log = new QListWidget(centralWidget);
        log->setObjectName(QString::fromUtf8("log"));
        log->setGeometry(QRect(20, 10, 201, 111));
        bas = new QPushButton(centralWidget);
        bas->setObjectName(QString::fromUtf8("bas"));
        bas->setGeometry(QRect(150, 250, 81, 41));
        droite = new QPushButton(centralWidget);
        droite->setObjectName(QString::fromUtf8("droite"));
        droite->setGeometry(QRect(230, 200, 61, 41));
        gauche = new QPushButton(centralWidget);
        gauche->setObjectName(QString::fromUtf8("gauche"));
        gauche->setGeometry(QRect(90, 200, 61, 41));
        haut = new QPushButton(centralWidget);
        haut->setObjectName(QString::fromUtf8("haut"));
        haut->setGeometry(QRect(150, 150, 81, 41));
        stop = new QPushButton(centralWidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(160, 200, 61, 41));
        allumer = new QPushButton(centralWidget);
        allumer->setObjectName(QString::fromUtf8("allumer"));
        allumer->setGeometry(QRect(510, 10, 81, 41));
        eteindre = new QPushButton(centralWidget);
        eteindre->setObjectName(QString::fromUtf8("eteindre"));
        eteindre->setGeometry(QRect(510, 60, 81, 41));
        zoomMoins = new QPushButton(centralWidget);
        zoomMoins->setObjectName(QString::fromUtf8("zoomMoins"));
        zoomMoins->setGeometry(QRect(330, 250, 81, 41));
        zoomPlus = new QPushButton(centralWidget);
        zoomPlus->setObjectName(QString::fromUtf8("zoomPlus"));
        zoomPlus->setGeometry(QRect(330, 150, 81, 41));
        zoomStop = new QPushButton(centralWidget);
        zoomStop->setObjectName(QString::fromUtf8("zoomStop"));
        zoomStop->setGeometry(QRect(340, 200, 61, 41));
        TPCameraClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TPCameraClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        TPCameraClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TPCameraClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TPCameraClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TPCameraClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TPCameraClass->setStatusBar(statusBar);

        retranslateUi(TPCameraClass);
        QObject::connect(allumer, SIGNAL(clicked(bool)), TPCameraClass, SLOT(buttonAllumer()));
        QObject::connect(eteindre, SIGNAL(clicked(bool)), TPCameraClass, SLOT(buttonEteindre()));
        QObject::connect(droite, SIGNAL(clicked(bool)), TPCameraClass, SLOT(buttonDroite()));
        QObject::connect(gauche, SIGNAL(clicked(bool)), TPCameraClass, SLOT(buttonGauche()));
        QObject::connect(haut, SIGNAL(clicked(bool)), TPCameraClass, SLOT(buttonHaut()));
        QObject::connect(bas, SIGNAL(clicked(bool)), TPCameraClass, SLOT(buttonBas()));
        QObject::connect(zoomMoins, SIGNAL(clicked(bool)), TPCameraClass, SLOT(buttonZoomMoins()));
        QObject::connect(zoomPlus, SIGNAL(clicked(bool)), TPCameraClass, SLOT(buttonZoomPlus()));
        QObject::connect(zoomStop, SIGNAL(clicked(bool)), TPCameraClass, SLOT(buttonZoomStop()));
        QObject::connect(stop, SIGNAL(clicked(bool)), TPCameraClass, SLOT(buttonStop()));

        QMetaObject::connectSlotsByName(TPCameraClass);
    } // setupUi

    void retranslateUi(QMainWindow *TPCameraClass)
    {
        TPCameraClass->setWindowTitle(QCoreApplication::translate("TPCameraClass", "TPCamera", nullptr));
        bas->setText(QCoreApplication::translate("TPCameraClass", "Bas", nullptr));
        droite->setText(QCoreApplication::translate("TPCameraClass", "Droite", nullptr));
        gauche->setText(QCoreApplication::translate("TPCameraClass", "Gauche", nullptr));
        haut->setText(QCoreApplication::translate("TPCameraClass", "Haut", nullptr));
        stop->setText(QCoreApplication::translate("TPCameraClass", "Stop", nullptr));
        allumer->setText(QCoreApplication::translate("TPCameraClass", "Allumer", nullptr));
        eteindre->setText(QCoreApplication::translate("TPCameraClass", "Eteindre", nullptr));
        zoomMoins->setText(QCoreApplication::translate("TPCameraClass", "Zoom -", nullptr));
        zoomPlus->setText(QCoreApplication::translate("TPCameraClass", "Zoom +", nullptr));
        zoomStop->setText(QCoreApplication::translate("TPCameraClass", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TPCameraClass: public Ui_TPCameraClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPCAMERA_H
