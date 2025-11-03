/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:58:54 by carlopez          #+#    #+#             */
/*   Updated: 2025/11/03 17:48:13 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;
    char c;

    i = 1;
    if (!argv || argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] >= 97 && argv[i][j] <= 122)
                c = toupper(argv[i][j]);
            else
                c = argv[i][j];
            std::cout << c;
            j++;
        }
        i++;
    }
    return (0);
}