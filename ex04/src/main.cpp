/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 21:27:16 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/26 08:37:01 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <FtSed.hpp>
#include <exception>
#include <iostream>
#include <ostream>

void	replace(Filename& filename, Search& search, Replace& replace)
{
	FtSed S(filename, search, replace);
}

int main(int argc, char** argv)
{

    if (argc != 4) {
        std::cout << "Usage: ./replace.out <filename> <s1> s2>"
                  << std::endl;
		return (0);
    }
	try {
    replace(argv[1], argv[2], argv[2]);
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
    return (0);

}
