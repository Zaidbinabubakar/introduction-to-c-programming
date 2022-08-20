/* # C++ Get Started
To start using C++, you need two things:

A text editor, like Notepad, to write C++ code
A compiler, like GCC, to translate the C++ code into a language that the computer will understand
There are many text editors and compilers to choose from. In this tutorial, we will use an IDE (see below).

# C++ Install IDE
An IDE (Integrated Development Environment) is used to edit AND compile the code.

Popular IDE's include Code::Blocks, Eclipse, and Visual Studio. These are all free, and they can be used to both edit and debug C++ code. */

#include <iostream> //header file library
using namespace std; //use names for objects and variables from the standard library

//Don't worry if you don't understand
//how #include <iostream> and using namespace std works.
//Just think of it as something that (almost) always appears in your program.

int main() { //This is called a function. Any code inside its curly brackets {} will be executed
  
  cout << "Hello World!"; //cout ("see-out")with the insertion operator (<<) to output/print tex
  return 0; //ends the main function
} //to actually end the main function

/*
# Omitting Namespace
You might see some C++ programs that runs without the standard namespace library.
The using namespace std line can be omitted and replaced with the std keyword,
followed by the :: operator for some objects: 
*/

#include <iostream>

int main() {
  std::cout << "Hello World!"; //"std" keyword, followed by the "::"
  return 0;
}

//You can add as many cout objects as you want. However, note that it does not insert a new line at the end of the output:

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << "I am learning C++";
  return 0;
}

// Result = Hello World!I am learning C++ << all in one pharagraph

//New Lines
//To insert a new line, you can use the \n character or endl manipulator:

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n"; //\n character
  cout << "I am learning C++" << endl; //endl manipulator
  cout << "Thanks for Reading my content";
  
  //thing you can try "\t" "\\" "\""
  cout << endl << " trying new line huhuh" << endl; // you can also add \n or endl before/end line
  
  cout << "Hello World! \t"; //\t character
  cout << "I am learning C++ \\"; //\\ character
  cout << "Thanks for Reading my \"content\"";//\" character
  
  return 0;
}

// END For Chapter 1
