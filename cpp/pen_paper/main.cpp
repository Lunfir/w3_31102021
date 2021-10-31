#include <iostream>

#include "paper.h"
#include "pen.h"

int main()
{
    Pen pen(7);
    Paper paper(100);

    std::string message = "Hello, world!";
    
    try
    {
        pen.write(paper, message);
        pen.write(paper, message.substr(paper.getSymbols(), message.size()));
        paper.show();
    } 
    catch (OutOfInk exc)
    {
        pen.refill();
        pen.write(paper, message.substr(paper.getSymbols(), message.size()));
        paper.show();
    }

    return 0;
}
