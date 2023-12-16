#ifndef LOGINANDSIGNUPDIALOG_H
#define LOGINANDSIGNUPDIALOG_H

#include <QDialog>
#include <login.h>

QT_BEGIN_NAMESPACE
namespace Ui { class loginAndSignUpDialog; }
QT_END_NAMESPACE

class loginAndSignUpDialog : public QDialog
{
    Q_OBJECT

public:
    loginAndSignUpDialog(QWidget *parent = nullptr);
    ~loginAndSignUpDialog();

private slots:
    void on_loginButton_clicked();

    void on_signUpButton_clicked();

private:
    Ui::loginAndSignUpDialog *ui;
    login *loginPage;
};
#endif // LOGINANDSIGNUPDIALOG_H
