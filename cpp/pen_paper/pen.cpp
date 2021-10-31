#include "pen.h"


Pen::Pen(int inkCapacity)
{
    this->inkCapacity = inkCapacity;
    this->refill();
}

Pen::~Pen()
{

}

int Pen::getInkAmount() const
{
    return this->inkAmount;
}

int Pen::getInkCapacity() const
{
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message)
{
    if (this->inkAmount == 0)
    {
        throw OutOfInk();
    }

    if (this->inkAmount < message.size())
    {
        paper.addContent(message.substr(0, this->inkAmount));
        this->inkAmount = 0;

        return;
    }

    paper.addContent(message);
    this->inkAmount -= message.size();
}

void Pen::refill()
{
    this->inkAmount = this->inkCapacity;
}