#pragma once
//Описываем интерфейс класса
#include <string>
class SoccerPlayer {
private:
	std::string name;
	std::string surname;
	unsigned int goals;
	unsigned int assists;
public:
	SoccerPlayer();
	SoccerPlayer(std::string, std::string, unsigned int, unsigned int);
	void setName(std::string);
	void setSurname(std::string);
	void setGoals(unsigned int);
	void setAssists(unsigned int);
	std::string getName();
	std::string getSurname();
	unsigned int getGoals();
	unsigned int getAssists();
	void print();
	void addGoals(unsigned int);
	void addAssists(unsigned int);
};