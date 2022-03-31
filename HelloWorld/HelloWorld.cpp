// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Git\n \n";

    int iVal1 = -1;
    short shVal2 = 0;
    int iVal3 = -2;

    
    std::cout << "iVal1 = ";
    std::cout << iVal1;
    std::cout << "\n shVal2 =";
    std::cout << shVal2;
    std::cout << "\niVal3 = " << iVal3;

    std::cout << "\n \n memory location of iVal1 = ";
    std::cout << &iVal1;
    std::cout << "\n \n memory location of shVal2 = " << &shVal2;
    std::cout << "\n \n memory location of iVal3 = " << &iVal3;

    std::cout << "\n sizeof(iVal1) = " << sizeof(iVal1);
    std::cout << "\n Diff for v1 and v3 is  " << (&iVal1 - &iVal3);

    int* ptr = NULL; //* = variable is a pointer , pointer is better to use NUll
    ptr = &iVal1;
    std::cout << "\n value of ptr = " << ptr;
    std::cout << "\n address of ptr = " << &ptr;
    *(ptr - 4) = 18;
    std::cout << "\n \n value pointed to by ptr is: " << *(ptr - 8);
    int* ptr2 = &iVal1;
    

    //*ptr = 3;
    //std::cout << "\n Value of iVal = " << iVal1;
    
    std::cout << "\n\n **** end of   prg***"; //Last line

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
