/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Probook <Probook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:10:31 by nmuminov          #+#    #+#             */
/*   Updated: 2023/10/30 15:47:21 by Probook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        int j = 1;
        while (j < argc)
        {
            int i = 0;
            while (argv[j][i])
            {
                std::cout << (char)toupper(argv[j][i]);
                i++;
            }
            std::cout << ' ';
            j++;
        }
    }

    std::cout << std::endl;
    return 0;
}
