/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   FtSed.cpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/26 08:31:27 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/26 08:32:12 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <FtSed.hpp>

FtSed::FtSed(Filename filename, Search search, Replace replace)
    : _filename(filename)
    , _search(search)
    , _replace(replace)
	, _in(filename)
	, _out(filename + ".replace")
{
	if (_in.fail())
		throw std::runtime_error("Input Error: failed opening " + filename);
	if (_out.fail())
		throw std::runtime_error("Output Error: failed creating " + filename + ".replace");
}

FtSed::~FtSed() {
	if(_in.good())
		_in.close();
	if(_out.good())
		_out.close();
}
