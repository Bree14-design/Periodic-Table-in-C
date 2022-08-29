/* Periodic Table. */
#include <stdio.h>

int main()
{
    /* Declare the variables: */

    int nVal; // Option of the user: choose or exit.
    int nAtomicNum; // Atomic number of the element.
    int nExit; // Exit the program.

    /* Print the table header: */

    printf("Welcome to the Periodic Table!\n");

    /* Print the options of the user: */

    printf("* Please enter the number 1 to know more about an element: \n");
    printf("* Please enter the number 2 to exit: \n");

    printf("Enter the number: \n");
    scanf("%d", &nVal);

    /* Make switch statement to determine the action to be taken: */

    switch (nVal)
    {
        case 1:
            printf("Please enter the atomic number of the element: \n");
            scanf("%d", &nAtomicNum);
            break;
        case 2:
            printf("Are you sure you want to exit? \n");
            printf("Please enter 3 to exit: \n");
            printf("Please enter 4 to continue: \n");

            printf("Enter the number: \n");
            scanf("%d", &nExit);;
            break;
        default:
            break;
    }

    /* Make a switch statement to exit or continue: */

    switch (nExit)
    {
        case 3:
            printf("Thank you for using the Periodic Table.\n");
            break;
        case 4:
            printf("Welcome to the Periodic Table!\n");
            printf("* Please enter the number 1 to know more about an element: \n");
            printf("* Please enter the number 2 to exit: \n");
            break;
        default:
            break;
    }

    /* Make a switch statement to display each element: */

    switch (nAtomicNum)
    {
        case 1:
            printf("\n Hydrogen is a chemical element with symbol H and atomic number 1.\n With a standard atomic weight of 1.00794 u,\n hydrogen is the lightest element on the periodic table.\n");
            break;
        case 2:
            printf("\n Helium is a chemical element with symbol He and atomic number 2.\n It is a colorless, odorless, tasteless, non-toxic, inert, monatomic gas,\n the first in the noble gas group in the periodic table. Its boiling point is the lowest among all the elements.\n");
            break;
        case 3:
            printf("\n Lithium is a chemical element with symbol Li and atomic number 3.\n It is a soft, silvery-white alkali metal.\n Under standard conditions, it is the lightest metal and the least dense solid element.\n");
            break;
        case 4:
            printf("\n Beryllium is a chemical element with symbol Be and atomic number 4.\n It is a hard, silvery-white metallic element in the carbon group.\n Beryllium is a relatively rare element in the universe,\n usually occurring as a product of the spallation of larger atomic nuclei that have collided with cosmic rays.\n");
            break;
        case 5:
            printf("\n Boron is a chemical element with symbol B and atomic number 5.\n It is a hard, grey, solid metal which is hard and brittle when cut with a knife.\n");
            break;
        case 6:
            printf("\n Carbon is a chemical element with symbol C and atomic number 6.\n It is a nonmetallic, hard, blue-gray, solid transition element.\n Carbon is the most abundant element in the universe.\n");
            break;
        case 7:
            printf("\n Nitrogen is a chemical element with symbol N and atomic number 7.\n It is a colorless, odorless, tasteless, non-toxic, inert, monatomic gas,\n the second in the noble gas group in the periodic table. Its boiling point is the lowest among all the elements.\n");
            break;
        case 8:
            printf("\n Oxygen is a chemical element with symbol O and atomic number 8.\n It is a colorless, odorless \n");
            break;
        case 9:
            printf("\n Fluorine is a chemical element with symbol F and atomic number 9.\n It is a colorless, odorless, tasteless, non-toxic, inert, monatomic gas,\n the third in the noble gas group in the periodic table.\n Its boiling point is the lowest among all the elements.\n");
            break;
        case 10:  
            printf("\n Neon is a chemical element with symbol Ne and atomic number 10.\n It is a colorless, odorless, tasteless, non-toxic, inert, monatomic gas,\n the fourth in the noble gas group in the periodic table.\n Its boiling point is the lowest among all the elements.\n");
            break;
        case 11:
            printf("\n Sodium is a chemical element with symbol Na and atomic number 11.\n It is a soft, silvery-white, highly reactive metal.\n Sodium is the first element of the alkali metal group, with the second being Calcium.\n");
            break;
        case 12:
            printf("\n Magnesium is a chemical element with symbol Mg and atomic number 12.\n It is a hard, silver-white, ductile metal.\n Magnesium is the third element of the alkaline earth metal group.\n");
            break;
        case 13:
            printf("\n Aluminum is a chemical element with symbol Al and atomic number 13.\n It is a soft, silvery-white, lustrous metal.\n Aluminium is the third element of the transition metal group.\n");
            break;
        case 14:
            printf("\n Silicon is a chemical element with symbol Si and atomic number 14.\n It is a hard, crystalline, brittle solid with a blue-gray color.\n Silicon is the fourth element of the group of the periodic table.\n");
            break;
        case 15:
            printf("\n Phosphorus is a chemical element with symbol P and atomic number 15.\n It is a soft, silvery-white, reactive solid.\n Phosphorus is the fifth element of the group of the periodic table.\n");
            break;

        default:
            break;

    }
    return 0;

    /* End of the program. */
}
