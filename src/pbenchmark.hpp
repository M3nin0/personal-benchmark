#pragma once

#include <string>
#include <chrono>


namespace PBanchmark
{
    class Timer
    {
    public:
        Timer(std::string name);
        ~Timer();

        void finish();

        std::string name();
    private:
        std::string p_name;
        std::chrono::time_point<std::chrono::high_resolution_clock> p_StartPointTime;
    };
}
