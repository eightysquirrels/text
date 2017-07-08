#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>

#include <iostream>


int main (int argc, char * argv[])
{
    if (argc < 2) {
        std::cerr << "error: You must supply at least a filename.\n";
        return 1;
    }

    boost::filesystem::path path(argv[1]);
    if (!exists(path)) {
        std::cerr << "error: Could not access filename " << argv[1] << ".\n";
        return 1;
    }
}