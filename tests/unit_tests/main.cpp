#include <QApplication>
#include <QTest>
#include <iostream>

#include "release.h"
#include "testcases/app/test_htmlentities.h"
#include "testcases/app/test_metricsservice.h"
#include "testcases/app/test_network.h"
#include "testcases/app/test_notes.h"
#include "testcases/app/test_utilsmisc.h"
#include "version.h"

// tests
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QCoreApplication::setOrganizationDomain("PBE");
    QCoreApplication::setOrganizationName("PBE");
    QCoreApplication::setApplicationName("QOwnNotesTests");
    QCoreApplication::setApplicationVersion(QString(VERSION) + " " +
                                            QString(RELEASE));

    int allTestsResult = 0 + QTest::qExec(new TestNotes(), argc, argv) +
                         QTest::qExec(new TestHTMLEntities(), argc, argv) +
                         QTest::qExec(new TestMetricsService(), argc, argv) +
#if !defined(Q_OS_LINUX) || (QT_VERSION > QT_VERSION_CHECK(5, 7, 0))
                         // TLS checks fail on GitHub Actions for Linux Qt <= 5.7
                         QTest::qExec(new TestNetwork(), argc, argv) +
#endif
                         QTest::qExec(new TestUtilsMisc(), argc, argv);

    if (allTestsResult == 0)
        qDebug() << "[Tests PASS]";
    else
        qDebug() << "[Tests FAIL]";

    return (allTestsResult != 0) ? 1 : 0;
}
