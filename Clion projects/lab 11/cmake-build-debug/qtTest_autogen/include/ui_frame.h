/********************************************************************************
** Form generated from reading UI file 'frame.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_H
#define UI_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName("Frame");
        Frame->resize(359, 189);
        pushButton = new QPushButton(Frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 150, 75, 23));
        label = new QLabel(Frame);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 111, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Trebuchet MS")});
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(Frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 71, 16));
        label_3 = new QLabel(Frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 71, 16));
        lineEdit = new QLineEdit(Frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 50, 113, 20));
        lineEdit_2 = new QLineEdit(Frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(90, 100, 113, 20));

        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QCoreApplication::translate("Frame", "Frame", nullptr));
        pushButton->setText(QCoreApplication::translate("Frame", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Frame", "CalcUlator", nullptr));
        label_2->setText(QCoreApplication::translate("Frame", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 1", nullptr));
        label_3->setText(QCoreApplication::translate("Frame", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_H
