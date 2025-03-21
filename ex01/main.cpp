#include "Span.hpp"
#include <iostream>
#include <vector>

int main() {
    try {
        std::cout << "===== Test 1: Normal Case =====" << std::endl;
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl; // Expected: 2
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;   // Expected: 14
    } catch (const char * error) {
        std::cout << "Error: " << error << std::endl;
    }

    try {
        std::cout << "\n===== Test 2: Span with 1 element (should throw exception) =====" << std::endl;
        Span sp2(5);
        sp2.addNumber(42);
        std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
    } catch (const char * error) {
        std::cout << "Error: " << error << std::endl; // Expected: The Span Is Too Short
    }

    try {
        std::cout << "\n===== Test 3: Empty Span (should throw exception) =====" << std::endl;
        Span sp3(5);
        std::cout << "Shortest Span: " << sp3.shortestSpan() << std::endl;
    } catch (const char * error) {
        std::cout << "Error: " << error << std::endl; // Expected: The Span Is Too Short
    }

    try {
        std::cout << "\n===== Test 4: Large Span (10,000 numbers) =====" << std::endl;
        Span sp4(10000);
        for (int i = 0; i < 10000; i++)
            sp4.addNumber(i * 2);

        std::cout << "Shortest Span: " << sp4.shortestSpan() << std::endl; // Expected: 2
        std::cout << "Longest Span: " << sp4.longestSpan() << std::endl;   // Expected: 19998
    } catch (const char * error) {
        std::cout << "Error: " << error << std::endl;
    }
}
