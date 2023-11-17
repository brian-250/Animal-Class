#include "heart.h"

Heart::Heart() : heart_beat_(false) {}

Heart::Heart(bool heart_beat) : heart_beat_(heart_beat) {}

bool Heart::heartBeat() const {
    return this->heart_beat_;
}

void Heart::setHeartBeat(bool heart_beat) {
    this->heart_beat_ = heart_beat;
}