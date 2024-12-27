#include <QApplication>
#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QPen>
#include <QBrush>

class DrawingWidget : public QWidget {
Q_OBJECT
public:
    DrawingWidget(QWidget *parent = nullptr) : QWidget(parent) {
        setFixedSize(400, 400);
    }

    QPoint startPoint;
    QList<QRect> rectanglesList;

    void paintEvent(QPaintEvent *event) {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);

        for (const QRect& rect : rectanglesList) {
            painter.setPen(QPen(Qt::red, 3, Qt::DashLine));
            painter.setBrush(QBrush(Qt::green));
            painter.drawRect(rect);
        }
    }

    void mousePressEvent(QMouseEvent *event)  {
        if (event->button() == Qt::RightButton) {
            startPoint = event->pos();
        }
    }

    void mouseReleaseEvent(QMouseEvent *event)  {
        if (event->button() == Qt::RightButton) {
            QRect rect(startPoint, event->pos());
            rectanglesList.append(rect); // Добавляем прямоугольник в список

            update();
        }
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    DrawingWidget widget;
    widget.show();

    return QApplication::exec();
}

#include "main.moc"