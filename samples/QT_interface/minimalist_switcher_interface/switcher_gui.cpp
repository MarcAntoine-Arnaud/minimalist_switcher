///HEADERS
#include "switcher_gui.h"

///DECLARATION
    /**CONSTRUCTORS**/
    switcher_gui::switcher_gui(QWidget *_parent) : QWidget(_parent)
    {
        QHBoxLayout* layout = new QHBoxLayout(this); /**< Main layout **/
        layout->addWidget(init_buttons());
        layout->addWidget(init_handlers());
    }

    /**INIT**/
    QGroupBox* switcher_gui::init_buttons()
    {
        QGridLayout* matrix = new QGridLayout(this); /**< Matrix of buttons for display **/

        for(size_t i=0; i<SWITCHER_ROW_BUTS; i++) //Initialize program buttons
        {
            m_prgm_buts[i] = new QPushButton(QString::number(i+1), this);
                m_prgm_buts[i]->setFixedSize(40,40);
            matrix->addWidget(m_prgm_buts[i],0,i); //Add button to the layout
        }

        for(size_t i=0; i<SWITCHER_ROW_BUTS; i++)
        {
            m_prw_buts[i] = new QPushButton(QString::number(i+1), this);
                m_prw_buts[i]->setFixedSize(40,40);
            matrix->addWidget(m_prw_buts[i],1,i);
        }

        QGroupBox* box = new QGroupBox(this); /**< GroupBox for getting the layout in **/
            box->setLayout(matrix);
            box->setTitle("Buttons");

        return box;
    }

    QGroupBox* switcher_gui::init_handlers()
    {
        m_t_bar = new QSlider(Qt::Vertical,this); //Initialize T-bar
        m_trans_duration = new QLineEdit(this); //Initialize display for trans-duration
            m_trans_duration->setFixedSize(40,20);
        m_cut = new QPushButton("Cut", this); //Initialize Cut button
            m_cut->setFixedSize(40,40);
        m_auto_trans = new QPushButton("Auto-trans", this); //Initialize Auto-trans button
            m_auto_trans->setFixedSize(40,40);

        QGridLayout* layout = new QGridLayout(this); //Organizing layout for display
        layout->addWidget(m_t_bar,1,0);
        layout->addWidget(m_trans_duration,0,0);
        layout->addWidget(m_auto_trans,0,1);
        layout->addWidget(m_cut,1,1);

        QGroupBox* box = new QGroupBox(this);
        box->setLayout(layout);
        box->setTitle("Handlers");

        return box;
    }
