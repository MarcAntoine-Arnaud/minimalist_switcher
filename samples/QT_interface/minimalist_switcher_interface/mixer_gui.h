#pragma once

///MACROS
#define AUDIO_SOURCE_NUM 4 /**< Number of audio source **/

///LIBRARIES
    //Qt
    #include <QWidget>
    #include <QLayout>

    //Standards C++
    #include <array>

///HEADERS
#include "audio_source_gui.h"

/**
 * @brief The mixer_gui class is defined for mixing and for other audio related
 * parts
 */
class mixer_gui : public QWidget
{
private:
    ///MEMBERS
    std::array<audio_source_gui*,AUDIO_SOURCE_NUM> m_audio_sources; /**< Interface for the audio sources **/

public:
    ///CONSTRUCTORS
    /**
     * @brief mixer_gui
     * Parameters constructor
     * @param _parent
     * Mixer's parent
     */
    mixer_gui(QWidget* _parent);
};
