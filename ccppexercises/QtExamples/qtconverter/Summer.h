//
//  Summer.h
//  qtconverter
//
//  Created by Tim on 11/16/14.
//
//
#include <QObject>

class Summer : public QObject {
    Q_OBJECT
public:
    Summer(){
        x = 0;
        y = 0;
    }

    int x, y, result;

public slots:
    void setX(int);
    void setY(int);

signals:
    void adder(int value);
};


