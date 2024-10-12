C++ Data Types
Last Updated : 23 Sep, 2023
All variables use data type during declaration to restrict the type of data to be stored. Therefore, we can say that data types are used to tell the variables the type of data they can store. Whenever a variable is defined in C++, the compiler allocates some memory for that variable based on the data type with which it is declared. Every data type requires a different amount of memory. 

C++ supports a wide variety of data types and the programmer can select the data type appropriate to the needs of the application. Data types specify the size and types of values to be stored. However, storage representation and machine instructions to manipulate each data type differ from machine to machine, although C++ instructions are identical on all machines.

C++ supports the following data types:

Primary or Built-in or Fundamental data type
Derived data types
User-defined data types
Data Types in C++

Data Types in C++ are Mainly Divided into 3 Types: 
1. Primitive Data Types: These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char, float, bool, etc. Primitive data types available in C++ are: 

Integer
Character
Boolean
Floating Point
Double Floating Point
Valueless or Void
Wide Character
2. Derived Data Types: Derived data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. These can be of four types namely: 

Function
Array
Pointer
Reference
3. Abstract or User-Defined Data Types: Abstract or User-Defined data types are defined by the user itself. Like, defining a class in C++ or a structure. C++ provides the following user-defined datatypes:  

Class
Structure
Union
Enumeration
Typedef defined Datatype
Primitive Data Types
Integer: The keyword used for integer data types is int. Integers typically require 4 bytes of memory space and range from -2147483648 to 2147483647.  
Character: Character data type is used for storing characters. The keyword used for the character data type is char. Characters typically require 1 byte of memory space and range from -128 to 127 or 0 to 255.  
Boolean: Boolean data type is used for storing Boolean or logical values. A Boolean variable can store either true or false. The keyword used for the Boolean data type is bool. 
Floating Point: Floating Point data type is used for storing single-precision floating-point values or decimal values. The keyword used for the floating-point data type is float. Float variables typically require 4 bytes of memory space. 
Double Floating Point: Double Floating Point data type is used for storing double-precision floating-point values or decimal values. The keyword used for the double floating-point data type is double. Double variables typically require 8 bytes of memory space. 
void: Void means without any value. void data type represents a valueless entity. A void data type is used for those function which does not return a value. 
Wide Character:
Wide character
data type is also a character data type but this data type has a size greater than the normal 8-bit data type. Represented by wchar_t. It is generally 2 or 4 bytes long.
sizeof() operator:
sizeof() operator
is used to find the number of bytes occupied by a variable/data type in computer memory.
Example:


int m , x[50];     


cout<<sizeof(m); //returns 4 which is the number of bytes occupied by the integer variable “m”.  


cout<<sizeof(x); //returns 200 which is the number of bytes occupied by the integer array variable “x”.     

The size of variables might be different from those shown in the above table, depending on the compiler and the computer you are using.

C++
// C++ Program to Demonstrate the correct size
// of various data types on your computer.
#include <iostream>
using namespace std;
 
int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
 
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
 
    cout << "Size of double : " << sizeof(double) << endl;
 
    return 0;
}
