
#include "class.hpp"
int PetrolPump::getPetrol(){
	return petrol;
}

int PetrolPump::getDistance(){
	return distance;
}

void PetrolPump::setData(int a,int b){
	petrol = a;
	distance = b;
}
