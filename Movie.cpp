//
// Created by Erica on 9/26/2020.
//

#include "Movie.h"
#include <iostream>
#include <string>

Movie::Movie(std::string theMovieName, std::string theMPAARating)
{
    movieName = theMovieName;
    MPAARating = theMPAARating;
    peopleRatingMovie = 0;
    movieRating = 0;
}

void Movie::setMovieName(std::string theMovieName)
{
    movieName = theMovieName;
}

void Movie::setMPAARating(std::string theMPAARating)
{
    MPAARating = theMPAARating;
}

void Movie::addRating(int rating)
{
    if((rating < 1) || (rating > 5))
    {
        std::cout << "The rating is not a valid rating.";
        exit(1);
    }

    movieRating = movieRating + rating;
    peopleRatingMovie = peopleRatingMovie + 1;
}
//Author: Erica Carballo
double Movie::getAverage()
{
    return ((movieRating * 1.0) / peopleRatingMovie);
}

void Movie::outputAll()
{
    std::cout << "The movie name is: " << movieName << std::endl;
    std::cout << "The MPAA rating is: " << MPAARating << std::endl;
    std::cout << "The average rating is: " << getAverage() << std::endl;
}

void Movie::outputMovieName()
{
    std::cout << "The movie name is: " << movieName;
}

void Movie::outputMPAARating()
{
    std::cout << "The MPAA rating is: " << MPAARating;
}