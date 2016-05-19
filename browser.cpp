#include <QWebFrame>
#include <QFileInfo>
#include <iostream>
#include <QApplication>
#include <fstream>
#include <string>

#include "browser.h"

browserQWebPage::browserQWebPage() {
}

void browserQWebPage::javaScriptConsoleMessage(const QString & message, int lineNumber, const QString & sourceID) {
    std::cout<<message.toUtf8().constData()<<"\n";
}

browser::browser(char *num) {
    randomNum = num;
    std::string r(randomNum);
    std::string s("p" + r + ".html");
    webView.setPage(&qweb);
    webView.load(QUrl::fromLocalFile(QFileInfo(s.c_str()).absoluteFilePath()));
    
    QObject::connect(&webView, SIGNAL(loadFinished(bool)),
                     this, SLOT(finishedloading()));
}

void browser::finishedloading() {
  std::string line;
  std::string finalStr;
	std::ifstream infile;
  std::string r(randomNum);
  std::string s("c" + r + ".txt");
	infile.open(s.c_str());
	while(std::getline(infile, line)) {
		finalStr.append(line);
    finalStr.append("\n");
  }
  infile.close();
  webView.page()->mainFrame()->evaluateJavaScript(finalStr.c_str());
  exit(0);
}

int main(int argc, char **argv) {
	QApplication app(argc, argv);
	browser h(argv[1]);
	return app.exec();
}
