/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:31:07 by carlopez          #+#    #+#             */
/*   Updated: 2025/11/04 16:27:58 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
    private:
        int index;
        std::string firstName;
        std::string lastName;
        std::string nickName;
        int phoneNumber;
        std::string darkestSecret;

    public:
        Contact();    

        ~Contact();

    void    setIndex(int num);
    void    setFirstName(std::string Name);
    void    setLastName(std::string lastName);
    void    setNickName(std::string nickName);
    void    setPhoneNumber(int phoneNumber);
    void    setDarkestSecret(std::string darkestSecret);
};