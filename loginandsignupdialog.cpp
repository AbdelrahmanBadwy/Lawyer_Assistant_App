#include "loginandsignupdialog.h"
#include "ui_loginandsignupdialog.h"
#include <QDebug>


loginAndSignUpDialog::loginAndSignUpDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginAndSignUpDialog)
{

    ui->setupUi(this);
    //adjustSize();
    /*
    loginPage = new login(this);
    adjustSize();
    */
   // ui->stackedWidget->show();
    //adjustSize();
     //ui->loginPage->sizeHint();
   // ui->stackedWidget->resize(250,170);
    ui->passwordLineEditLogIn->setEchoMode(QLineEdit::Password);
    ui->passwordLineEditSignUp->setEchoMode(QLineEdit::Password);
    ui->confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);

}

loginAndSignUpDialog::~loginAndSignUpDialog()
{
    delete ui;
  //  delete loginPage;
}


void loginAndSignUpDialog::on_loginButton_clicked()
{
    if(ui->stackedWidget->currentIndex() == 0)
    {

    }
    else
    {
        ui->stackedWidget->setCurrentIndex(0);
        /*
        ui->stackedWidget->resize(250,170);
        resize(300,200);
        */
    }
    //adjustSize();

}


void loginAndSignUpDialog::on_signUpButton_clicked()
{
    if(ui->stackedWidget->currentIndex() == 1)
    {

    }
    else
    {
        ui->stackedWidget->setCurrentIndex(1);
        /*
        ui->stackedWidget->resize(250,440);
        resize(300,500);
        */
    }
    //adjustSize();

}

