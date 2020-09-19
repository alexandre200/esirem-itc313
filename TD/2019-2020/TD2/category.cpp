/**
  * File:     category.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of class Category
  */

#include "category.h"

// Question 2
Category::Category(const std::string& title) {
	m_title = title;
}

std::string Category::get_title() const {
	return m_title;
}

void Category::display() const {
	std::cout << m_title << ": ";
	for (const Todo* todo: m_list) {
		std::cout << todo->get_uid() << " ";
	}
	std::cout  << std::endl;
}


void Category::add_todo(Todo *todo) {
	m_list.push_back(todo);
}