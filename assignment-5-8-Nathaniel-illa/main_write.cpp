#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   // Ask the user for the number of students
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    // Open the file in write mode
    std::ofstream outFile("students.txt");
    
    if (!outFile) {
        std::cerr << "Error opening file for writing.\n";
        return 1;
    }

    // Write the number of students to the file
    outFile << numStudents << std::endl;

    // Loop to get student information and write it to the file
    for (int i = 0; i < numStudents; ++i) {
        std::string name;
        double score1, score2;

        std::cout << "Enter name of student " << (i + 1) << ": ";
        std::cin.ignore(); // To ignore leftover newline character in the buffer
        std::getline(std::cin, name);

        std::cout << "Enter first score of student " << (i + 1) << ": ";
        std::cin >> score1;

        std::cout << "Enter second score of student " << (i + 1) << ": ";
        std::cin >> score2;

        // Write student data to file
        outFile << name << " " << score1 << " " << score2 << std::endl;
    }

    // Close the file
    outFile.close();

    std::cout << "Data has been written to students.txt" << std::endl;

}