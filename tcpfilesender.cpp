#include "tcpfilesender.h"

TcpFileSender::TcpFileSender(QWidget *parent)
    : QDialog(parent)
{}

TcpFileSender::~TcpFileSender() {}
void TcpFileSender::start()
{
    loadSize = 1024 * 4;
    totalBytes = 0;
    bytesWritten = 0;
    bytesToWrite = 0;
    clientProgressBar = new QProgressBar;
    clientStatusLabel = new QLabel(tr("客戶端就緒"));
    startButton = new QPushButton(tr("開始"));
    quitButton = new QPushButton(tr("退出"));
    openButton = new QPushButton(tr("開檔"));
    startButton->setEnabled(false);
    buttonBox = new QDialogButtonBox;
    buttonBox->addButton(startButton,QDialogButtonBox::ActionRole);
}
void TcpFileSender::startTransfer()
{

}
void TcpFileSender::updateClientProgress(qint64 numBytes)
{

}
void TcpFileSender::openFile()
{

}
