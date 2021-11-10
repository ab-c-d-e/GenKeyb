#include "genkeyblogic.h"

GenKeybLogic::GenKeybLogic(QObject *parent) : QObject(parent)
{
    Text="";
}
void GenKeybLogic::doCommand(QString s)
{
    Text+=s;
    emit dispChanged(Text);
}
QString GenKeybLogic::getText()
{
    return Text;
}
