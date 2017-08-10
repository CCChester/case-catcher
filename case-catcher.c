/*********************************************** 
 * Name: Chen Chen
 * Student ID: 20518383
 * File: case-catcher.c 
 * CS 136 Fall 2014 - Assignment 6, Problem 0b
 * Description: 
***********************************************/
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
// is_sentence_case(str) determines if uppercase letters only occur at the beginning 
// of str or immediately after a period. Moreover, only uppercase letters or a NULL 
// terminator can follow a period.  Note these are NOT the same as the actual grammar
// rules for capitalization!  You should always follow the interface you are given
// even if it seems to be "wrong"!
// 
// PRE:  str is not NULL and str is NULL terminated
// POST: returns true if uppercase letters only occur at the beginning of str or 
//       immediately after a period and if periods are immediately followed by an 
//       uppercase letter or a NULL terminator, otherwise false.
#include <stdio.h>
#include <stdbool.h>
bool is_sentence_case(char str[]){
    int len=1;
    while (str[len]) {
            if (str[len] >= 65 && str[len] <= 90){
                if (str[len-1]=='.') {
                    if (str[len]>=65 || str[len]<=90){
                        return true;
                    }
                    return false;
                }
                return false;}
        ++len;
    }
    return true;
}


