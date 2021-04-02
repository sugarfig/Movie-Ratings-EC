//Author: Erica Carballo
//Project name: Movie Ratings
//Description: Program that gets a movie name, MPAA rating, and user ratings.
//It then outputs the movie name, MPAA rating, and the user ratings.
//Last Changed: September 26, 2020

#include <iostream>
#include "Movie.h"

int main()
{
    Movie aladdin("Aladdin", "G"), hocus("Hocus Pocus", "G");

    aladdin.addRating(5);
    aladdin.addRating(3);
    aladdin.addRating(4);
    aladdin.addRating(4);
    aladdin.addRating(5);

    std::cout << std::endl;
    aladdin.outputAll();
    std::cout << std::endl;
    aladdin.outputMovieName();
    std::cout << std::endl;
    aladdin.outputMPAARating();
    std::cout << std::endl;

    hocus.addRating(5);
    hocus.addRating(4);
    hocus.addRating(5);
    hocus.addRating(4);
    hocus.addRating(5);
//Author: Erica Carballo
    std::cout << std::endl;
    hocus.outputAll();
    std::cout << std::endl;
    hocus.outputMovieName();
    std::cout << std::endl;
    hocus.outputMPAARating();


    return 0;
}

//Sample Dialogue
//The movie name is: Aladdin
//The MPAA rating is: G
//The average rating is: 4.2
//
//The movie name is: Aladdin
//The MPAA rating is: G
//
//The movie name is: Hocus Pocus
//The MPAA rating is: G
//The average rating is: 4.6
//
//The movie name is: Hocus Pocus
//The MPAA rating is: G