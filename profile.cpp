#include <iostream>

#include "profile.hpp"

Profile::Profile(std::string _name, int _age, std::string _city, std::string _country, std::string _pronouns) {
  name = _name;
  age = _age;
  city = _city;
  pronouns = _pronouns;
}
std::string Profile::view_profile() {
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
  std::string hobby_string = "Hobbies: ";

  for (std::string hobby : hobbies) {
    hobby_string += hobby + "\n";
  }
  return bio + "\n" + hobby_string;
}
void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}
