#include <iostream>
#include <string>
#include <fstream>
#include "TextQuery.hpp"

int main(int argc, char **argv) {
    if (argc <= 1) {
        throw std::runtime_error("not input file");
    }
    //std::ifstream inputFile = std::ifstream(argv[1]); // not to copy a stream 
    std::ifstream inputFile(argv[1]);
    TextQuery tq(inputFile);
    //TextQuery tq(std::ifstream(argv[1]));             // TextQuery(&is), but discards the unmane-ifstreamObj
    while (true) {
        std::cout << "enter word to look for, or q to quit: ";
        std::string s;
        if (!(std::cin >> s) || s == "q") break;
        print(std::cout, tq.query(s)) << std::endl;
    }
    return 0;
}
