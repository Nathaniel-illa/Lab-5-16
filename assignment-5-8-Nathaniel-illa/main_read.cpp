#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Open the file in read mode
    std::ifstream inFile("students.txt");

    if (!inFile) {
        std::cerr << "Error opening file for reading.\n";
        return 1;
    }

    // Read the number of students from the first line
    int numStudents;
    inFile >> numStudents;
    inFile.ignore(); // Ignore the newline character after the number of students

    // Read and process each student's data
    for (int i = 0; i < numStudents; ++i) {
        std::string name;
        double score1, score2;

        // Read the name (assuming names do not contain spaces)
        std::getline(inFile, name, ' ');

        // Read the two scores
        inFile >> score1 >> score2;
        inFile.ignore(); // Ignore the newline character after the scores

        // Calculate total and average
        double total = score1 + score2;
        double average = total / 2;

        // Print the student's information
        std::cout << "Student Name: " << std::setw(10) << std::left << name
                  << "score1: " << std::setw(6) << std::right << score1
                  << "score2: " << std::setw(6) << std::right << score2
                  << "Sum: " << std::setw(6) << std::right << total
                  << "Avg: " << std::fixed << std::setprecision(2) << average
                  << std::endl;
    }

    // Close the file
    inFile.close();

    return 0;
}