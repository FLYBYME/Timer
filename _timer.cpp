#include <Arduino.h>
#include "_timer.h"


Timer::Timer(uint16_t delay) {
	this->delay = delay;
	this->nextTick = millis() + this->delay;
	this->ticked = false;
}

const bool Timer::hasTicked() {
    if (this->ticked)
        return true;

    if (millis() >= this->nextTick) {
        this->ticked = true;
        return true;
    }

    return false;
}

void Timer::reset() {
    this->nextTick = millis() + this->delay;
    this->ticked = false;
}

void Timer::setDelay(uint16_t delay) {
	this->delay = delay;
	this->nextTick = millis() + this->delay;
	this->ticked = false;
}

bool Timer::disable() {
	this->disabled = true;
};

bool Timer::enable() {
	this->disabled = false;
};