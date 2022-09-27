/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   FtSed.cpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/27 15:19:50 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/27 17:42:30 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <FtSed.hpp>

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

FtSed::~FtSed()
{
    if (_in.good())
        _in.close();
    if (_out.good())
        _out.close();
}
