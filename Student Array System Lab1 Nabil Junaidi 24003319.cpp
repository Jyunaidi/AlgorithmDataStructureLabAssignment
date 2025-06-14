/* 
Name: Nabil Junaidi Bin Jais
ID: 24003319
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    string contact;
    string email;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> students[i].id;
        cin.ignore();  // Clear newline after ID input

        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "Contact: ";
        getline(cin, students[i].contact);

        cout << "Email: ";
        getline(cin, students[i].email);
    }

    cout << "\nStudent Data:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Contact: " << students[i].contact << endl;
        cout << "Email: " << students[i].email << endl;
    }

    return 0;
}