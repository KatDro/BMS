#pragma once

#include <QWidget>
#include "ui_humiditywindow.h"

class humidityWindow : public QWidget, public Ui::humidityWindow
{
	Q_OBJECT

public:
	humidityWindow(QWidget *parent = Q_NULLPTR);
	~humidityWindow();
};
