//File Name: main.cpp
//Author: George Gesite
//Activity 5 CPE 411 Embedded System
//Started 28/10/22
//Description: Checksum C++ Implementation Program 
#ifndef CHECKSUM_H
#define CHECKSUM_H
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//enter prototypes
string Ones_complement(string data);
string checkSum(string data, int block_size);
bool checker(string sent_message, string rec_message, int block_size);
#endif
