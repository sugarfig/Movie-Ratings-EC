//
// Created by Erica on 9/26/2020.
//

#ifndef CHAPTER10PROGRAMMINGPROJECT11_MOVIE_H
#define CHAPTER10PROGRAMMINGPROJECT11_MOVIE_H
#include <iostream>

class Movie
{
public:
    Movie(std::string theMovieName, std::string theMPAARating);
    void addRating(int rating);
    void setMovieName(std::string theMovieName);
    void setMPAARating(std::string theMPAARating);
    double getAverage();
    void outputAll();
    void outputMovieName();
    void outputMPAARating();
//Author: Erica Carballo
private:
    std::string movieName;
    int peopleRatingMovie;
    std::string MPAARating;
    int movieRating;

};


#endif //CHAPTER10PROGRAMMINGPROJECT11_MOVIE_H
