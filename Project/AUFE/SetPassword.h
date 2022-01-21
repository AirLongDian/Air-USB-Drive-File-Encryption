#pragma once

#include <QDialog>
#include "ui_SetPassword.h"

class SetPassword : public QDialog
{
	Q_OBJECT

public:
	SetPassword(QWidget *parent = Q_NULLPTR);
	~SetPassword();

private:
	Ui::SetPassword ui;
};
