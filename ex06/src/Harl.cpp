/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Harl.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/27 15:19:50 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/10/05 16:58:33 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

const t_fdebug Harl::complaints[LVLS] = { Harl::debug, Harl::info, Harl::warning, Harl::error };

Harl::Harl()
{
}

Harl::~Harl()
{
}
void Harl::complain(std::string level)
{
    switch (level.at(0)) {
    case ('D'):
        complaints[DEBUG]();
    case ('I'):
        complaints[INFO]();
    case ('W'):
        complaints[WARNING]();
    case ('E'):
        complaints[ERROR]();
    }
}
void Harl::debug(void)
{
    std::cout << DEUBG_MSG
              << std::endl;
}
void Harl::info(void)
{
    std::cout << INFO_MSG
              << std::endl;
}
void Harl::warning(void)
{
    std::cout << WARN_MSG
              << std::endl;
}
void Harl::error(void)
{
    std::cout << ERROR_MSG
              << std::endl;
}
