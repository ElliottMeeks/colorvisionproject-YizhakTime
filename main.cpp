#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "filecolor.h"
using namespace std;

void findChar();

int main() {
  findChar();

  return 0;
}

void findChar() {
  fstream file;
  string filename;
  string word;
  char response;
  filecolor shade; 

  
  do {
  cout << "Open file\n";
  getline(cin, filename);
  //allows user to enter file name

  file.open(filename);
    if (file.fail()) {
      cout << "Could not open file\n";
    }
    else {
      vector <string> list;

      while (!file.eof()) {
      //this eof() function tells if it reaches the end of the file and since it is reversed with !, it means it hasn't reached the end of the file which is true
        getline(file, word);
        int number = 0;
        //file is read from the beginning and number = 0
          do {
            number = word.find("#", number);
            //finds whenever there is a"#" and loops increasing the value of i so that the starting position isn't always at 0
            if (number >= 0 && number < word.size()) {
              string color = word.substr(number, 7);
            //word.erase(number,7);
            //grab a line and find color
            //cout out and replace it
            //store it in vector and write to new file
              number++;
              list.push_back(color); 
              //adds the hexadecimal color values as strings to a vector of strings           
            }
          } while (number != -1 && number < word.size());   
      }
       shade.convertToDecimal(list);

    list = shade.showList();
    file.clear();
    //create to new file - > output and colors
    //store the whole line

  string name;
  ofstream filewriter;
  cout << "Enter file to write\n";
  cin >> name;

  filewriter.open (name);

  for (int i = 0; i < list.size(); i++) {
    filewriter << list[i] << endl;
    // Writing to a new file the hexadecimals
  }

  //closing the file
  filewriter.close();

    }

    cout << "Open another file?" << endl;
    cin >> response;
    cin.ignore();
    file.close();    

  } while(response == 'Y' || response == 'y');
} 






