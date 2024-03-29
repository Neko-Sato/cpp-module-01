/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 03:14:33 by hshimizu          #+#    #+#             */
/*   Updated: 2024/03/28 10:23:17 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>

class Harl
{
private:
	void (Harl::*_logs[4])(void);

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	Harl(void);

	static const std::string logsstr[4];
	void complain(std::string level);
};

#endif