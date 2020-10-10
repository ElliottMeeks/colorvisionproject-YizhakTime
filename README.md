Red/Green Colorblindness Simulation
## Description
Get the red, green and blue color values from the user and store those values in a text file. 

The user will be directed to GIMP, where they will retrieve the RGB color values from an image file on the program

Since the values are from 0 - 255, there will be if statements and a do while loop to correct users if they input invalid responses

## Developer
Yizhak Cohen

## Example

To run the program, give the following commands:
 do {
  cout << "Open a file and upload it to GIMP.\n";
  cout << "Inspect one pixel and its RGB value.\n";
  cout << "Then, display it. Repeat. \n";
  cout << "What is the file? \n";
  getline(cin, file);

  reader.open(file, ios::out);

  if (!reader.fail()) {
    do {
    cout << "Input RGB values (0-255): \n";
    cin >> red;
    cin >> green;
    cin >> blue;
      if ((red < 0 || green < 0 || blue < 0) || (red > 255 || green > 255 || blue > 255 )) {
        cout << "Invalid values. Please input correct values. \n";
      }
  } while ((red < 0 || green < 0 || blue < 0) || (red > 255 || green > 255 || blue > 255));
   reader <<"The RGB values are " << red << ", " << green << ", " << green << endl;

  }


Here is an example of the program running:
Open a file and upload it to GIMP. 
Inspect one pixel and its RGB value. 
Then, display it. Repeat. 
What is the file?
file.text
Input RGB values (0-255):
4
5
6
Examine another file (y/n)?
n

## C++ Guide

### Variables and Data Types
I created variables with the data type of "int" for the RGB values because they are only whoe numbers. 

I used "char" with the variable name decision to allow the user the chance to create another text file to write the RGB values and they are represented with the 'Y' and 'y'.

### Input and Output
I used input and output by printing the message "Error. Please input the correct RGB values." at the do-while loop.

### Decisions
I have made decision suing if and else where I chose to have the file opened with a "!.fail()" to inspect if the file could be open. If it cannot open, then there is an else of that option, which outputs the message "Error."

### Iteration
I made iterations in the form of do-while loops which I checked whether the RGB values are from (0-255). If they are not within the (0-255) range, then an error message appears and requires the user to input the correct RGB values

### File Input and Output
I had the ofstream aspect of the fstream class where the user gets to write the RGB values to a file. Since the user are writing to a file, I used the .open() and the .close () to open and close the file.