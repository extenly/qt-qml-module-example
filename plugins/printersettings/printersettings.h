#ifndef PRINTERSETTINGS_H
#define PRINTERSETTINGS_H

#include <QtCore/QObject>

class PrinterSettings : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool printerOn READ printerOn WRITE setPrinterOn NOTIFY printerOnChanged)

public:
    explicit PrinterSettings(QObject *parent = nullptr);
    ~PrinterSettings();

    void setPrinterOn(bool printerIsOn);
    bool printerOn() const;

signals:
    void printerOnChanged();

private:
    bool m_printerOn;
};

#endif // PRINTERSETTINGS_H
