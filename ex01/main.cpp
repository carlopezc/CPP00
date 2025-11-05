/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:46:02 by carlopez          #+#    #+#             */
/*   Updated: 2025/11/05 17:01:19 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//check_data
//si check es true comprueba que sea formato 000000000, sin mas ni menos n +34

int    check_phonenumber(std::string s)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        if (!isdigit(s[i]))
        {
            std::cout << "Please type a correct phone number, in format XXXXXXXXX" << std::endl;
            return (1);
        }
        i++;
    }
    if (i != 9)
    {
        std::cout << "Please type a correct phone number composed by 9 characters" << std::endl;
        return (1);
    }
    return (0);
}

void    display_request(std::string data)
{
    if (data == "name")
        std::cout << "Contact's name: " << std::endl;
    else if (data == "last")
        std::cout << "Contact's last name: " << std::endl;
    else if (data == "nick")
        std::cout << "Contact's nick name: " << std::endl;
    else if (data == "phone")
        std::cout << "Contact's telephone number: " << std::endl;
    else if (data == "secret")
        std::cout << "Contact's darkest secret: " << std::endl;
    return ;
}

std::string    data_loop(std::string data, bool check)
{
    std::string s;

    display_request(data); 
    while (std::getline(std::cin, s))
    {
        if (s.empty())
            std::cout << "Please type something, this field can't be empty" << std::endl;
        else
        {
            if (check && check_phonenumber(s))
                break ;
            return (s);
        }
    }
    return (NULL);
}

void    add_contact(PhoneBook *phoneBook, int i)
{
    Contact contact;
    
    contact.setIndex(i);
    contact.setFirstName(data_loop("name", false));
    contact.setLastName(data_loop("last", false));
    contact.setNickName(data_loop("nick", false));
    contact.setPhoneNumber(data_loop("phone", true));
    contact.setDarkestSecret(data_loop("secret", false));
    phoneBook->setContact(i, contact);
    return ;
}

void    check_adding(PhoneBook *phoneBook)
{
    int i;
    i = 0;
    while (i < 8)
    {
        if (phoneBook->getContact(i).getFirstName().empty())
            break ;
        i++;
    }
    if (i == 8)
        i = 0;
    add_contact(phoneBook, i);
}

void    manage_option(std::string option, PhoneBook *phoneBook)
{
    if (option.empty())
    {
        std::cout << "Please type something" << std::endl;
        return ;
    }
    if ((option != "ADD" && option != "SEARCH"))
        std::cout << "That option is not available in your phonebook" << std::endl;
    if (option == "ADD")
        check_adding(phoneBook);
    return ;
}

int main(int argc, char **argv)
{
    std::string option;
    PhoneBook phoneBook;

    (void)argv;
    if (argc != 1)
    {
        std::cout << "Please, execute the program without parameters" << std::endl;
        return (0);
    }      
    std::cout << "\nWELCOME TO YOUR PHONEBOOK" << std::endl;
    std::cout << "Select one of the following actions: " << std::endl;
    std::cout << "ADD, SEARCH or EXIT" << std::endl;
    while (std::getline(std::cin, option) && option != "EXIT")
    {
        manage_option(option, &phoneBook);
        std::cout << "Select one of the following actions: " << std::endl;
        std::cout << "ADD, SEARCH or EXIT" << std::endl;
    }
    return (0);
}