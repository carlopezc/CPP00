/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:30:16 by carlopez          #+#    #+#             */
/*   Updated: 2025/11/05 17:22:44 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    std::cout<< "PhoneBook constructed" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook destructed" << std::endl;
}

void    PhoneBook::setContact(int i, Contact *c)
{
    this->contacts[i] = *c;
}

Contact&    PhoneBook::getContact(int i)
{
    return (this->contacts[i]);
}