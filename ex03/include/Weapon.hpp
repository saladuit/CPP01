/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Weapon.hpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2022/09/22 20:35:03 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2022/09/22 21:44:08 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon {
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();

		const std::string	&getType() const;
		void				setType(const std::string& type);
	private:
		std::string			_type;
};
#endif