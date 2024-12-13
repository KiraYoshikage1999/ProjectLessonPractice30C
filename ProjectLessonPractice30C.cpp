
#include <iostream>
using namespace std;


class GavaiPart {
	string t;
public:
	GavaiPart(string t = "Peace of Gavai") {
		this->t = t;
	}

	string GetName() {
		return t;
	}
};

class PeperoniPart {
	string t;
public:
	PeperoniPart(string t = "Peace of PeperoniPart") {
		this->t = t;
	}

	string GetName() {
		return t;
	}
};

class FourCheesePart {
	string t;
public:
	FourCheesePart(string t = "Peace of FourCheesePart") {
		this->t = t;
	}

	string GetName() {
		return t;
	}
};

class FourMeatPart {
	string t;
public:
	FourMeatPart(string t = "Peace of FourMeatPart") {
		this->t = t;
	}
	
	string GetName() {
		return t;
	}

};

class RomaniaPizza {
	string t;
public:
	RomaniaPizza(string t = "Peace of RomaniaPizza") {
		this->t = t;
	}

	string GetName() {
		return t;
	}
};

class FrittaPizza {
	string t;
public:
	FrittaPizza(string t = "Peace of FrittaPizza") {
		this->t = t;
	}

	string GetName() {
		return t;
	}
};

class CisilianPizza {
	string t;
public:
	CisilianPizza(string t = "Peace of CisilianPizza") {
		this->t = t;
	}

	string GetName() {
		return t;
	}
};

class CalisonePizza {
	string t;
public:
	CalisonePizza(string t = "Peace of CalisonePizza") {
		this->t = t;
	}

	string GetName() {
		return t;
	}
};

class NeopolitanaPizza {
	string t;
public:
	NeopolitanaPizza(string t = "Peace of NeopolitanaPizza") {
		this->t = t;
	}

	string GetName() {
		return t;
	}
};


class Pizza {
private:
	GavaiPart* gavaiPart;
	PeperoniPart* peperoniPart;
	FourCheesePart* fourCheesePart;
	FourMeatPart* fourMeatPart;
	RomaniaPizza* romaniaPizza;
	FrittaPizza* frittaPizza;
	CisilianPizza* cisilianPizza;
	NeopolitanaPizza* neopolitanaPizza;
public:
	Pizza(GavaiPart* gavaiPart, PeperoniPart* peperoniPart , FourCheesePart* fourCheesePart , FourMeatPart* fourMeatPart , RomaniaPizza* romaniaPizza , FrittaPizza* frittaPizza , CisilianPizza* cisilianPizza , NeopolitanaPizza* neopolitanaPizza) {
		this->gavaiPart = gavaiPart;
		this->peperoniPart = peperoniPart;
		this->fourCheesePart = fourCheesePart;
		this->fourMeatPart = fourMeatPart;
		this->romaniaPizza = romaniaPizza;
		this->frittaPizza = frittaPizza;
		this->cisilianPizza = cisilianPizza;
		this->neopolitanaPizza = neopolitanaPizza;
	}

	void eatPizza() {
		cout << this->gavaiPart->GetName() << endl;
	}
};


int main()
{
	GavaiPart* GP = new GavaiPart();
	PeperoniPart* peperoniPart = new PeperoniPart();
	FourCheesePart* fourCheesePart = new FourCheesePart();
	FourMeatPart* fourMeatPart = new FourMeatPart();
	RomaniaPizza* romaniaPizza = new RomaniaPizza();
	FrittaPizza* frittaPizza = new FrittaPizza();
	CisilianPizza* cisilianPizza = new CisilianPizza();
	NeopolitanaPizza* neopolitanaPizza = new NeopolitanaPizza();

	Pizza pizza = Pizza(GP, peperoniPart , fourCheesePart , fourMeatPart , romaniaPizza , frittaPizza , cisilianPizza , neopolitanaPizza);
	pizza.eatPizza();
	pizza.eatPizza();
	pizza.eatPizza();

	
}


