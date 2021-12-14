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
	QByteArray data = QByteArray::fromHex("8x 01 04 00 02 FF");

	EnvoieTrames(data);

	ui.log->addItem("Camaira connectai");
}

void TPCamera::buttonEteindre()
{
	//Hexa pour éteindre la caméra
	QByteArray data = QByteArray::fromHex("8x 01 04 00 03 FF");

	EnvoieTrames(data);

	ui.log->addItem("Camaira daiconnectai");

}

void TPCamera::buttonGauche()
{
	//Hexa pour tourner à gauche la caméra
	QByteArray data = QByteArray::fromHex("8x 01 06 01 05 06 01 03 FF");

	EnvoieTrames(data);

	ui.log->addItem("Gauche gauche gauche");

}

void TPCamera::buttonDroite()
{
	//Hexa pour tourner à droite la caméra
	QByteArray data = QByteArray::fromHex("8x 01 06 01 05 06 01 03 FF");

	EnvoieTrames(data);

	ui.log->addItem("Droite droite droite");

}

void TPCamera::buttonHaut()
{
	//Hexa pour regarder en haut la caméra
	QByteArray data = QByteArray::fromHex("8x 01 06 01 05 06 03 01 FF");

	EnvoieTrames(data);

	ui.log->addItem("HAUT TOUJOURS PLUS HAUT");
}

void TPCamera::buttonBas()
{
	//Hexa pour regarder en bas la caméra
	QByteArray data = QByteArray::fromHex("8x 01 06 01 05 06 03 02 FF");

	EnvoieTrames(data);

	ui.log->addItem("En bas la");

}

void TPCamera::buttonStop()
{
	//Hexa pour stopper toute action de la caméra
	QByteArray data = QByteArray::fromHex("8x 01 06 01 05 06 03 03 FF");

	EnvoieTrames(data);

	ui.log->addItem("Stop");
}

void TPCamera::buttonZoomPlus()
{
	//Hexa pour zoomer
	QByteArray data = QByteArray::fromHex("8x 01 04 08 03 FF");

	EnvoieTrames(data);

	ui.log->addItem("Myope");

}

void TPCamera::buttonZoomMoins()
{
	//Hexa pour dézoomer
	QByteArray data = QByteArray::fromHex("8x 01 04 08 02 FF");

	EnvoieTrames(data);

	ui.log->addItem("Hypermetrope");

}

void TPCamera::buttonZoomStop()
{
	//Hexa pour stopper zoom
	QByteArray data = QByteArray::fromHex("8x 01 04 08 00 FF");

	EnvoieTrames(data);

	ui.log->addItem("Zoom Stop");
}


/*void TPCamera::cameraOn()
{
	ui.haut->setEnabled(true);
	ui.bas->setEnabled(true);
	ui.gauche->setEnabled(true);
	ui.droite->setEnabled(true);
	ui.stop->setEnabled(true);
	ui.zoomMoins->setEnabled(true);
	ui.zoomPlus->setEnabled(true);
	ui.zoomStop->setEnabled(true);
	ui.allumer->setEnabled(true);
	ui.eteindre->setEnabled(true);
}

void TPCamera::cameraOff()
{
	ui.haut->setEnabled(false);
	ui.bas->setEnabled(false);
	ui.gauche->setEnabled(false);
	ui.droite->setEnabled(false);
	ui.stop->setEnabled(false);
	ui.zoomMoins->setEnabled(false);
	ui.zoomPlus->setEnabled(false);
	ui.zoomStop->setEnabled(false);
	ui.allumer->setEnabled(false);
	ui.eteindre->setEnabled(false);
}*/