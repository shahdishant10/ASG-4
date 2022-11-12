/**
    CS-700 Assignment 3
    @file HEADER.h
    @author Dishant Shah
    @date 8th November 2022
*/

#pragma once
#include<iostream> //for including input-output stream to display output to console.
#include<time.h>  //for saving time required to compute particular function(e.g. clock_t).
#include<vector>  //for declaring vector and using vector functions.
#include <algorithm> //for using the algorithm header for filling random values in vector.
#include <fstream>   //for using file stream for reading and writing file.
#include<iomanip>   //for output the data with precision.


using namespace std;


/**
    @brief This function writes a vector in an output file.
    @param variableone Vector to be written in the file.
    @param variabletwo Name of the file.
    @author Dishant Shah
*/
void save_output(vector<int> vec, string fname);


/**
    @brief This function is used for reading the data from an input file and storing in the vector.
    @param variableone Name of the file.
    @return Vector with data.
    @author Dishant Shah
*/
vector<int> read_vector(string fname);


/**
    @brief This function swaps the values of the two integers.
    @param variableone First integer.
    @param variabletwo Second integer.
    @author Dishant Shah
*/
void swap(int& a, int& b);


/**
    @brief This function sorts the vector in ascending order.
    @param variableone Vector to be sorted.
    @author Dishant Shah
*/
void ShakerSort_AscendingOrder(vector<int>& vec);


/**
    @brief This function sorts the vector in descending order.
    @param variableone Vector to be sorted.
    @author Dishant Shah
*/
void ShakerSort_DescendingOrder(vector<int>& vec);
