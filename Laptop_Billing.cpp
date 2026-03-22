#include <iostream>

using namespace std;

// global variable that are use to increase the index number
int a = 0;

// class are use to specify the data types about laptop
class Laptop_Specification {
public:
    string brand[50];
    string model[50];
    int ram[50];
    string hard_drive[50];
    int hard_drive_size[50];
    int price[50];
};

// function declared
void Get_Laptop_Specification(Laptop_Specification &L);
void Print_Bill(Laptop_Specification L);

// main function
int main() {
    int n = 0;
    Laptop_Specification L[50];

    do {
        Get_Laptop_Specification(L[a]);
        Print_Bill(L[a]);
        a++;

        cout << endl;
        cout << "Press 1 to Repeate";
        cin >> n;
    } while (n == 1);

    return 0;
}

// This Function are use to get specification to the user
void Get_Laptop_Specification(Laptop_Specification &L) {
    cout << "Laptop Brand= ";
    cin >> L.brand[a];

    cout << "Laptop Model=";
    cin >> L.model[a];

    cout << "Laptop Ram= ";
    cin >> L.ram[a];

    cout << "Laptop Hard Drive Type= ";
    cin >> L.hard_drive[a];

    cout << "Laptop Hard_Drive Size= ";
    cin >> L.hard_drive_size[a];

    cout << "Price= ";
    cin >> L.price[a];
}

// function are use to print the bill
void Print_Bill(Laptop_Specification L) {
    cout << endl << endl;
    cout << "-------------------------------------" << endl;
    cout << "       Ibrahim Laptop Expo           " << endl;
    cout << endl << endl;

    cout << "  Laptop Brand= "           << L.brand[a]             << endl;
    cout << "  Laptop Model="             << L.model[a]             << endl;
    cout << "  Laptop Ram Size= "         << L.ram[a]               << " GB" << endl;
    cout << "  Laptop Hard Drive Name= "  << L.hard_drive[a]        << endl;
    cout << "  Laptop Hard_Drive Size= "  << L.hard_drive_size[a]   << " GB" << endl;
    cout << endl;

    cout << "  Total Bill= "              << L.price[a]             << endl;
    cout << endl;

    cout << "  wwww.Ibrahim-Laptop-Expo.com" << endl;
    cout << "-------------------------------------" << endl;
    cout << endl;
}