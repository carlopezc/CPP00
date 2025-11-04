/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:30:16 by carlopez          #+#    #+#             */
/*   Updated: 2025/11/04 17:52:16 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <string>

PhoneBook::PhoneBook()
{
    std::cout<< "PhoneBook constructed" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook destructed" << std::endl;
}