#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

const int MAX = 100;

// Parallel Arrays
string names[MAX];
int ages[MAX];
string diseases[MAX];
string doctors[MAX];
string priority[MAX]; 

int patientCount = 0;

// Logic to automatically assign priority
string setPriority(string disease) {
    if(disease == "heart" || disease == "accident" || disease == "emergency")
        return "High";
    else if(disease == "fever" || disease == "flu")
        return "Medium";
    else
        return "Low";
}

void addPatient() {
    system("cls");
    if (patientCount >= MAX) {
        cout << "Hospital is at full capacity!" << endl;
        getch();
        return;
    }

    cout << "===== Add Patient =====\n";
    cout << "Enter Name: ";
    cin >> names[patientCount];

    cout << "Enter Age: ";
    cin >> ages[patientCount];

    cout << "Enter Disease (heart/accident/fever/other): ";
    cin >> diseases[patientCount];

    cout << "Enter Doctor Name: ";
    cin >> doctors[patientCount];

    priority[patientCount] = setPriority(diseases[patientCount]);

    patientCount++;

    cout << "\nPatient Added Successfully! Priority set to: " << priority[patientCount-1] << endl;
    getch();
}

void viewPatients() {
    system("cls");
    cout << "===== All Patients =====\n";

    if (patientCount == 0) {
        cout << "No records found." << endl;
    } else {
        for(int i = 0; i < patientCount; i++) {
            if(names[i] != "") {
                cout << "\nPatient ID: " << i + 1 << endl;
                cout << "Name: " << names[i] << " | Age: " << ages[i] << endl;
                cout << "Disease: " << diseases[i] << " | Doctor: " << doctors[i] << endl;
                cout << "Priority Status: " << priority[i] << endl;
                cout << "-----------------------" << endl;
            }
        }
    }
    getch();
}

void searchPatient() {
    system("cls");
    string search;
    bool found = false;

    cout << "Enter Patient Name to Search: ";
    cin >> search;

    for(int i = 0; i < patientCount; i++) {
        if(names[i] == search) {
            cout << "\nRecord Found!\n";
            cout << "Name: " << names[i] << "\nAge: " << ages[i] << "\nDisease: " << diseases[i] << endl;
            found = true;
        }
    }

    if(!found) cout << "Patient Not Found!\n";
    getch();
}

void updatePatient() {
    system("cls");
    string search;
    bool found = false;

    cout << "Enter Name to Update: ";
    cin >> search;

    for(int i = 0; i < patientCount; i++) {
        if(names[i] == search) {
            cout << "Current Disease: " << diseases[i] << ". Enter New Disease: ";
            cin >> diseases[i];
            cout << "Enter New Doctor: ";
            cin >> doctors[i];

            priority[i] = setPriority(diseases[i]);
            cout << "Updated Successfully!\n";
            found = true;
        }
    }

    if(!found) cout << "Patient Not Found!\n";
    getch();
}

void deletePatient() {
    system("cls");
    string search;
    bool found = false;

    cout << "Enter Name to Delete: ";
    cin >> search;

    for(int i = 0; i < patientCount; i++) {
        if(names[i] == search) {
            names[i] = ""; // Logic to "hide" the record
            cout << "Deleted Successfully!\n";
            found = true;
        }
    }

    if(!found) cout << "Patient Not Found!\n";
    getch();
}

void sortByPriority() {
    // Basic sorting logic: Moves "High" priority to the top
    for(int i = 0; i < patientCount; i++) {
        for(int j = i+1; j < patientCount; j++) {
            if(priority[j] == "High" && priority[i] != "High") {
                swap(names[i], names[j]);
                swap(ages[i], ages[j]);
                swap(diseases[i], diseases[j]);
                swap(doctors[i], doctors[j]);
                swap(priority[i], priority[j]);
            }
        }
    }
    cout << "Patients sorted by emergency level (High Priority first)!\n";
    getch();
}

void adminMenu() {
    int choice;
    while(true) {
        system("cls");
        cout << "===== Admin Panel =====\n";
        cout << "1. View Patients\n2. Search Patient\n3. Update Patient\n4. Delete Patient\n5. Sort by Priority\n6. Logout\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1) viewPatients();
        else if(choice == 2) searchPatient();
        else if(choice == 3) updatePatient();
        else if(choice == 4) deletePatient();
        else if(choice == 5) sortByPriority();
        else if(choice == 6) break;
        else {
            cout << "Invalid Choice!\n";
            getch();
        }
    }
}

void adminLogin() {
    string user, pass;
    system("cls");
    cout << "===== Admin Login =====\n";
    cout << "Enter Username: ";
    cin >> user;
    cout << "Enter Password: ";
    cin >> pass;

    if(user == "admin" && pass == "123") {
        adminMenu();
    } else {
        cout << "Wrong Credentials!\n";
        getch();
    }
}

int main() {
    int choice;
    while(true) {
        system("cls");
        cout << "===== Hospital Management System =====\n";
        cout << "1. Add Patient\n2. Admin Login\n3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1) addPatient();
        else if(choice == 2) adminLogin();
        else if(choice == 3) break;
        else {
            cout << "Invalid Option!\n";
            getch();
        }
    }
    return 0;
}