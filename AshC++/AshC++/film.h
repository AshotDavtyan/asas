
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Film {
public:
	string name;
	string genre;
	string description;

	Film(string name, string genre, string description) {
		this->name = name;
		this->genre = genre;
		this->description = description;
	}
};

class Catalog {
public:
	string name;
	int year;
	std::vector <int> films;

	Catalog(string name, int year) {
		this->name = name;
		this->year = year;
	}

	void addFilm(Film film) {
		films.push_back(film);
	}

	void displayFilms() {
		for (Film film : films) {
			cout << "Name: " << film.name << endl;
			cout << "Genre: " << film.genre << endl;
			cout << "Description: " << film.description << endl;
			cout << endl;
		}
	}
};

int main() {
	Catalog catalog("Movie Catalog", 2022);

	Film film1("Film 1", "Genre 1", "Description 1");
	Film film2("Film 2", "Genre 2", "Description 2");
	Film film3("Film 3", "Genre 3", "Description 3");

	catalog.addFilm(film1);
	catalog.addFilm(film2);
	catalog.addFilm(film3);

	catalog.displayFilms();

	return 0;
}