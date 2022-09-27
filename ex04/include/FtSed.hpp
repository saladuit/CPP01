/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   FtSed.hpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/26 08:30:27 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/27 17:30:52 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTSED
#define FTSED

#include <string>
#include <fstream>

typedef const std::string t_search;
typedef const std::string t_replace;
typedef const std::string t_filename;

class FtSed {
public:
    FtSed(t_filename& filename, t_search& search, t_replace& replace);
    ~FtSed();

    t_filename getFilename(void) const;
    t_search getSearch(void) const;
    t_replace getReplace(void) const;

private:
    FtSed();
    t_filename& _filename;
    t_search& _search;
    t_replace& _replace;
    std::ifstream _in;
    std::ofstream _out;
};

#endif
