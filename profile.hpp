#include <vector>

class Profile {
private:
 std::string name;
 int age;
 std::string city;
 std::string country;
 std::string pronouns;
 std::vector<std::string> hobbies;

public:
 Profile(std::string _name, int _age, std::string _city, std::string _country, std::string _pronouns = "they/them"); 
 std::string view_profile();
 void add_hobby(std::string new_hobby);
};
