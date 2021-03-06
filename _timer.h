
#ifndef TIMER_H
#define TIMER_H


#include <stdint.h>


class Timer {
    private:
        uint32_t nextTick;
        uint16_t delay;
		bool ticked;
		bool disabled = false;

    public:
        Timer(uint16_t delay);
        const bool hasTicked();
		void reset();
		void setDelay(uint16_t delay);
		bool disable();
		bool enable();
};


#endif
