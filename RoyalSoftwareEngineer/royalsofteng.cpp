#include "royalsofteng.h"

void RoyalSoftEng::readInputFile(std::string fileName)
{
    try
    {
        std::fstream readFile;
        readFile.open(fileName);
        std::string currentLine;
        std::pair<std::string, std::string> currentPair;

        while(std::getline(readFile, currentLine))
        {
            std::size_t comma = currentLine.find(",");
            std::string symbolOne = currentLine.substr(0, comma);
            std::string symbolTwo = currentLine.substr(comma + 1);

            currentPair.first = symbolOne;
            currentPair.second = symbolTwo;

            addToMap(currentPair);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void RoyalSoftEng::sortSymbols()
{
    try
    {
        bool added = true;
        SymbolMap::iterator it = mainMap.begin();
        addToList(it->first);
        addToList(it->second);
        it++;
        SymbolMap::iterator itTemp = it;
        
        while(added == true)
        {
            it = itTemp;
            added = false;
            while(it != mainMap.end())
            {
                if(it->first == mainList[mainList.size() - 1])
                {
                    addToList(it->second);
                    added = true;
                }

                it++;
            }
        }
        
        added = true;
        while(added == true)
        {
            SymbolMap::iterator newIt = mainMap.begin();
            added = false;
            while(newIt != mainMap.end())
            {
                if(newIt->second == mainList[0])
                {
                    mainList.insert(mainList.begin(), newIt->first);
                    added = true;
                }

                newIt++;
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void RoyalSoftEng::displayList()
{
    for(auto const& next : mainList)
    {
        std::cout << next << std::endl;
    }
}

void RoyalSoftEng::addToMap(SymbolPair toAdd)
{
    mainMap.insert(toAdd);
}

void RoyalSoftEng::addToList(Symbol toAdd)
{
    mainList.push_back(toAdd);
}