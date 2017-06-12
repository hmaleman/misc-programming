/**
 * File io basics
 * - include <fstream> //includes file stream handle lib 
 * - ofstream myfile;  //for writing to a file
 * - ifstream myfile;  //for reading a file
 * - fstream myfile;   //for reading and writing a file 
 * - myfile.open("fname");  //opens file called fname
 * - myfile.close("fname"); //closes file called fname
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int readFile()
{
    string line;
    //create an input stream to write to the file
    ifstream myfileO ("input.txt");
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }
    
    else cout << "Unable to open file for reading";
}

int main () {
    //create an output stream to write to the file
    //ios:app - append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    readFile();
    
    //rw input.tx
    fstream myfile("input.txt");
    if(myfile.is_open())
    {
        myfile << "Replace char sequence and erases endl also";
        myfile << endl;
        myfile.close();
    }
    else cout << "Unable to open file for writing";

    readFile();
    return 0;  
}

