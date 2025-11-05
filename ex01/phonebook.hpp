/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:31:07 by carlopez          #+#    #+#             */
/*   Updated: 2025/11/05 17:22:54 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
    private:
        Contact contacts[8];
        
    public:
        PhoneBook();

        ~PhoneBook();
    
    void setContact(int i, Contact *c);
    Contact& getContact(int i);
};

