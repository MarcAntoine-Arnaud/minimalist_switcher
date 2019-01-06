#pragma once

///LIBRARIES
    //Qt
    #include <QApplication>
    #include <QMainWindow>

///HEADERS
#include "switcher_gui.h"
#include "mixer_gui.h"

/**
 * @brief The switcher class define the user interface and all of the processing
 * needed to run the program, this is the main class of our program.
 */
class switcher : public QMainWindow
{
private:
    ///MEMBERS
    switcher_gui* m_sw_gui; /**< User interface for the main switcher part **/
    mixer_gui* m_mix_gui; /**< User interface for the audio mixer part **/

public:
    ///CONSTRUCTORS
    /**
     * @brief switcher
     * default constructor
     */
    switcher();
};
