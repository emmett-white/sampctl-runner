#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    std::ifstream json_file("./pawn.json");
    if (json_file.is_open())
    {
        std::string git_repository;
        std::cout << "Enter github repository name: ";
        std::cin >> git_repository;

        std::string file_line;

        for (int i = 1; i < 4; ++i)
            std::getline(json_file, file_line);

        if (file_line.find(git_repository) == std::string::npos)
            std::cout << "Invalid repository. Closing program...\n";
        else
        {
            char run_package;

            #ifdef _WIN32
                system("color a && sampctl p ensure && sampctl p build");
            #else
                system("sampctl p ensure --platform linux && sampctl p build");
            #endif
            
            std::cout << "Run package (Y/N): ";
            std::cin >> run_package;

            if (run_package == 'Y' || run_package == 'y')
                system("sampctl p run");
            else system("exit");
        }
    }

    system("pause");
    return 0;
}