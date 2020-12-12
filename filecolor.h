//HEADER file (interface) for filecolor class
#ifndef FILECOLOR_H //Pre-processor directives
#define FILECOLOR_H
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

using std::cout;
using std::string;
using std::vector;

class filecolor{
  private:
    int conversionNumber = 1057828;
    int result;
    string word;
    vector <int> newList;
    vector <string> listOfHexadecimals;


  public:
    // constructor
    filecolor();
    void convertToDecimal(vector <string> & list);
    vector <string> updateList(vector <int> &list);
    vector <string> showList();
    //void writeToFile(vector <string> &list);
};

#endif