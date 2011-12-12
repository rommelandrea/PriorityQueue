/* 
 * File:   ThePriorityQueue.h
 * Author: Andrea Romanello
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char * string;

void add(string, int);

string first();
string removeFirst();

void changePriority(int, int);
void display();