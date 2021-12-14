#pragma once

//*********************************************************************************************
//* Programme : TPCamera.cpp date : 14/12/2021
//*---------------------------------------------------------------------------------------------------------
//* derni�re mise a jour : 
//*
//*Programmeurs : GHYSELEN Lucas / COLSON Baptiste / LIENARD Romain classe : BTSSN2
//*--------------------------------------------------------------------------------------------------------
//* BUT : Piloter une cam�ra via une aplication C++
//*Programmes associ�s : AUCUN
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

	// Etat de la cam�ra
	void buttonAllumer();
	void buttonEteindre();

	// Position de la cam�ra
	void buttonGauche();
	void buttonDroite();
	void buttonHaut();
	void buttonBas();
	void buttonStop();

	// Zoom de la cam�ra
	void buttonZoomPlus();
	void buttonZoomMoins();
	void buttonZoomStop();
	
	// R�initialiser la position de la cam�ra
	void balayage();
	void reinitialiser();
};
