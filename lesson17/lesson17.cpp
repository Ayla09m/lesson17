#include <iostream>
#include <conio.h>  

using namespace std;


void task1() {
    cout << "\ntask1" << endl;

    char c;
    for (int i = 0; i < 8; i++) {
        while (true) {
            c = _getch();
            if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
                _putch(' ');
            }
            else {
                _putch(c);
            }
            break;
        }
    }
}

void task2() {
    cout << "\ntask2" << endl;

    char ch;
    for (int i = 0; i < 8; i++) {
        while (true) {
            ch = _getch();

            if (ch == '\r') {
                _putch('\n');
            }

            if (islower(ch)) {
                _putch(toupper(ch));
            }
            else if (isupper(ch)) {
                _putch(tolower(ch));
            }
            else {
                _putch(ch);
            }
            break;
        }
    }
}
int main() {
    task1();  
    task2();  

    return 0;
}


