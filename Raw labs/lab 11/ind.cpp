#include <QApplication>
#include <QFrame>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <QString>
#include <set>
#include <iostream>

using namespace std;
class CalculatorFrame : public QFrame {
Q_OBJECT

    QLabel *label;
    QLabel *label1;
    QLabel *label2;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QLabel *resultLabel;
    QPushButton *calculateButton;

public: CalculatorFrame() {
        setWindowTitle("CalcUlator");
        setMinimumSize(200,200);

        label = new QLabel("CalcUlator", this);
        label->setFont(QFont("Trebuchet MS", 16));//:Р—

        label1 = new QLabel("РњРЅРѕР¶РµСЃС‚РІРѕ 1", this);
        lineEdit1 = new QLineEdit(this);

        label2 = new QLabel("РњРЅРѕР¶РµСЃС‚РІРѕ 2", this);
        lineEdit2 = new QLineEdit(this);

        resultLabel = new QLabel("Р РµР·СѓР»СЊС‚Р°С‚: ", this);

        calculateButton = new QPushButton("Р’С‹С‡РёСЃР»РёС‚СЊ", this);

        QVBoxLayout *mainLayout = new QVBoxLayout;
        mainLayout->addWidget(label);
        mainLayout->addWidget(label1);
        mainLayout->addWidget(lineEdit1);
        mainLayout->addWidget(label2);
        mainLayout->addWidget(lineEdit2);
        mainLayout->addWidget(calculateButton);
        mainLayout->addWidget(resultLabel);

        setLayout(mainLayout);

        connect(calculateButton, &QPushButton::clicked, this, &CalculatorFrame::onCalculate);
    }

public slots: void onCalculate() {
        set<int> digits1, digits2;
        stringstream ss1(lineEdit1->text().toStdString()), ss2(lineEdit2->text().toStdString());
        int num;

        while (ss1 >> num) {
            digits1.insert(num);
        }

        while (ss2 >> num) {
            digits2.insert(num);
        }

        string result;
        for (int digit : digits1) {
            if (digits2.find(digit) == digits2.end()) {
                result.push_back('0' + digit);
                result.push_back(' ');
            }
        }
        for (int digit : digits2) {
            if (digits1.find(digit) == digits1.end()) {
                result.push_back('0' + digit);
                result.push_back(' ');
            }
        }
            resultLabel->setText("Р РµР·СѓР»СЊС‚Р°С‚: " + QString::fromStdString(result));
    }


};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    CalculatorFrame window;
    window.show();

    return app.exec();
}

#include "main.moc"