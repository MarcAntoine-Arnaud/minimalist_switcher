#include "switcher.h"

/**
 * @brief main
 * This is a program for showing and testing the switcher's interface
 * @param argc
 * Number of arguments
 * @param argv
 * Array of arguments
 * @return
 * Result of the main program
 * @author
 * Baptiste DRAPEAUD
 */
int main(int argc, char** argv)
{
    QApplication app(argc, argv); /**< Objet for application handling **/

    switcher sw;
    sw.show();

    return app.exec();
}
