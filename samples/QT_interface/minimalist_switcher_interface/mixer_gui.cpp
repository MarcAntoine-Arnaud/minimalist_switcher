///HEADERS
#include "mixer_gui.h"

///DECLARATION
    /**CONSTRUCTORS**/
    mixer_gui::mixer_gui(QWidget *_parent) : QWidget(_parent)
    {
        QHBoxLayout* layout = new QHBoxLayout(this);
        for(size_t i=0; i<AUDIO_SOURCE_NUM; i++) //Initialize audio sources
        {
            m_audio_sources[i] = new audio_source_gui(QString::number(i+1), this);
            layout->addWidget(m_audio_sources[i]);
        }
    }
