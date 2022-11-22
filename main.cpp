#include <iostream>
#include <string>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// class
class Calculate {
private:
    int x;
    int y;
    double a;
public:
    Calculate();
    int getX();
    int getY();
    int getA();

    void setX(int x);
    void setY(int y);
    void setA(int a);

    int add(int x, int y);
    int sub(int x, int y);
    double div(double x, double y);
    int mult(int x, int y);

    void print();
    void userInput();
};
// default constructor
Calculate::Calculate() {
    x = 0;
    y = 0;
    a = 0;
}

// getters
int Calculate::getX() { return x; }
int Calculate::getY() { return y; }
int Calculate::getA() { return a; }
// setters
void Calculate::setX(int x) { x = x; }
void Calculate::setY(int y) { y = y; }
void Calculate::setA(int a) { a = a; }
// algorithms
int Calculate::add(int x, int y) {
    a = x + y;
    return a;
}
int Calculate::sub(int x, int y) {
    a = x - y;
    return a;
}
double Calculate::div(double x, double y) {
    a = x / y;
    return a;
}
int Calculate::mult(int x, int y) {
    a = x * y;
    return a;
}

void Calculate::print() {
    cout << a << endl;
}

void Calculate::userInput() {
    // defining variables
    int uX; // user x
    int uY; // user y
    char uO; // user operator

    cout << "Input an integer: ";
    cin >> uX;
    cout << "Input a second integer: ";
    cin >> uY;
    cout << "Input an operator ('+', '-', '/', '*'): ";
    cin >> uO;

    switch (uO) {
        case '+':
            add(uX, uY);
            print();
            break;
        case '-':
            sub(uX, uY);
            print();
            break;
        case '/':
            div(uX, uY);
            print();
            break;
        case '*':
            mult(uX, uY);
            print();
            break;
        case 'q':
            exit(1); // exits
    }
}

int main() {
    // simple calculator using classes
    Calculate o;
    char cont = ' ';

    while (cont != 'n') {
        o.userInput();
        cout << "Continue (y/n)? ";
        cin >> cont;
    }
    
}