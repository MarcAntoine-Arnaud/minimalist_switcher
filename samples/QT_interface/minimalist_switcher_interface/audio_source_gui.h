#pragma once

///DECLARATION
    //Qt
    #include <QGroupBox>
    #include <QWidget>
    #include <QLabel>
    #include <QSlider>
    #include <QCheckBox>
    #include <QLayout>

/**
 * @brief The audio_source_gui class define the user interface of on audio source
 * of the mixer
 */
class audio_source_gui : public QWidget
{
    QLabel* m_title; /**< Title of the source **/
    QSlider* m_fader; /**< Slider used as a audio fader **/
    QCheckBox* m_solo; /**< Button for solo playing **/
    QCheckBox* m_mute; /**< Button for muting the source **/

public:
    /**
     * @brief audio_source_gui
     * Parameters constructor
     * @param _parent
     * Audio_source's parent
     * @param _title
     * Title of the audio source
     */
    audio_source_gui(const QString& _title, QWidget* _parent);
};
