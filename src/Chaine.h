/**
 * @brief     Chaine.h
 * @date      June 29, 2015
 * @author    Diedhiou Ahmed Bachir
 * @version   1.1
 */
#define CHAINE_H
#include <string>
using namespace std;


class Chaine
{
/**
 *@param mot is a variable
 */
private:
string mot;

/**
 *Accessors and mutators
 */
public:
string getMot();
void setMot();

/**
 *functions
 */
public:
string Tri( );
string Estpalindrom();


};
#endif 
