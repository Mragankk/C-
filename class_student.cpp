//creating class of a students and displaying them 
#include <iostream>
#include<string>
#include<fstream>
class Students {
public:
  int year;
  int rollNo;
  std::string name;
  std::string Class;
  int totalMarks;

 void input() {
        std::cout << "Enter Roll No.: ";
        std::cin >> rollNo;
        std::cout << "Enter Name: ";
        std::cin >> name;
        std::cout << "Enter Total Marks: ";
        std::cin >> totalMarks;
        std::cout << "Enter Class: ";
        std::cin >> Class;
        std::cout << "Enter Year: ";
        std::cin >> year;
    }
  void display() {
    std::cout << "Roll no.:  " << rollNo << " Name: " << name << "class: "<<Class<< "year: "<< year <<"total marks: " << totalMarks << std::endl;
  }
};
int main () {
// Here we'll store our class in a file
  Student students[5];
  std::ofstream outputFile("students.txt");
  if (outputFile) {
    for (int i = 0; i<5; ++i) {
        students[i].input();
        outputFile << students[i].rollNo << " " << students[i].name << " " << students[i].className << " " << students[i].year << " " << students[i].totalMarks << std::endl;
    }
    outputFile.close();
  } else {
      std::cerr << "!!! dikkat aarhi hai !!!" << std::endl;
      return 1;
  }
   // Retrieve and display the records from the file
    std::ifstream inputFile("students.txt");
    if (inputFile) {
        for (int i = 0; i < 5; ++i) {
            inputFile >> students[i].rollNo >> students[i].name >> students[i].className >> students[i].year >> students[i].totalMarks;
            students[i].display();
        }
        inputFile.close();
    } else {
        std::cerr << "Error: Unable to open file..." << std::endl;
        return 1;
    }

    return 0;
}
