#pragma once
#include <fstream>
#include <string>
#include <vector>

class BibleVerse
{
public:
    std::fstream readBible;
    std::string verse;
    BibleVerse();
    std::fstream &GotoLine(std::fstream &file, unsigned int num);

    void all();
    void redText();

    ~BibleVerse();
};
