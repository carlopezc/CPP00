/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:46:02 by carlopez          #+#    #+#             */
/*   Updated: 2025/11/06 11:37:51 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int    check_phonenumber(std::string s)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        if (!isdigit(s[i]))
        {
            std::cout << "Please type a correct phone number, just digits" << std::endl;
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
        std::cout << "➝ Contact's name: " << std::endl;
    else if (data == "last")
        std::cout << "➝ Contact's last name: " << std::endl;
    else if (data == "nick")
        std::cout << "➝ Contact's nick name: " << std::endl;
    else if (data == "phone")
        std::cout << "➝ Contact's telephone number: " << std::endl;
    else if (data == "secret")
        std::cout << "➝ Contact's darkest secret: " << std::endl;
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
        else if (check && check_phonenumber(s))
        {
                ;
        }
        else
            return (s);
        display_request(data);
    }
    
    return ("");
}

void    add_contact(PhoneBook *phoneBook, int i)
{
    Contact& contact = phoneBook->getContact(i);

    std::cout << "\n  Welcome to your contact's list  \n" << std::endl;
    contact.setIndex(i);
    contact.setFirstName(data_loop("name", false));
    contact.setLastName(data_loop("last", false));
    contact.setNickName(data_loop("nick", false));
    contact.setPhoneNumber(data_loop("phone", true));
    contact.setDarkestSecret(data_loop("secret", false));
    return ;
}

int check_id(std::string id, int size)
{
    int len;
    int num;

    len = 0;
    while (id[len])
    {
        if (!isdigit(id[len]))
            return (1);
        len++;
    }
    if (len > 1)
        return (1);
    num = id[0] - '0';
    if (num >= size)
        return (1);
    return (0);
}

std::string format_data(std::string data)
{
    int spaces;
    std::string c_spaces;
    std::string new_data;
    int size;

    size = data.length();
    if (size > 10)
    {
        new_data = data.substr(0, 9);
        new_data = new_data + ".";
    }
    else
    {
        spaces = 10 - size;
        new_data = std::string(spaces, ' ') + data;
    }
    return (new_data);
}

void    display_contact(PhoneBook *phoneBook, int id)
{
    std::string data;

    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "|" << "         " << phoneBook->getContact(id).getIndex() << "|";
    std::cout << format_data(phoneBook->getContact(id).getFirstName()) << "|";
    std::cout << format_data(phoneBook->getContact(id).getLastName()) << "|";
    std::cout << format_data(phoneBook->getContact(id).getNickName()) << "|" << std::endl;
    return ;
}

void    search_function(PhoneBook *phoneBook)
{
    std::string s;
    int i;
    
    i = 0;
    while (i < 8)
    {
        if (phoneBook->getContact(i).getFirstName().empty())
            break ;
        i++;
    }
    std::cout << "Select a contact id, you have " << i << " contacts" << std::endl;
    while (std::getline(std::cin, s))
    {
        if (s.empty())
            std::cout << "Please type a valid id" << std::endl;
        else
        {
            if (check_id(s, i))
            {
                std::cout << "Please select a valid id, you have " << i << " contacts" << std::endl;
                return (search_function(phoneBook));
            }
            else
                return (display_contact(phoneBook, (s[0] - '0')));
        }
    }
    return ;
    
}

void    add_function(PhoneBook *phoneBook)
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
        add_function(phoneBook);
    else if (option == "SEARCH")
        search_function(phoneBook);
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