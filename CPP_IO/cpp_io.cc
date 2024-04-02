#include <iostream>

int main( ) {
    int  x{5};
    /*
        In iostream context the << Operator is used to send data to the standard output stream (usually the console). (It's called insertion operator)
    */
    std::cout << "Hello, World!" << std::endl; //When output with std::cout, std::endl prints a newline character to the console (causing the cursor to go to the start of the next line). In this context, endl stands for “end line”.
    // std::endl also Flushes the buffer, so it's inefficient in some cases. In cases we want to let the buffer be flushed automatically, we can use '\n' instead of std::endl.
    std::cout << "The value of x is: " << x << '\n'; // '\n' is more efficient than std::endl. >>>> Notice it's a character, not a string.  <<<<
    std::cout << "Hello" << " World" << std::endl;

    /*
        std::cout is buffered, meaning that it will not display output to the console until it has accumulated a certain amount of data to output.
        Statements in our program request that output be sent to the console. However, that output is typically not sent to the console immediately. Instead, the requested output “gets in line”, 
        and is stored in a region of memory set aside to collect such requests (called a buffer).  Periodically, the buffer is flushed, meaning all of the data collected in the buffer is transferred to its destination
        (in this case, the console).
        This also means that if your program crashes, aborts, or is paused (e.g. for debugging purposes) before the buffer is flushed, any output still waiting in the buffer will not be displayed.

        The opposite of buffered output is unbuffered output. With unbuffered output, each individual output request is sent directly to the output device.

Writing data to a buffer is typically fast, whereas transferring a batch of data to an output device is comparatively slow. Buffering can significantly increase 
performance by minimizing the number of slow transfers that need to be performed when there are multiple output requests.
    */

   std::cout << "Write a number: ";
   int xx{};
    std::cin >> xx; // >> is called extraction operator. It is used to get data from the standard input stream (usually the keyboard).
    std::cout << "You entered: " << xx << '\n';

    std::cout << "Write two numbers separated by a space: ";
    int kk{}, ll{};
    std::cin >> kk >> ll;
    std::cout << "You entered: " << kk << " and " << ll << '\n';
    return 0;
}