/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Harl.hpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/26 08:30:27 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/10/03 16:41:43 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
#define HARL

#include <functional>
#include <iostream>
#include <string>
#define DEUBG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
#define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARN_MSG "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR_MSG "This is unacceptable! I want to speak to the manager now."

enum e_diagnostics {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    LVLS
};

typedef void (*t_fdebug)(void);

class Harl {

public:
    Harl();
    ~Harl();
    static void complain(std::string level);

private:
    static void debug(void);
    static void info(void);
    static void warning(void);
    static void error(void);
    static const t_fdebug complaints[4];
};

#endif
