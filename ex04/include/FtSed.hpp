/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   FtSed.hpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/26 08:30:27 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/26 08:31:20 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTSED
#define FTSED

#include <string>
#include <fstream>

typedef const std::string& Search;
typedef const std::string& Replace;
typedef const std::string& Filename;

class FtSed {
public:
    FtSed(Filename filename, Search search, Replace replace);
    ~FtSed();

	Filename getFilename(void) const;
	Search getSearch(void) const;
	Replace getReplace(void) const;
private:
	FtSed();
    Filename _filename;
    Search _search;
    Replace _replace;
	std::ifstream _in;
	std::ofstream _out;
};

#endif
