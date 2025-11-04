/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:46:02 by carlopez          #+#    #+#             */
/*   Updated: 2025/11/04 17:57:35 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
#include <cstring>

int main(void)
{
    std::string option;
    
    std::cout << "\nWELCOME TO YOUR PHONEBOOK" << std::endl;
    std::cout << "Select one of the following actions: " << std::endl;
    std::cout << "ADD, SEARCH or EXIT" << std::endl;
    std::cin >> option;
    while (option || strcmp(option, "SEARCH") == 0)
    {
        check_functions(option);
        std::cout << "Select one of the following actions: " << std::endl;
        std::cout << "ADD, SEARCH or EXIT" << std::endl;
        std::cin >> option;
    }
}