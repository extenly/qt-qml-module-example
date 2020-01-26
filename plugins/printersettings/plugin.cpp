#include <QtQml/qqmlextensionplugin.h>
#include <QtQml>
#include "printersettings.h"

class PrinterSettingsPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
    void registerTypes(const char *uri) override
    {
        Q_ASSERT(QLatin1String(uri) == QLatin1String("com.org.printersettings"));

        qmlRegisterType<PrinterSettings>(uri, 1, 0, "PrinterSettings");
    }
};

#include "plugin.moc"
