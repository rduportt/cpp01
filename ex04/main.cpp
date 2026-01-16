#include <iostream>
#include <fstream>
#include <bits/stdc++.h>


int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "./replace filename s1 s2\n";
        return 0;
    }
    std::string filename = argv[1];
    std::string filein;


    std::ifstream inputFile(filename.c_str());
    char buff;
    if (inputFile.is_open())
    {
        while (inputFile.get(buff))
            filein += buff;
        inputFile.close();
    }
    else
        std::cout << "mauvais filename\n";
    std::cout << "Old file : \n" << filein << "\n\n";
    std::string outputFilname = filename + ".replace";
    std::ofstream outputFile(outputFilname.c_str());
    std::string fileout;
    size_t found = 0;
    size_t pos = 0;
    std::cout << "\n=================================\n";
    while ((found = filein.find(argv[2], pos)) != std::string::npos)
    {
        fileout.append(filein, pos, found - pos);
        fileout.append(argv[3]);
        pos = found + strlen(argv[2]);
    }
    fileout.append(filein, pos, filein.length() - pos);
    outputFile << fileout;
    std::cout << "New file : \n" << fileout << "\n"; 
    outputFile.close();
}
