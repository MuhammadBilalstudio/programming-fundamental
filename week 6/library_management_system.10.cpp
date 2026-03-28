#include <iostream>
#include <string>
using namespace std;

int main() {
    string books[10];
    bool isBorrowed[10];
    int bookCount = 0;
    int choice;

    while (true) {
        cout << "\n--- Library Management System ---" << endl;
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Books" << endl;
        cout << "4. View Borrowed Status" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (bookCount < 10) {
                cout << "Enter book title: ";
                cin.ignore();
                getline(cin, books[bookCount]);
                isBorrowed[bookCount] = false;
                bookCount++;
                cout << "Book added successfully!" << endl;
            } else {
                cout << "Library is full!" << endl;
            }
        } 
        else if (choice == 2 || choice == 4) {
            cout << "\n--- Book List ---" << endl;
            for (int i = 0; i < bookCount; i++) {
                cout << i + 1 << ". " << books[i] << " [" 
                     << (isBorrowed[i] ? "Borrowed" : "Available") << "]" << endl;
            }
        } 
        else if (choice == 3) {
            string searchTitle;
            cout << "Enter book title to borrow: ";
            cin.ignore();
            getline(cin, searchTitle);

            bool found = false;
            for (int i = 0; i < bookCount; i++) {
                if (books[i] == searchTitle) {
                    if (!isBorrowed[i]) {
                        isBorrowed[i] = true;
                        cout << "You have borrowed: " << searchTitle << endl;
                    } else {
                        cout << "Book is already borrowed!" << endl;
                    }
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Book not found!" << endl;
        } 
        else if (choice == 5) {
            cout << "Exiting system..." << endl;
            break;
        } 
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
