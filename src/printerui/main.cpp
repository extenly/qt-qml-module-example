#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.addImportPath(QUrl(QLatin1String("./plugins/")).toString());
    const QUrl url(QStringLiteral("./main.qml"));

    engine.load(url);

    return app.exec();
}
