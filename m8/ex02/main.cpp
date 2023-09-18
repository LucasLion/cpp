/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:31:52 by llion@student     #+#    #+#             */
/*   Updated: 2023/09/18 15:51:19 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main( void ) {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "----------------- My tests -----------------" << std::endl;
	MutantStack<int> stack;

	stack.push(5);
	stack.push(1);
	stack.push(4);
	stack.push(7);
	stack.push(8);
	stack.push(2);
	std::cout << stack.top() << std::endl;

	MutantStack<int>::iterator i = stack.begin();
	for (i = stack.begin(); i != stack.end(); i++) {
		std::cout << "Element: " << *i << std::endl;
	}
	while (i != stack.end())
		++i;
	while (i != stack.begin()) {
		--i;
		std::cout << "Reverse-elem: " << *i << std::endl;
	}
	return (0);
}
