// Doges External
// Copyright (c) 2007-2024. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.


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


