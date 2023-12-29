#include "bidder.h"
#include "ui_bidder.h"

Bidder::Bidder(const std::string& name, Auctioner& auct, QWidget *parent) :
    QWidget(parent), Observer {name},
    ui(new Ui::Bidder),
    auct {auct}
{
    ui->setupUi(this);
    auct.Register(this);
}

Bidder::~Bidder()
{
    delete ui;
}
