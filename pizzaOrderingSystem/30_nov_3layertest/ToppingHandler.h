#ifndef TOPPINGHANDLER_H
#define TOPPINGHANDLER_H

#include "Toppings.h"
#include "fstreamClass.h"
#include <iostream>
using namespace std;

class ToppingHandler
{
    public:
        ToppingHandler();
		~ToppingHandler();
		void operator =(Toppings* copy);
		//Copy constructor
        void create_topping();
        void print_toppings();
    protected:

    private:
        FstreamClass repo;
		Toppings* toppings_list;
		int toppings_list_size;
};

#endif // TOPPINGHANDLER_H
