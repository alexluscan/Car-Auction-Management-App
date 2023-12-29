#ifndef BIDDER_H
#define BIDDER_H

#include <QWidget>
#include "Observer.h"
#include "auctioner.h"


namespace Ui {
class Bidder;
}

class Bidder : public QWidget, public Observer
{
    Q_OBJECT

public:
     explicit Bidder(const std::string& name, Auctioner& auct, QWidget *parent = nullptr);
    ~Bidder();
    virtual void Update() override;
private:
    Ui::Bidder *ui;
    Auctioner& auct;
};

#endif // BIDDER_H
