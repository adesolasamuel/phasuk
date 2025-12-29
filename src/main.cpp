// phasuk is the hebrew translation of verses. phasuk gives you random verses from the new testament
// USAGE
// phasuk: random verse from all of the new testament
// phasuk Jesus: a random word of Jesus Christ

#include <string>
#include <iostream>
#include "BibleVerse.h"

BibleVerse bibleapp;

void help()
{
    std::cout << "phasuk\n";
    std::cout << "phasuk Jesus - words of christ\n";
}

int main(int argc, char *argv[])
{

    // Reading Bible and Writing Bible
    // Main Engine here

    try
    {
        if (argc <= 2)
        {
            if (static_cast<std::string>(argv[1]) == "help")
            {
                help();
            }
            else if (static_cast<std::string>(argv[1]) == "Jesus")
            {
                bibleapp.redText();
            }
            else
            {
                help();
            }
        }
        else
        {
            help();
        }
    }
    catch (std::logic_error &e)
    {
        if (argc == 1)
        {
            bibleapp.all();
        }
        else
        {
            help();
        }
    }

    return 0;
}
