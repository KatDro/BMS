#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DesktopApp.h"

class DesktopApp : public QMainWindow
{
	Q_OBJECT

public:
	DesktopApp(QWidget *parent = Q_NULLPTR);
private slots:
	void exit();
	void on_clicked_tempButton();
	void on_clicked_lightButton();
	void on_clicked_humButton();
private:
	Ui::DesktopAppClass ui;
};
