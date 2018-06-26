/* 
 * File:   main.cpp
 * Author: dangerouspirate
 * Purpose: Demonstrates the uses of Bitwise Operators
 * Created on June 26, 2018, 12:17 AM
 */

#include <cstdlib>
#include <iostream>
#include <climits>

using namespace std;

/*
 *                         Unsigned Integer Types
 * -----------------------------------------------------------------------------     
 *      unsigned char = 8 bits            Range: [0, 255]
 *      unsigned short = 16 bits          Range: [0, 65,535]
 *      unsigned int = 32 bits            Range: [0, 4,294,967,295]
 *      unsigned long long = 64 bits      Range: [0, 18,446,744,073,709,551,615]
 */

/*
 *                           Bitwise Shift Operators
 * -----------------------------------------------------------------------------
 *      Left Shift Operator:  <<   X<<Y         ALL BITS IN X SHIFT LEFT Y BITS
 *      Right Shift Operator: >>   X>>Y         ALL BITS IN X SHIFT RIGHT Y BITS
 *      NOT Operator:         ~     ~X          FLIPS ALL THE BITS
 *      AND Operator:         &     X&Y         EACH BIT IN X AND IN Y
 *      OR  Operator:         |     X|Y         EACH BIT IN X OR IN Y
 *      XOR Operator:         ^     X^Y         EACH BIT IN X XOR IN Y
 */

/*
 *                       Example of Left Shift Operator
 * -----------------------------------------------------------------------------
 *  3 = 0011
 *  3<<1 = 0110 = 6
 *  3<<2 = 1100 = 12
 *  3<<3 = 1000 = 8          <--- The FIRST 1 is now LOST FOREVER
 */

/*
 *                        Example of Right Shift Operator
 * -----------------------------------------------------------------------------
 * 12 = 1100
 * 12>>1 = 0110 = 6
 * 12>>2 = 0011 = 3
 * 12>>3 = 0001 = 1           <--- The LAST 1 is now LOST FOREVER
 */

int main(int argc, char** argv) {
    unsigned int num1 = 3, temp;
    
    cout<<"*************************************************************"<<endl
        <<"*            LEFT SHIFT DEMONSTRATION (multiply BY 2)       *"<<endl
        <<"*************************************************************"<<endl
        <<endl;
    
    cout<<"Let Integer = "<<num1<<endl<<endl;
    
    temp = num1<<1;
    cout<<num1<<"<<1: "<<temp<<endl;
    
    temp = num1<<2;
    cout<<num1<<"<<2: "<<temp<<endl;
    
    temp = num1<<3;
    cout<<num1<<"<<3: "<<temp<<endl;
    
    temp = num1<<4;
    cout<<num1<<"<<4: "<<temp<<endl;
    
    cout<<"\n\nSee how each time the integer gets MULTIPLIED by 2 "
        <<"when LEFT SHIFTED\n\n";
    
    
    cout<<"*************************************************************"<<endl
        <<"*            RIGHT SHIFT DEMONSTRATION (divide BY 2)        *"<<endl
        <<"*************************************************************"<<endl
        <<endl;
    
    num1 = num1<<4;
    
    cout<<"Let Integer = "<<num1<<endl<<endl;
    
    temp = num1>>1;
    cout<<num1<<">>1: "<<temp<<endl;
    
    temp = num1>>2;
    cout<<num1<<">>2: "<<temp<<endl;
    
    temp = num1>>3;
    cout<<num1<<">>3: "<<temp<<endl;
    
    temp = num1>>4;
    cout<<num1<<">>4: "<<temp<<endl;
    
    cout<<"\n\nSee how each time the integer gets DIVIDED by 2 "
        <<"when LEFT SHIFTED\n\n";
    
    
    cout<<"*************************************************************"<<endl
        <<"*    Bitwise NOT Operator DEMONSTRATION (FLIPS the bits)    *"<<endl
        <<"*************************************************************"<<endl
        <<endl;
    
    num1 = 0x00000000010;
    unsigned int num2 = 0x0000FFFF;

    
    cout<<"\nInteger = "<<num1<<endl;
    
    cout<<"\n~BinaryValue = "<<~num1<<endl;
    
    cout<<"\nMax of int = "<<INT_MAX<<endl;
    
    temp = ~num1;
    
    cout<<endl<<INT_MAX<<" - "<<temp<<" = "<<(INT_MAX - temp)<<endl;
    return 0;
}

