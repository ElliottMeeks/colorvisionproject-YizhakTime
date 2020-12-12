#include "filecolor.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::hex;
using std::fstream;

filecolor::filecolor() {

}

void filecolor::convertToDecimal(vector <string> & list) { 
  //This function takes in a vector of strings and adds these elements to a new vector where it only takes the 6 chars after the pound (#) sign which is the whole hexadecimal value
  vector <string> record;
  vector <int> newOrder;

  for (int i = 0; i < list.size(); i++) {
    record.push_back(list[i].substr(1,7));
  }

  //afterwards the elements of the vector is created into a vector of integers where the hexadecimals are converted into decimals and pushed into a vector of integers
  for (int i = 0; i < record.size(); i++) {
    long int value = strtol(record[i].c_str(), NULL, 16);
    newOrder.push_back(value);
  }
    updateList(newOrder);
    //the vector of integers is passed into a function called updateList

}


vector <string> filecolor::updateList(vector <int> & list) {
  //This function passes in a vector of integers called list which contain base-10 (i.e. decimal) numbers
  //elements of this vector are added by a number which changes the elements of the vector

  for (int i = 0; i < list.size(); i++) {
    result = list[i] + conversionNumber;
    newList.push_back(result);
  }

  //then the integers are converted into a hexadecimal using the hex function and stringstream and are pushed back into a vector of strings

  for (int i = 0; i < newList.size(); i++) {
    stringstream ss;
    ss << hex << newList[i];
    word = ss.str();
    listOfHexadecimals.push_back(word);
  }   
   

  for (int i = 0; i < listOfHexadecimals.size(); i++) {
    cout << listOfHexadecimals[i] << endl;
  }

  //then the elements of vector is displayed and returned

  return listOfHexadecimals;
}

vector <string> filecolor::showList() {

//the purpose of this function is to return the vector called listOfHexadecimals to allow it be equal the vector called list which is in the main.cpp which will be used to write to a file

return listOfHexadecimals;
}




