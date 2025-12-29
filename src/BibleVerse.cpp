#include "BibleVerse.h"
#include <time.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <map>
#include <limits>
#include <iostream>

BibleVerse::BibleVerse()
{
}

std::fstream &BibleVerse::GotoLine(std::fstream &file, unsigned int num)
{
    file.seekg(std::ios::beg);
    for (int i = 0; i < num - 1; ++i)
    {
        file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return file;
}

void BibleVerse::all()
{
    readBible.open("Bible/BibleNewTestament.txt", std::ios::in);
    if (readBible.is_open())
    {
        srand(time(NULL));
        BibleVerse::GotoLine(readBible, 1 + rand() % 7957);
        std::getline(readBible, verse);
        std::cout << verse << "\n";
    }
    else
    {
        std::cout << "Could not read Bible Verses" << std::endl;
    }
}

void BibleVerse::redText()
{
    readBible.open("Bible/BibleNewTestamentRedText.txt", std::ios::in);
    if (readBible.is_open())
    {
        srand(time(NULL));
        BibleVerse::GotoLine(readBible, 1 + rand() % 53);
        std::getline(readBible, verse);
        std::cout << verse << "\n";
    }
    else
    {
        std::cout << "Could not read Bible Verses" << std::endl;
    }
}

BibleVerse::~BibleVerse()
{
    readBible.close();
}
