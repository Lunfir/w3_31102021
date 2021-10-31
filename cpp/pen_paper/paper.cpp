#include "paper.h"

#include <string>


Paper::Paper(int maxSymbols)
{
    this->maxSymbols = maxSymbols;
    this->symbols = 0;
}

Paper::~Paper()
{
}

int Paper::getMaxSymbols() const
{
    return this->maxSymbols;
}

int Paper::getSymbols() const
{
    return this->symbols;
}

void Paper::addContent(const std::string& message)
{
    // На заполненный лист бумаги невозможно ничего записать.
    if (this->symbols == this->maxSymbols)
    {
        throw OutOfSpace();
    }

    // Если на лист бумаги невозможно поместить все сообщение,
    //  необходимо записать столько символов, сколько может вместить лист.
    int freeSymbols = this->maxSymbols - this->symbols;
    if (message.size() > freeSymbols)
    {
        this->content.append(message.substr(0, freeSymbols));
        this->symbols = content.size();

        return;
    }

    this->content.append(message);
    this->symbols = content.size();
}

void Paper::show() const
{
    std::cout << this->content << std::endl;
}