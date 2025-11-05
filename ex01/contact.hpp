/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:31:07 by carlopez          #+#    #+#             */
/*   Updated: 2025/11/05 16:30:50 by carlopez         ###   ########.fr       */
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
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        Contact();    

        ~Contact();

    void    setIndex(int num);
    void    setFirstName(std::string Name);
    void    setLastName(std::string lastName);
    void    setNickName(std::string nickName);
    void    setPhoneNumber(std::string phoneNumber);
    void    setDarkestSecret(std::string darkestSecret);
    int    getIndex();
    std::string    getFirstName();
    std::string    getLastName();
    std::string    getNickName();
    std::string    getPhoneNumber();
    std::string    getDarkestSecret();
};