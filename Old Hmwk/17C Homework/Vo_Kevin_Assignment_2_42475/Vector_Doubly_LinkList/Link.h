/* 
 * File:   Link.h
 * Author: Kevin Vo
 * Assignment: Assignment 2
 * Purpose: Doubly linked list that is un\sorted as you add data
 * Course: CSC-17C (42475)
 * Created on March 27, 2018, 1:59 PM
 */

#ifndef LINK_H
#define LINK_H
template <class T>
struct Link{
    T data;
    Link *linkPtr;
    Link *prev;
};


#endif /* LINK_H */

