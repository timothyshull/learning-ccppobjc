#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QLabel>
//#include <QObject>
#include "Summer.h"

void Summer::setX(int a){
    x = a;
    result = x + y;
    emit adder(result);
}

void Summer::setY(int b){
    y = b;
    result = x + y;
    emit adder(result);
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    QWidget *window = new QWidget;
    window->setWindowTitle("Widget Interaction");
    
    QLabel *label = new QLabel("");
    label->setText("Please enter a lower limit: ");
    label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label->setAlignment(Qt::AlignBottom | Qt::AlignRight);

    QSpinBox *spinBox = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);
    spinBox->setRange(0, 1000);
    slider->setRange(0, 1000);
    
    QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spinBox, SLOT(setValue(int)));
    spinBox->setValue(35);

    QLabel *label2 = new QLabel("");
    label2->setText("Please enter an upper limit: ");
    label2->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label2->setAlignment(Qt::AlignBottom | Qt::AlignRight);

    QSpinBox *spinBox2 = new QSpinBox;
    QSlider *slider2 = new QSlider(Qt::Horizontal);
    spinBox2->setRange(0, 1000);
    slider2->setRange(0, 1000);

    QObject::connect(spinBox2, SIGNAL(valueChanged(int)),
                     slider2, SLOT(setValue(int)));
    QObject::connect(slider2, SIGNAL(valueChanged(int)),
                     spinBox2, SLOT(setValue(int)));
    spinBox2->setValue(55);

    Summer *summer1 = new Summer;

    QObject::connect(slider, SIGNAL(valueChanged(int)), summer1, SLOT(setX(int)));
    QObject::connect(slider2, SIGNAL(valueChanged(int)), summer1, SLOT(setY(int)));

    QLabel *sumLabel = new QLabel("");
    QObject::connect(summer1, SIGNAL(adder(int)), sumLabel, SLOT(setNum(int)));

    sumLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    sumLabel->setAlignment(Qt::AlignBottom | Qt::AlignCenter);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(label);
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    layout->addWidget(label2);
    layout->addWidget(spinBox2);
    layout->addWidget(slider2);
    layout->addWidget(sumLabel);
    window->setLayout(layout);
    
    window->show();
    
    return app.exec();
}



