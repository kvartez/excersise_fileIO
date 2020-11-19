
#include <iostream>
#include <string>
#include <bitset>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int zero(int var, int nr) {
    return ((~(0b1 << nr)) & var);
}


int main()
{
    ifstream file;
    ofstream file2;
    file.open("co.txt");
    file2.open("outit.txt");
    int l1,l2;
    if (file.good())
    {
        while (!file.eof()) {
            file >> l1 >> l2;
            file2 << zero(l1, l2)<<endl;
            cout << zero(l1, l2)<<endl;
        }
        
    }
    

    file.close();
    file2.close();
    

    return 0;
}

