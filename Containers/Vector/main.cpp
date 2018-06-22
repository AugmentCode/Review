/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dangerouspirate
 *
 * Created on June 22, 2018, 11:07 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

class Vector{
private:
    int *arr;
    int cIndx;
    int size;
public:
    Vector();
    ~Vector();
    void insert(int);
    void deleteVal(int);
    int getValue(int);
    int get_num_filled() const {return cIndx;}
};

//Constructor
Vector::Vector(){
    size = 10;
    arr = new int[size];
    cIndx = 0;
}

//Destructor
Vector::~Vector(){
    delete[] arr;
}

//Inserts value onto the vector
void Vector::insert(int inVal){
    if(cIndx <= size){
        arr[cIndx++] = inVal;
    }else{
        int *temp = new int[++size];
        for(int i = 0; i < size - 1; i++)
            temp[i] = arr[i];
        temp[cIndx++] = inVal;
        
        delete[] arr;
        
        arr = new int[size];
        
        for(int i = 0; i < size; i++)
            arr[i] = temp[i];
        
        delete[]temp;
    }
}

//Returns a value within index
int Vector::getValue(int indx){
    if(indx > size - 1){
        cout<<"\nError: Index has exceeded the Vector's size of "<<size<<endl;
    }else{
        return arr[indx];
    }
    return 0;
}

//
void Vector::deleteVal(int inVal){
    
    for(int i = 0; i < size; i++)
        if(inVal == arr[i]){
            int *temp = new int[--size];
            for(int j = 0; j < size; j++)
                if(j != i)
                    temp[j] = arr[j];
                
            
            delete[] arr;
            arr = temp;
            delete[] temp;
        }
    
}
int main(int argc, char** argv) {
    Vector v;
    
    v.insert(1);
    v.insert(2);
    v.insert(3);
    v.insert(4);
    v.insert(5);
    v.insert(6);
    v.insert(7);
    v.insert(8);
    v.insert(9);
    v.insert(10);
    v.insert(11);

    
    for(int i = 0; i < v.get_num_filled(); i++)
        cout<<i<<" -> "<<v.getValue(i)<<endl;
    return 0;
}

