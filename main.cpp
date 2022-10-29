// File Name: main.cpp
// Author: George Gesite
// Activity 5 CPE 411 Embedded System
// Started 28/10/22
// Description: CRC C++ Implementation Program 

// To compile this from the command line we would use:
// g++ -o main.exe main.cpp includes/crc.cpp
// To run this code in commande line, we use:
// ./main.exe

#include <iostream>
#include <bits/stdc++.h>
#include "includes/crc.h"
using namespace std;

int main() 
{   
    //Driver Code for Cyclic Redundancy Check
    getdata();
    sender_side();
    receiver_side();
    return 0;
}
