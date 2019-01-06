///HEADERS
#include "switcher.h"

///DECLARATION
    /**CONSTRUCTORS**/
    switcher::switcher() : QMainWindow(nullptr)
    {
        m_sw_gui = new switcher_gui(this); //Initialize switcher gui
        m_mix_gui = new mixer_gui(this); //Initialize mixer gui
        QHBoxLayout* layout = new QHBoxLayout(this); /**< Main layout of the switcher **/
        layout->addWidget(m_sw_gui);
        layout->addWidget(m_mix_gui);

        QWidget* proxy = new QWidget(this); /**< Widget proxy for using layout **/
        proxy->setLayout(layout);

        setCentralWidget(proxy);
    }
