#include<iostream>
#include<vector>
#include<string>

class Person
{
    private:
        int name;

    public:
        Person(int n) {
            this->name = n;
        }

        void printName() {
            std::cout << "Name is: " << name << std::endl;
        }
};

int main() {
    std::vector<Person*> people;
    
    int nme = 5;

    for(int i = 0;i < 10; ++i){
		Person *newObj = new Person(nme);
		people.push_back(newObj);
        nme++;
 	}

    for(int i = 0;i < people.size(); ++i){
		people[i]->printName();
 	}
}