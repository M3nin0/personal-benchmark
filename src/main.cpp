#include "pbenchmark.hpp"

#include <cstddef> 
#include <iostream> 

#include <thread> 
#include <chrono>

int main()
{
    {
        PBanchmark::Timer timer("wait for 2 seconds");
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    return 0;
}
