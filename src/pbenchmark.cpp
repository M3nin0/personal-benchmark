#include "pbenchmark.hpp"

#include <chrono>
#include <string>


PBanchmark::Timer::Timer(std::string name)
{
    this->p_name = name;
    this->p_StartPointTime = std::chrono::high_resolution_clock::now();        
}

PBanchmark::Timer::~Timer()
{

}
