/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   replace.cpp                                     |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/24 17:12:47 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/24 22:12:01 by saladuit     \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <replace.hpp>
#include <string>
void	filehandling(std::vector<std::string>& argv)
{
	std::ifstream ifile(argv.at(0));
	std::string buffer;
	std::ofstream ofile(argv.at(0).append(".replace"));

	if (!ifile.good() || !ofile.good()) {
		std::cout << "Error"
			<< std::endl;
		return;
	}
	while (ifile >> buffer) {
            std::cout << buffer;
            if (ifile.eof())
                break;
	}
	std::cout << buffer;
	ifile.close();
	ofile.close();
}
void replace(int argc, char** argv)
{
    std::vector<std::string> allArgs(argv, argv + argc);
	filehandling(allArgs);
}
