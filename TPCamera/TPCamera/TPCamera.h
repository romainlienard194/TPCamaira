#pragma once

//*********************************************************************************************
//* Programme : TPCamera.cpp date : 14/12/2021
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 
//*
//*Programmeurs : GHYSELEN Lucas / COLSON Baptiste / LIENARD Romain classe : BTSSN2
//*--------------------------------------------------------------------------------------------------------
//* BUT : Piloter une caméra via une aplication C++
//*Programmes associés : AUCUN
//**

#include <QtWidgets/QMainWindow>
#include "ui_TPCamera.h"
#include <windows.h>

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QByteArray>

class TPCamera : public QMainWindow
{
    Q_OBJECT

public:
    TPCamera(QWidget *parent = Q_NULLPTR);

private:
    Ui::TPCameraClass ui;
	QSerialPort * port;
	QTimer * timer;

public slots:

	void EnvoieTrames(const QByteArray function);

	// Etat de la caméra
	void buttonAllumer();
	void buttonEteindre();

	// Position de la caméra
	void buttonGauche();
	void buttonDroite();
	void buttonHaut();
	void buttonBas();
	void buttonStop();

	// Zoom de la caméra
	void buttonZoomPlus();
	void buttonZoomMoins();
	void buttonZoomStop();
	
	// Réinitialiser la position de la caméra
	void balayage();
	void reinitialiser();
};
