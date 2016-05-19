#ifndef BROWSER
#define BROWSER

#include <QWebPage>
#include <QWebView>
class browserQWebPage : public QWebPage {
	Q_OBJECT
  public:
  	browserQWebPage();
    void javaScriptConsoleMessage(const QString & message, int lineNumber, const QString & sourceID);
};

class browser : public QObject {
    Q_OBJECT
    QWebView webView;
    browserQWebPage qweb;
    char *randomNum;
    public:
        browser(char *);
    public slots:
        void finishedloading();
};
#endif
