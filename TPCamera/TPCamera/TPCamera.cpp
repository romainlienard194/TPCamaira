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

#include "TPCamera.h"

TPCamera::TPCamera(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	port = new QSerialPort(this);

	port->setPortName("COM1");
	port->setBaudRate(QSerialPort::Baud9600);
	port->setDataBits(QSerialPort::DataBits::Data8);
	port->setParity(QSerialPort::Parity::NoParity);
	port->setStopBits(QSerialPort::StopBits::OneStop);
	port->setFlowControl(QSerialPort::NoFlowControl);
	port->open(QIODevice::ReadWrite);
}

void TPCamera::EnvoieTrames(const QByteArray data)
{
	//Envoyer les données à la fonction
	port->write(data);

	//Vide toutes les données en attente.
	port->flush();
}

void TPCamera::buttonAllumer()
{
	//Hexa pour allumer la caméra
	QByteArray data = QByteArray::fromHex("81 01 04 00 02 FF");

	EnvoieTrames(data);

	ui.log->addItem("Camera connecte");
}

void TPCamera::buttonEteindre()
{
	//Hexa pour éteindre la caméra
	QByteArray data = QByteArray::fromHex("81 01 04 00 03 FF");

	EnvoieTrames(data);

	ui.log->addItem("Camera deconnecte");

}

void TPCamera::buttonGauche()
{
	//Hexa pour tourner à gauche la caméra
	QByteArray data = QByteArray::fromHex("81 01 06 01 08 08 01 03 FF");

	EnvoieTrames(data);

	ui.log->addItem("Gauche");

}

void TPCamera::buttonDroite()
{
	//Hexa pour tourner à droite la caméra
	QByteArray data = QByteArray::fromHex("81 01 06 01 08 08 02 03 FF");

	EnvoieTrames(data);

	ui.log->addItem("Droite");

}

void TPCamera::buttonHaut()
{
	//Hexa pour regarder en haut la caméra
	QByteArray data = QByteArray::fromHex("81 01 06 01 08 08 03 01 FF");

	EnvoieTrames(data);

	ui.log->addItem("Haut");
}

void TPCamera::buttonBas()
{
	//Hexa pour regarder en bas la caméra
	QByteArray data = QByteArray::fromHex("81 01 06 01 08 08 03 02 FF");

	EnvoieTrames(data);

	ui.log->addItem("Bas");

}

void TPCamera::buttonStop()
{
	//Hexa pour stopper toute action de la caméra
	QByteArray data = QByteArray::fromHex("81 01 06 01 05 06 03 03 FF");

	EnvoieTrames(data);

	ui.log->addItem("Stop");
}

void TPCamera::buttonZoomPlus()
{
	//Hexa pour zoomer
	QByteArray data = QByteArray::fromHex("81 01 04 07 02 FF");

	EnvoieTrames(data);

	ui.log->addItem("Zoom plus");

}

void TPCamera::buttonZoomMoins()
{
	//Hexa pour dézoomer
	QByteArray data = QByteArray::fromHex("81 01 04 07 03 FF");

	EnvoieTrames(data);

	ui.log->addItem("Zoom moins");

}

void TPCamera::buttonZoomStop()
{
	//Hexa pour stopper zoom
	QByteArray data = QByteArray::fromHex("81 01 04 07 00 FF");

	EnvoieTrames(data);

	ui.log->addItem("Zoom Stop");
}

void TPCamera::balayage()
{
	
}

void TPCamera::reinitialiser()
{
	// Réinitialiser la position de la caméra
	QByteArray data = QByteArray::fromHex("81 01 06 02 08 08 0Y 0Y 0Y 0Y 0Z 0Z 0Z 0Z FF");

	EnvoieTrames(data);

	ui.log->addItem("Remise a la position de base de la camera");

}