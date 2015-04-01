#include "quixo.h"
#include "ui_quixo.h"
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QPixmap>
#include "piece.h"

Quixo::Quixo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Quixo)
{
    ui->setupUi(this);
    QGraphicsScene * ma_scene;
    ma_scene = new QGraphicsScene();
    Piece * mon_item;
    for (int j=0; j<5; ++j){
        for (int i=0;i<5;++i){
            mon_item = new Piece();
            mon_item-> setPos(i*45, j*45);
            ma_scene->addItem(mon_item);
        }
    }
    ui->vuePrincipale->setScene(ma_scene);
}

Quixo::~Quixo()
{
    delete ui;
}

void Quixo::on_boutonQuitter_clicked()
{
    this->close();
}
