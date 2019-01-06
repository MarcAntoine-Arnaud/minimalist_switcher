#pragma once

///MACROS
#define SWITCHER_ROW_BUTS 4 /**< Number of buttons in each row of the switchers **/

///LIBRARIES
    //Qt
    #include <QWidget>
    #include <QPushButton>
    #include <QLayout>
    #include <QGroupBox>
    #include <QSlider>
    #include <QLineEdit>

    //Standards C++
    #include <array>

class switcher_gui : public QWidget
{
private:
    ///MEMBERS
    std::array<QPushButton*,SWITCHER_ROW_BUTS> m_prgm_buts; /**< Buttons for program switching**/
    std::array<QPushButton*,SWITCHER_ROW_BUTS> m_prw_buts; /**< Buttons for preview switching**/
    QSlider* m_t_bar; /**< T bar for the transition between prgm and prw **/
    QLineEdit* m_trans_duration; /**< Display the duration of the transition **/
    QPushButton* m_auto_trans; /**< Button for the auto transition with the TBar**/
    QPushButton* m_cut; /**< Button for a direct transition with program and preview **/

public:
    ///CONSTRUCTORS
    /**
     * @brief switcher_gui
     * Parameters constructor
     * @param _parent
     * Parent of the QWidget
     */
    switcher_gui(QWidget* _parent);

private:
    ///METHODS
        /**INIT**/
        /**
         * @brief init_buttons
         * Initialize program and preview buttons
         * @return
         * GroupBox for display
         */
        QGroupBox* init_buttons();

        /**
         * @brief init_handlers
         * Initialize Tbar and other buttons
         * @return
         * GroupBox for display
         */
        QGroupBox* init_handlers();
};
