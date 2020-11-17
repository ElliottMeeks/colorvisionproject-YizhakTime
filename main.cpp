#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void findChar();
void convertToDecimal(vector <string> & list);

int main() {
  findChar();

  return 0;
}

void findChar() {
  fstream file;
  string filename;
  string word;
  char response;
  
  do {
  cout << "Open file\n";
  getline(cin, filename);
  //allows user to enter file name

  file.open(filename, ios::in);
    if (file.fail()) {
      cout << "Could not open file\n";
    }

    else {
      vector <string> list;

      while (!file.eof()) {
        getline(file, word);
        int number = 0;
        //file is read from the beginning and number = 0

          do {
            number = word.find("#", number);
            //finds whenever there is a"#" and loops increasing the value of i so that the starting position isn't always at 0
            if (number >= 0 && number < word.size()) {
              string color = word.substr(number, 7);
              number++;
              list.push_back(color);               
            }
          } while (number != -1 && number < word.size());   
      }
      convertToDecimal(list);
    }
    
    cout << "Open another file?" << endl;
    cin >> response;
    cin.ignore();
    file.close();

  } while(response == 'Y' || response == 'y');
} 

void convertToDecimal(vector <string> & list) {  
  vector <string> record;

  for (int i = 0; i < list.size(); i++) {
    record.push_back(list[i].substr(1,7));
  }

  for (int i = 0; i < record.size(); i++) {
    long int value = strtol(record[i].c_str(), NULL, 16);
    cout << value << endl;
  }
}







