/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:30:16 by carlopez          #+#    #+#             */
/*   Updated: 2025/11/05 16:45:45 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
    std::cout << "Construyendo un contacto\n" << std::endl;   
}

Contact::~Contact()
{
    std::cout << "Destruyendo un contacto\n" << std::endl;
}

void    Contact::setIndex(int num)
{
    this->index = num;
}

void    Contact::setFirstName(std::string Name)
{
    this->firstName = Name;
}

void    Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void    Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
}

void    Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void    Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

int    Contact::getIndex(void)
{
    return (index);
}

std::string    Contact::getFirstName(void)
{
    return (firstName);
}

std::string    Contact::getLastName(void)
{
    return (lastName);
}

std::string    Contact::getNickName(void)
{
    return (nickName);
}

std::string    Contact::getPhoneNumber(void)
{
    return (phoneNumber);
}

std::string    Contact::getDarkestSecret(void)
{
    return (darkestSecret);
    
}