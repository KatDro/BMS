#pragma once

#include <QDialog>
#include "ui_commdialog.h"

class commdialog : public QDialog, public Ui::commdialog
{
	Q_OBJECT

public:
	commdialog(QWidget *parent = Q_NULLPTR);
	~commdialog();
};
