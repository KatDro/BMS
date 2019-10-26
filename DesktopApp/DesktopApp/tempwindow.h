#pragma once

#include <QWidget>
#include "ui_tempwindow.h"

class tempWindow : public QWidget, public Ui::tempWindow
{
	Q_OBJECT

public:
	tempWindow(QWidget *parent = Q_NULLPTR);
	~tempWindow();	
};
