#include <iostream>
#include <string>
using namespace std;

int main() {
    // Credentials
    string correctUser = "admin";
    string correctPass = "1234";

    // Storage Arrays
    string usernameAttempts[3];
    string studentNames[3];
    int studentAges[3];
    string courses[3];

    // System Variables
    int studentCount = 0;
    int courseCount = 0;
    bool loggedIn = false;
    string inputUser, inputPass;

    // 1. Login Logic
    for (int i = 0; i < 3; i++) {
        cout << "Enter Username: ";
        cin >> inputUser;
        cout << "Enter Password: ";
        cin >> inputPass;

        usernameAttempts[i] = inputUser;

        if (inputUser == correctUser && inputPass == correctPass) {
            loggedIn = true;
            cout << "Login Successful!" << endl;
            break;
        } else {
            cout << "Invalid credentials. Attempt " << i + 1 << " of 3." << endl;
        }
    }

    // 2. Main Menu Logic
    if (loggedIn) {
        int choice;
        while (true) {
            cout << "\n--- University Management System ---" << endl;
            cout << "1. Add Student" << endl;
            cout << "2. View Students" << endl;
            cout << "3. Add Course" << endl;
            cout << "4. View Courses" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 1) {
                if (studentCount < 3) {
                    cout << "Enter Student Name: ";
                    cin >> studentNames[studentCount];
                    cout << "Enter Student Age: ";
                    cin >> studentAges[studentCount];
                    studentCount++;
                } else {
                    cout << "Student limit reached!" << endl;
                }
            } 
            else if (choice == 2) {
                cout << "\n--- Student List ---" << endl;
                for (int i = 0; i < studentCount; i++) {
                    cout << i + 1 << ". Name: " << studentNames[i] << ", Age: " << studentAges[i] << endl;
                }
            } 
            else if (choice == 3) {
                if (courseCount < 3) {
                    cout << "Enter Course Name: ";
                    cin >> courses[courseCount];
                    courseCount++;
                } else {
                    cout << "Course limit reached!" << endl;
                }
            } 
            else if (choice == 4) {
                cout << "\n--- Course List ---" << endl;
                for (int i = 0; i < courseCount; i++) {
                    cout << i + 1 << ". " << courses[i] << endl;
                }
            } 
            else if (choice == 5) {
                cout << "Exiting system. Goodbye!" << endl;
                break;
            } 
            else {
                cout << "Invalid option!" << endl;
            }
        }
    } else {
        cout << "Access Denied. Too many failed attempts." << endl;
    }

    return 0;
}