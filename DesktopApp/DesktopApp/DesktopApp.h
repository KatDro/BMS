#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DesktopApp.h"

class DesktopApp : public QMainWindow
{
	Q_OBJECT

public:
	DesktopApp(QWidget *parent = Q_NULLPTR);

private:
	Ui::DesktopAppClass ui;
};
