                                //CodeAlpha_CgpaCalculator//
#include <iostream>
#include <vector>
#include <iomanip> 

int main() {
    int numCourses;
    std::cout << "Enter the number of courses: ";
    std::cin >> numCourses;

    double totalCredits = 0.0;
    double totalGradePoints = 0.0;

    for (int i = 1; i <= numCourses; ++i) {
        double gradePoints; 
        double creditHours;

        std::cout << "\n--- Course " << i << " ---" << std::endl;
        std::cout << "Enter grade points : ";
        std::cin >> gradePoints;
        std::cout << "Enter credit hours: ";
        std::cin >> creditHours;

        totalCredits += creditHours;
        totalGradePoints += (gradePoints * creditHours);

        std::cout << "Course " << i << " Grade: " << gradePoints << ", Credits: " << creditHours << std::endl;
    }

    if (totalCredits > 0) {
        double cgpa = totalGradePoints / totalCredits;
        std::cout << std::fixed << std::setprecision(2); 
        std::cout << "\n----------------------" << std::endl;
        std::cout << "Overall CGPA: " << cgpa << std::endl;
        std::cout << "Total Credits: " << totalCredits << std::endl;
    } else {
        std::cout << "\nNo courses entered. Cannot calculate CGPA." << std::endl;
    }

    return 0;
}
