#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

const int N = 100;

bool if_cube(int number)
{
    for(int x = 1; x <= 100; x++)
        if (x*x*x == number)
        return true;
        return false;
}

int main() {

    ifstream file1("ciagi.txt");
    ofstream file2("wynik2.txt");

    file2 << "Najwieksze: " << endl;

        for(int c = 0; c < N; c++) {
            int length;
            file1 >> length;
            int  = 0;
                for(int i = 0; i < length; i++) {
                    int number;
                    file1 >> number;
                        if (if_cube(number))
                            v = number;
                }
            if (v>0)
                file2 << v << endl;
        }
}
