#pragma once

#include <QDialog>
#include "ui_Registration.h"

class Registration : public QDialog
{
	Q_OBJECT

public:
	Registration(QWidget *parent = Q_NULLPTR);
	~Registration();

private:
	Ui::Registration ui;
};
