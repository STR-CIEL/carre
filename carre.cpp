#include "carre.h"
#include <iostream>


using namespace std;

void CCarre::Setsx(int sx1) {
	this->sx = sx1;
	
}
void CCarre::Setsy(int sy1) {
	this->sy = sy1;
}
void CCarre::Setcote(int cote1) {
	this->cote = cote1;
}
void CCarre::Afficher() {

	cout << "x = " << sx <<endl;
	cout << "y = " << sy << endl;
	cout << " cote = " << cote << endl;





}