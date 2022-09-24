/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   replace.cpp                                     |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/24 17:12:47 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/24 18:14:23 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <replace.hpp>

void replace(std::vector<std::string> argv)
{
    std::ifstream ifile(argv.at(0));
    std::string buffer;
    std::ofstream ofile(argv.at(0).append(".replace"));
    std::string::size_type position;

    if (!ifile.good() || !ofile.good()) {
        std::cout << "Error"
                  << std::endl;
        return;
    }
    while (ifile >> buffer) {
        if (ifile.eof())
            break;
    }
    std::cout << buffer << buffer;
    position = 0;
    //    position = buffer.find(argv.at(1), position);
    //    buffer.erase(argv.at(1).size(), position);
    //    std::cout << buffer.insert(position, argv.at(2));
    ifile.close();
    ofile.close();
}
