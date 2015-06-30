/**
 * @brief     Chaine.h
 * @date      June 29, 2015
 * @author    Diedhiou Ahmed Bachir
 * @version   1.1
 */


#include "Chaine.h"
#include <stdlib.h>
using namespace std;

/**
   *Main class
   *@param argc An integer argument count of the command line arguments
   *@param argv An argument vector of a command line arguments
   *@return an integer 0 upon exit success
   */ 


int main(int argc, char **argv){ 

/**
  *Creates an object of type "Chaine"
  */

Chaine A;


cout << "SAISIE DE LA CHAINE "<< endl ;
cout<<"Tapez la chaine:";cin>> A.mot ;	

/** 
* Sorting the string 
*/
A.Tri(); 

/**
*Standard output
*/
cout << "le mot ordonne est :" <<A.getMot()<<endl ; 
cout<<"la longueur du mot est :"<<A.getMot().size()<<endl; 
cout<<A.Estpalindrom()<<endl; 

return 0;

}
