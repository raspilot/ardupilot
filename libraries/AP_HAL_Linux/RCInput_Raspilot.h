
#ifndef __AP_HAL_LINUX_RCINPUT_RASPILOT_H__
#define __AP_HAL_LINUX_RCINPUT_RASPILOT_H__

#include "AP_HAL_Linux.h"
#include "RCInput.h"

class Linux::LinuxRCInput_Raspilot : public Linux::LinuxRCInput
{
public:
    void init(void*);

    bool rc_bind(int dsmMode);

private:
    uint32_t _last_timer;

    void _poll_data(void);
};

#endif // __AP_HAL_LINUX_RCINPUT_RASPILOT_H__
