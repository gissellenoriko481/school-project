#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Alice";
    int age = 25;
    bool isStudent = true;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Is student: " << (isStudent ? "yes" : "no") << endl;

    return 0;
}
