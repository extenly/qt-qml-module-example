#include "printersettings.h"

PrinterSettings::PrinterSettings(QObject *parent)
    :QObject(parent)
    , m_printerOn(false)
{

}

PrinterSettings::~PrinterSettings()
{

}

void PrinterSettings::setPrinterOn(bool printerIsOn)
{
    if (m_printerOn != printerIsOn) {
        m_printerOn = printerIsOn;
        emit printerOnChanged();
    }
}

bool PrinterSettings::printerOn() const
{
    return m_printerOn;
}
