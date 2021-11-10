#ifndef GENKEYBLOGIC_H
#define GENKEYBLOGIC_H

#include <QObject>

class GenKeybLogic : public QObject
{
    Q_OBJECT
public:
    explicit GenKeybLogic(QObject *parent = nullptr);
    void doCommand(QString s);
    QString getText();
signals:
    void dispChanged(QString);
private:
    QString Text;
};

#endif // GENKEYBLOGIC_H
