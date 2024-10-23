/********************************************************************************
** Form generated from reading UI file 'findreplacedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDREPLACEDIALOG_H
#define UI_FINDREPLACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindReplaceDialog
{
public:
    QPushButton *findNextButton;
    QPushButton *replaceButton;
    QPushButton *replaceAllButton;
    QCheckBox *caseCheckBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *findLineEdit;
    QLineEdit *replaceLineEdit;

    void setupUi(QDialog *FindReplaceDialog)
    {
        if (FindReplaceDialog->objectName().isEmpty())
            FindReplaceDialog->setObjectName("FindReplaceDialog");
        FindReplaceDialog->resize(454, 92);
        findNextButton = new QPushButton(FindReplaceDialog);
        findNextButton->setObjectName("findNextButton");
        findNextButton->setGeometry(QRect(240, 20, 80, 24));
        replaceButton = new QPushButton(FindReplaceDialog);
        replaceButton->setObjectName("replaceButton");
        replaceButton->setGeometry(QRect(240, 50, 80, 24));
        replaceAllButton = new QPushButton(FindReplaceDialog);
        replaceAllButton->setObjectName("replaceAllButton");
        replaceAllButton->setGeometry(QRect(330, 50, 80, 24));
        caseCheckBox = new QCheckBox(FindReplaceDialog);
        caseCheckBox->setObjectName("caseCheckBox");
        caseCheckBox->setGeometry(QRect(10, 20, 101, 22));
        widget = new QWidget(FindReplaceDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 20, 110, 56));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        findLineEdit = new QLineEdit(widget);
        findLineEdit->setObjectName("findLineEdit");

        verticalLayout->addWidget(findLineEdit);

        replaceLineEdit = new QLineEdit(widget);
        replaceLineEdit->setObjectName("replaceLineEdit");

        verticalLayout->addWidget(replaceLineEdit);


        retranslateUi(FindReplaceDialog);

        QMetaObject::connectSlotsByName(FindReplaceDialog);
    } // setupUi

    void retranslateUi(QDialog *FindReplaceDialog)
    {
        FindReplaceDialog->setWindowTitle(QCoreApplication::translate("FindReplaceDialog", "Dialog", nullptr));
        findNextButton->setText(QCoreApplication::translate("FindReplaceDialog", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        replaceButton->setText(QCoreApplication::translate("FindReplaceDialog", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        replaceAllButton->setText(QCoreApplication::translate("FindReplaceDialog", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\262\321\201\321\221", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "\320\242\320\276\321\207\320\275\321\213\320\271 \320\277\320\276\320\270\321\201\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindReplaceDialog: public Ui_FindReplaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDREPLACEDIALOG_H
