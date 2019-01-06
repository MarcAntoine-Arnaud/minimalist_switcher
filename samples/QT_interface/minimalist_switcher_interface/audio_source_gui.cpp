///HEADERS
#include "audio_source_gui.h"

///DECLARATION
    /**CONSTRUCTEURS**/
    audio_source_gui::audio_source_gui(const QString& _title, QWidget *_parent) : QWidget(_parent)
    {
        QVBoxLayout* layout = new QVBoxLayout(this); //Initialize layout
        setLayout(layout);
    }
