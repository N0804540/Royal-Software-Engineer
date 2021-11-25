#include "royalsofteng.h"

int main(int argc, char** argv)
{
    RoyalSoftEng royal;
    std::string filePath(argv[1]);
    royal.readInputFile(filePath);
    royal.sortSymbols();
    royal.displayList();
}