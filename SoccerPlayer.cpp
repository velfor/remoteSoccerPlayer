#include "SoccerPlayer.h"
#include <iostream>
SoccerPlayer::SoccerPlayer() {
	name = "";
	surname = "";
	goals = 0;
	assists = 0;
}
SoccerPlayer::SoccerPlayer(std::string fName, std::string fSurname, unsigned int fGoals, unsigned int fAssists) {
	name = fName;
	surname = fSurname;
	goals = fGoals;
	assists = fAssists;
}
void SoccerPlayer::setName(std::string fName) { name = fName; }
void SoccerPlayer::setSurname(std::string fSurname) { surname = fSurname; }
void SoccerPlayer::setGoals(unsigned int fGoals) { goals = fGoals; }
void SoccerPlayer::setAssists(unsigned int fAssists) { assists = fAssists; }
std::string SoccerPlayer::getName() { return name; }
std::string SoccerPlayer::getSurname() { return surname; }
unsigned int SoccerPlayer::getGoals() { return goals; }
unsigned int SoccerPlayer::getAssists() { return assists; }

void SoccerPlayer::print() {
	std::cout << surname << ' ' << name << " goals: " << goals << " assists: " << assists << std::endl;
}
void SoccerPlayer::addGoals(unsigned int fG) {goals += fG;}
void SoccerPlayer::addAssists(unsigned int fA) {assists += fA;}