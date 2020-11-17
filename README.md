Red/Green Colorblindness Simulation
## Description
The objective of this project is read in a file and collect hexadecimal colors. 

Once, these colors are retrieved, they will be processed into a function wheere their values will change based on the colorblindness, in this case, red-green colorblindness. 

What this entails is that the colors values will be decreased by a certain amount (i.e. Decrease red by 10%)

Then these colors will be placed back into a new file where they will result into a new file where the user can compare the previous file and the new file and compare them

## Developer
Yizhak Cohen

## Example

To run the program, give the following commands:

  else {
      vector <string> list;

      while (!file.eof()) {
        getline(file, word);
        int number = 0;


          do {
            number = word.find("#", number);
            if (number >= 0 && number < word.size()) {
              string color = word.substr(number, 7);
              number++;
              list.push_back(color);               
            }
          } while (number != -1 && number < word.size());   
      }
  }

## Sample output

Here is an example of the program running:

Open file
file.text
#00abcf
#000000
Examine another file (y/n)?
n

## C++ Guide

### Variables and Data Types
I took careful consideration in choosing my variables. For example, I had to decide which variable to use to get the '#' character from reading the file. I could have used a char data type to read from the file but I had to take into account on which method to grab values from the file. I decided to use string find which requires a string variable, the reason I used string in my first function. 

### Input and Output
I used input and output by printing the message "Error," when the file could not be opened, so the user can see that the file does not exist. 

### Decisions
I have made decisions regarding opening a file because I have to consider the possiblity that the file cannot be opened. In that case, I made an if and else condition where if it fails, then it couts the message "Error". If the file does exist then, the program continues, hence the else condition. 

### Iteration
My iterations came in the form of do-while where I used them to repeat asking the user for the file if they want to enter a new file or they accidentally wrote a wrong name. This allows the program to continously ask for a new file to open.   

### File Input and Output
Since I want to read in a file, then I want to use the class called fstream which allows to write and read to the file. However, since I needed to read words from the file, I used the file functions like file.open() and file.close() to access and close the file. 

### Vectors/Arrays
I have used vectors to store string values such as the hexadecimal values because if I had just stored them into one string variable, then they will be only useful for displaying all the color values but not for storing the string values because the variable will only take in the latest color value. So, I used a vector of strings to store these hexadecimal values using push_back() method. As a result, I could display the vector contents or pass them into another function if needed. 

### Functions
I used functions because they save space and provide smoother functionality. For example, I used a function called findChar without any parameters and a return type because it is locating the hexadecimal values and storing them in a list. 