#include <QtGui/QApplication>
#include <QLabel>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("Usage: lcd-test-qt <test image>\n");
		return -1;
	}

	QApplication a(argc, argv);

	QImage myImage;
	myImage.load(argv[1]);

	QLabel myLabel;
	myLabel.setFixedSize(QSize(640, 480));
	myLabel.setPixmap(QPixmap::fromImage(myImage));
	myLabel.setWindowFlags(Qt::CustomizeWindowHint);

	myLabel.show();

	return a.exec();
}
