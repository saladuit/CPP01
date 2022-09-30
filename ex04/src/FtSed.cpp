/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   FtSed.cpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/27 15:19:50 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/30 15:35:04 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <FtSed.hpp>
#include <string>

FtSed::FtSed(t_filename& filename, t_search& search, t_replace& replace)
    : _filename(filename)
    , _search(search)
    , _replace(replace)
    , _in(filename.c_str())
    , _out((filename + ".replace").c_str())
{
    if (_in.fail())
        throw std::runtime_error("Input Error: failed opening " + filename);
    if (_out.fail())
        throw std::runtime_error("Output Error: failed creating " + filename
            + ".replace");
}

std::string ft_replace(std::string* input, t_search search, t_replace replace)
{
    std::size_t pos;

    while ((pos = (*input).find(search)) != std::string::npos) {
        (*input).erase(pos, search.size());
        (*input).insert(pos, replace);
    }
    return ((*input));
}
void FtSed::ftsed()
{
    std::string buffer;

    std::getline(_in, buffer, '\0');
    _out << ft_replace(&buffer, _search, _replace);
}
FtSed::~FtSed()
{
    if (_in.good())
        _in.close();
    if (_out.good())
        _out.close();
}
