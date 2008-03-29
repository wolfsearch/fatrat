#ifndef _SETTINGSGENERALFORM_H
#define _SETTINGSGENERALFORM_H
#include "ui_SettingsGeneralForm.h"
#include "WidgetHostChild.h"

class SettingsGeneralForm : public QObject, Ui_SettingsGeneralForm, public WidgetHostChild
{
Q_OBJECT
public:
	SettingsGeneralForm(QWidget* me, QObject* parent);
	virtual void load();
	virtual bool accept();
	virtual void accepted();
public slots:
	void browse();
};

#endif
