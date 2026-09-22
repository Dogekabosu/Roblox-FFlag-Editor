

#include <iostream>
#include <cstdint>
#include "src/memory/memory.h"
#include "src/memory/Offsets.hpp"

#include <string>

namespace DogesExternal
{

}

int main()
{
    HANDLE  stupidshit = GetStdHandle(STD_OUTPUT_HANDLE);

    memory->find_process_id("RobloxPlayerBeta.exe");
    memory->attach_to_process("RobloxPlayerBeta.exe");

    memory->find_module_address("RobloxPlayerBeta.exe");

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    SetConsoleTextAttribute(stupidshit, 14);
    std::cout << " ██████████      ███████      █████████  ██████████ " << std::endl;
    std::cout << "▒▒███▒▒▒▒███   ███▒▒▒▒▒███   ███▒▒▒▒▒███▒▒███▒▒▒▒▒█" << std::endl;
    std::cout << " ▒███   ▒▒███ ███     ▒▒███ ███     ▒▒▒  ▒███  █ ▒ " << std::endl;
    std::cout << " ▒███    ▒███▒███      ▒███▒███          ▒██████   " << std::endl;
    std::cout << " ▒███    ▒███▒███      ▒███▒███    █████ ▒███▒▒█  " << std::endl;
    std::cout << " ▒███    ███ ▒▒███     ███ ▒▒███  ▒▒███  ▒███ ▒   █" << std::endl;
    std::cout << " ██████████   ▒▒▒███████▒   ▒▒█████████  ██████████" << std::endl;
    std::cout << "▒▒▒▒▒▒▒▒▒▒      ▒▒▒▒▒▒▒      ▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒ " << std::endl;
    std::cout << "                                                   " << std::endl;
    std::cout << "                                                   " << std::endl;
    std::cout << "                                                   " << std::endl;
    std::cout << "heres da options" << std::endl;
    SetConsoleTextAttribute(stupidshit, 14);
    std::cout << "1. ESP" << std::endl;
    uintptr_t address;
    SetConsoleTextAttribute(stupidshit, 7);
    std::string input;
    std::cin >> input;
    uintptr_t ilovebaseaddy = memory->get_module_address();
    std::string one = "1";
    if (input == one)
    {
        memory->write<int>(FFlagOffsets::FFlags::DebugSkyGray + ilovebaseaddy, 1);
        memory->write<int>(FFlagOffsets::FFlags::DebugDrawBroadPhaseAABBs + ilovebaseaddy, 1);
      
      Sleep(2000);

        SetConsoleTextAttribute(stupidshit, 14);
      
        SetConsoleTextAttribute(stupidshit, 7);
        return 0;
    }

    else {
        return 0;

    }


}


