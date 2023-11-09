#include<iostream>
using namespace std;

int main() {

    // list of food based on their price range (also called an array)
    string highFood[] = {"Ians Leaf Cup Tea House", "Keepsakes", "Shawarma Shack", ""};
    string lowFood[] = {"Cafeteria Burgers", "KIM GaNe", "NoodleNook", "Food Hall", "Pastil House & Grill", "Puzzles Takoyaki Classy", "Street Foods", "Shell Select", "Waffle time", "7-Eleven" };

    string name; // declaration variable
    int budget; // declaration variable

    cout << "What is your name? "; // outputs the following string
    cin >> name; // asks the user for input

    cout<<"Welcome to BudgEAT, " << name <<endl; //welcomes the user with their name

    // statements inside the loop body will be executed at least once even if the condition is never true.
    do {
        cout<<"Input your budget: "; // outputs the following string
        cin>> budget; // user input for budget
        cout << endl;

        if (cin.fail()) {
            // Handle the case where the input is not an integer
            cout << "Invalid input. Please enter a number." << endl <<endl;
            cin.clear();               // Clear any error flags
            cin.ignore(100, '\n');    // Ignore the rest of the input line
        }

        // conditions for the different budget of the user
        if (budget <= 0 || budget >= 200) {
            cout<<"Sorry, food in that price range isn't listed" << endl;

        } else if (budget >= 100) {

            int choice;

            // prints the higher budget food options
            cout << "Here are the list of food options:\n";
            cout << "1. " << highFood[0] << endl;
            cout << "2. " << highFood[1] << endl;
            cout << "3. " << highFood[2] << endl <<endl;

            cout << "Enter your choice (1, 2, or 3): ";
            cin >> choice; // asks for the user's input to pick a number
            cout << endl;

            /* conditions to execute based on the user's given input */
            if (choice == 1 || choice == 2 || choice == 3) {
                cout << "You chose " << highFood[choice - 1] << ".\n"; // user's input - 1, because the counting starts at 0
                cout << "Location: ";

                // prints the following string if the input is 1
                if (choice == 1) {
                    
                    cout << "Beside Ateneo JHS" << endl << endl;
                    cout << "Menu: " << endl;

                        cout << "RICE MEALS" << endl;
                        cout << " P120 Daing na Bangus w/Fried Egg" << endl;
                        cout << " P120 Sizzling Burgersteak" << endl;
                        cout << " P129 Chicken Cordon Bleu" << endl;
                        cout << " P129 Lechon Kawali" << endl;
                        cout << " P160 Beef Tapa w/ egg" << endl;
                        cout << " P160 Beef Steak" << endl;
                        cout << " P160 Sizzling Bangus Sisig" << endl;
                        cout << " P160 Sizzling Pork Sisig" << endl;
                        cout << " P189 Adobo Rice w/ egg Pork" << endl <<endl;

                        cout << "SNACKS";
                        cout << " P100 Lumpia" << endl;
                        cout << " P125 Choco chips cookies" << endl;
                        cout << " P125 Oatmeal cookies" << endl;
                        cout << " P149 French Fries " << endl;
                        cout << " P149 Halo-Halo Together" << endl;
                        cout << " P149 Nachos" << endl;
                        cout << " P65 Asian Toast" << endl;
                        cout << " P75 Spaghetti" << endl << endl;

                // prints the ff. string if the input is 2
                } else if (choice == 2) {
                    cout << "Matina Town Square" << endl << endl;
                    cout << "Menu: " << endl;

                        cout << "PORKY FINDS" << endl;
                        cout << " P170 Breaded Pork chops" << endl;
                        cout << " P170 Glazed Pork" << endl;
                        cout << " P170 Grilled Pork Belly" << endl;
                        cout << " P170 Pork BBQ" << endl;
                        cout << " P170 Pork Adobo" << endl;
                        cout << " P170 Tender chops" << endl;
                        cout << " P175 Garlic Pork Chips" << endl;
                        cout << " P180 Lechon Kawali" << endl <<endl;

                        cout << "CHICKEN LOVERS" << endl;
                        cout << " P155 Chicken Popcorn" << endl;
                        cout << " P160 Chicken bbq" << endl;
                        cout << " P160 Honey Chicken" << endl;
                        cout << " P160 Buffalo Wings" << endl;
                        cout << " P160 Garlic Adobo flakes" << endl;
                        cout << " P165 Lemon Butter Chicken" << endl;
                        cout << " P170 Garlic Chicken" << endl;
                        cout << " P170 Chicken Teriyaki" << endl;
                        cout << " P170 Crispy Chicken bbq" << endl;
                        cout << " P170 Cheesy Mushroom Chicken" << endl;
                        cout << " P180 Chicken Parmigiano" << endl;
                        cout << " P180 Rosemary Chicken" << endl;
                        cout << " P190 Chicken Cordon Bleu" << endl <<endl;

                        cout << "SOMETHING FISHY" << endl;
                        cout << " P160 Fish Fillet" << endl;
                        cout << " P165 Dory Melt" << endl;
                        cout << " P190 Calamares" << endl;
                        cout << " P195 Garlic Tuna Belly" << endl << endl;

                // prints the ff. string if the input is 3                           
                } else if (choice == 3) {
                    cout << "Food Hall" << endl << endl;
                    cout << "Menu: " << endl;

                        cout << "Buy One Take One FOREVER" << endl;
                        cout << " P110 Regular Shawarma" << endl;
                        cout << " P130 Large Shawarma" << endl << endl;

                }
              // prints the following statement if the input is none of the choices
            } else {
                cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
            }
        } else {

            int choice; //declaration

            // prints the lower budget food options
            cout << "Here are the list of food options: " << endl;
            cout << "1. " << lowFood[0] << endl;
            cout << "2. " << lowFood[1] << endl;
            cout << "3. " << lowFood[2] << endl;
            cout << "4. " << lowFood[3] << endl;
            cout << "5. " << lowFood[4] << endl;
            cout << "6. " << lowFood[5] << endl;
            cout << "7. " << lowFood[6] << endl;
            cout << "8. " << lowFood[7] << endl;
            cout << "9. " << lowFood[8] << endl;
            cout << "10. " << lowFood[9] << endl;

            cout << endl;
            cout << "Enter your choice (1 - 10): ";
            cin >> choice; // asks for the user input
            cout << endl;

            // conditions to execute based on the user's input
            if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7 || choice == 8 || choice == 9 || choice == 10) {

                // prints the user's choice + the location
                cout << "You chose " << lowFood[choice - 1] << endl; // user's input - 1, because the counting starts at 0
                cout << "Location: ";

                // prints the ff. if the user input is 1
                if (choice == 1) {

                    cout << "Behind MMCM Academic building" << endl <<endl;
                    cout << "Menu: " << endl;

                        cout << "P65 Varda Jumbo Franks" << endl;
                        cout << "P75 Beef Burger Steak" << endl;
                        cout << "P75 Varda Beef Sausage Meal" << endl <<endl;
               
                // prints the ff. if the user input is 2
                } else if (choice == 2) {
                    cout << "Davao City, Door 2, Daylight Inn Bldg" << endl <<endl;
                    cout << "Menu: " << endl;
                        
                        cout << " P99 Student Meal" << endl <<endl;
                        
                        cout << "OVER P100" << endl;
                        cout << " P169 Korean Meal" << endl;
                        cout << " P99 Tteol-Bokki" << endl <<endl;

                // prints the ff. if the user input is 3
                } else if (choice == 3) {
                    
                    cout << "Behind MMCM Academic building" << endl <<endl;
                    cout << "Menu: " << endl;

                        cout << " P69 Fried Noodles - Plain" << endl;
                        cout << " P79 Fried Noodles - w/ egg" << endl;
                        cout << " P89 Fried Noodles - w/ Siomai" << endl;
                        cout << " P89 Fried Noodles - w/ Lumpia Shanghai" << endl <<endl;

                        cout << "ADD ONS" << endl;
                        cout << " P15 Fried Egg" << endl;
                        cout << " P20 Siomai 2 pieces" << endl;
                        cout << " P39 Lumpia Shanghai 2 pieces" << endl <<endl;

                // prints the ff. if the user input is 4
                } else if (choice == 4) {

                    cout << "MMCM Cafeteria/Food Hall" << endl <<endl;
                    cout << "Stalls: " << endl;
                        
                        cout << "SANTINOS" << endl;
                        cout << " P38 EACH SLICE" << endl <<endl;
                        
                        cout << "SWITOS" << endl;
                        cout << " P40 Daitel" << endl;
                        cout << " P60 Tukay" << endl <<endl;
                        
                        cout << "OVER P100: " << endl;
                        cout << " P100 Bong" << endl;
                        cout << " P130 Dakel" << endl <<endl;
                    
                    cout << "Over 100:" << endl;
                        cout << " P114 9 Balls" << endl;
                        cout << " P147 12 Balls" << endl <<endl;

                // prints the ff. if the user input is 5
                } else if (choice == 5) {

                    cout << "141 CAMIA ST. JUNA SUBDIVISION MATINA" << endl <<endl;
                    cout << "Menu: " << endl;

                        cout << "STUDENT MEALS" << endl;
                        cout << " P20 Chicken Pastil" << endl;
                        cout << " P20 Pork BBQ" << endl;
                        cout << " P40 Hotdog" << endl;
                        cout << " P60 Chorizo" << endl;
                        cout << " P80 Beef Pares" << endl <<endl;

                        cout << "GRILLED" << endl;
                        cout << " P120 Chicken Inasal" << endl;
                        cout << " P120 Chicken Inasal" << endl;
                        cout << " P140 Liempo" << endl <<endl;

                        cout << "SPECIALS" << endl;
                        cout << " P100 Crispy Chicken" << endl <<endl;

                // prints the ff. if the user input is 6
                } else if (choice == 6) {

                    cout << "Behind MMCM Academic building" << endl <<endl;
                    cout << "Menu: " << endl;
                        
                        cout << " P40 3 Balls " << endl;
                        cout << " P78 6 Balls" << endl << endl;
                    
                    cout << "Over 100:" << endl;
                        cout << " P114 9 Balls" << endl;
                        cout << " P147 12 Balls" << endl << endl;

                // prints the ff. if the user input is 7
                } else if (choice == 7) {

                    cout << "Behind Shell Gas Station" << endl <<endl;
                    cout << "Menu: " << endl;
                    
                        cout << " P10 Barbecue" <<endl;
                        cout << " P10 Lumpia" <<endl;
                        cout << " P10 Proben" <<endl;
                        cout << " P20 Chicken Skin" <<endl;
                        cout << " P20 Pastil" <<endl <<endl;
                        
                        cout << "DRINKS" << endl;
                        cout << " P10 - 20 Buko Juice" << endl;
                        cout << " P20 Soft drinks" << endl << endl;

                // prints the ff. if the user input is 8
                } else if (choice == 8) {

                    cout << "In front of MMCM, Shell Gas Station" << endl <<endl;
                    cout << "Menu: " << endl;
                    
                        cout << "Shell Select HOT MEATS:" <<endl;
                        cout << " P65 Bistek Tagalog" << endl;
                        cout << " P85 Chicken Adobo" << endl;
                        cout << " P85 Pork Binagoongan" << endl;
                        cout << " P85 Pork Humba" << endl << endl;
                        
                        cout << "Shell Select COMBO MEALS: " <<endl;
                        cout << " P40 Noodles + Siomai" << endl;
                        cout << " P45 Noodles w/egg + 2 Siomai's" << endl << endl;
                        
                        cout << "Shell Select PIZZA MEALS: " <<endl;
                        cout << " P55 Pizza Slice (every flavor)" << endl <<endl;
                        
                        cout << "Shell Select DIMSUM MEALS:" <<endl;
                        cout << " P28 Siomai Pork Asado" << endl;
                        cout << " P45 Siomai Plain Siomai" << endl;
                        cout << " P45 Siomai Combo Siomai" << endl << endl;

                // prints the ff. if the user input is 9
                } else if (choice == 9) {

                    cout << "Behind MMCM Academic Building" << endl <<endl;
                        cout << "Menu:" <<endl;
                        
                        cout << " P16 Soy Garlic Hotdog" << endl;
                        cout << " P26 Bavarian Cream" << endl;
                        cout << " P24 Cheese Delite" << endl;
                        cout << " P26 Swiss Chocolate" << endl;
                        cout << " P26 Ultimate Ube" << endl;
                        cout << " P31 American Hotdog" << endl;
                        cout << " P32 Chicken Hotdog" << endl;
                        cout << " P32 Ham N' Cheese" << endl;
                        cout << " P34 Belgian Chocolate" << endl;
                        cout << " P34 Cheesedog" << endl;
                        cout << " P34 German Cheese Franks" << endl << endl;

                // prints the ff. if the user input is 10
                } else if (choice == 10) {

                    cout << "Across the highway, in front of MMCM Campus" << endl <<endl;
                        cout << "Menu:" <<endl;

                        cout << "SIOPAO" <<endl;
                        cout << " P42 - 55 Asado" <<endl;
                        cout << " P42 - 55 Bola-Bola" <<endl;
                        cout << " P42 - 55 Mushroom Sisig" <<endl;
                        cout << " P55 Chicken Asado" <<endl << endl;

                        cout << "HOTBUNS" << endl;
                        cout << " P45 Angus Beef" <<endl;
                        cout << " P45 Cheese Hungarian" <<endl;
                        cout << " P45 Chicken Cheesedog" <<endl;
                        cout << " P45 Jumbo Classic" <<endl;
                        cout << " P45 Spicy Hotdog" <<endl;
                        cout << " P45 Tj Classic" <<endl;
                        cout << " P45 Tj Cheesedog" <<endl << endl;

                        cout << "SANDWICHES AND MEALS" <<endl;
                        cout << " P35 - 65 Sandwiches" <<endl;
                        cout << " P37 - 45 Meals" <<endl << endl;

                }
              // prints the statement below if the input is invalid
            } else {
                cout << "Invalid choice. Please input a valid number" << endl;
            }
        }
    } 
    
    while (budget <= 0 || budget >= 200); //repeats the code until the input is valid

    return 0; // return 0 in the main function means that the program executed successfully.
}