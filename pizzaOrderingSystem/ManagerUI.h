#ifndef MANAGERUI_H
#define MANAGERUI_H

#include <iostream>
#include <stdlib.h>

 using namespace std;

class ManagerUI{
    public:
        ManagerUI();
        void manager_menu();
        //Prints out the main selector page for the manager
        void print_submenu();
        //enters a submenu for printing out all available Pizza info
        void toppings_submenu();
        //Gives the manager an option to add or remove toppings and their price
        void size_submenu();
        //Allows the manager to create, remove or change available pizza sizes in inches
        void pizza_submenu();
        //Gives the manager an option to add or remove pizzas and their price


        /*
            void print_pizza_list();
            //Calls a function to print out the pizza list
            void print_toppings_list();
            //Prints out the list of toppings
            void print_pizza_size();
            //Print list of all pizza sizes

        *////Put in another class
    private:

};

#endif // MANAGERUI_H
