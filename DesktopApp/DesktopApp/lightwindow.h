#pragma once

#include <QWidget>
#include "ui_lightwindow.h"

class lightWindow : public QWidget, public Ui::lightWindow
{
	Q_OBJECT
private:
	bool is_lightOn;

public:
	lightWindow(QWidget *parent = Q_NULLPTR);
	~lightWindow();
private slots:
	void on_clicked_pushButton();
};
