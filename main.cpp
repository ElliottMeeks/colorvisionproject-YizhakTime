#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int red, green, blue;
  char decision;
  string file;
  fstream reader; 

  do {
  cout << "Open a file and upload it to GIMP.\n";
  cout << "Inspect one pixel and its RGB value.\n";
  cout << "Then, display it. Repeat. \n";
  cout << "What is the file? \n";
  getline(cin, file);

  reader.open(file, ios::out);

  if (!reader.fail()) {
    cout << "What are the RGB values? ";
    cin >> red; 
    cin >> green;
    cin >> blue;
    
    do {
      cout << "Error\n";
    } while (red < 0 && 255 < red && green < 0 && 255 < green && blue < 0 && 255 < blue );

    reader <<"The RGB values are " << red << ", " << green << ", " << blue<< endl;
  }
  else {
      cout << "Could not open file." << endl;
  }


  cout << "Examine another file (y/n)?" << endl;
  cin >> decision;
  cin.ignore();
  reader.close();
  } while(decision == 'Y' || decision == 'y');

  return 0;
}
  //rgb values?
  //open up program in gimp
  //Pick which pixel to inspect
  //Process and look up rgb value
  //output rbg value
  //Output color and say where it may affect with other colors. gimp 2.0