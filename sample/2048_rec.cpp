/*
    Given a number print its digits spelled out
*/

#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <map> 
using namespace std;

map<int, string> i2s; 
string coll = "";


void spell(int x){
    if(x == 0) return;
    spell(x/10);
    coll += i2s[x%10] + " ";
}

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;

    i2s[0] = "zero";
    i2s[1] = "one";
    i2s[2] = "two";
    i2s[3] = "three";
    i2s[4] = "four";
    i2s[5] = "five";
    i2s[6] = "six";
    i2s[7] = "seven";
    i2s[8] = "eight";


    spell(x);
    cout << coll << "\n";

    return 0;
}
