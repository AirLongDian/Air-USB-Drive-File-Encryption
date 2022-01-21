#pragma once

#include <QDialog>
#include "ui_ERRORDialog.h"

class ERRORDialog : public QDialog
{
	Q_OBJECT

public:
	ERRORDialog(QWidget *parent = Q_NULLPTR);
	~ERRORDialog();

private:
	Ui::ERRORDialog ui;
};
