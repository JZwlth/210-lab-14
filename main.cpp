// COMSC-210 | Lab 14 | Zhaoyi Zheng
#include <iostream>
#include <iomanip>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    void setRed(int r);
    void setGreen(int g);
    void setBlue(int b);

    int getRed() const;
    int getGreen() const;
    int getBlue() const;

    void print() const;
};

void Color::setRed(int r) { red = r; }
void Color::setGreen(int g) { green = g; }
void Color::setBlue(int b) { blue = b; }

int Color::getRed() const { return red; }
int Color::getGreen() const { return green; }
int Color::getBlue() const { return blue; }

void Color::print() const {
    cout << "Color(R=" << setw(5) << red 
         << ", G=" << setw(5) << green 
         << ", B=" << setw(5) << blue << ")" << endl;
}

int main() {
    Color color1(255, 0, 0);    // Red
    Color color2(0, 255, 0);    // Green
    Color color3(0, 0, 255);    // Blue
    Color color4(128, 128, 128);// Gray

    color1.print();
    color2.print();
    color3.pr