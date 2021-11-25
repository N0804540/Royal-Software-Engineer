#ifndef ROYALSOFTENG_H
#define ROYALSOFTENG_H

#include <map>
#include <vector>
#include <utility>
#include <string>
#include <iostream>
#include <fstream>

class RoyalSoftEng
{
    public:
        using Symbol = std::string;
        using SymbolMap = std::map<Symbol, Symbol>;
        using SymbolPair = std::pair<std::string, std::string>;
        using SymbolList = std::vector<std::string>;

        void readInputFile(std::string fileName);
        void sortSymbols();
        void displayList();
        void addToMap(SymbolPair);
        void addToList(Symbol);
        
        RoyalSoftEng() = default;
        
    private:
        SymbolMap mainMap;
        SymbolList mainList;
};

#endif