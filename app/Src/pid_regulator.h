#ifndef __PID_REGULATOR__
#define __PID_REGULATOR__
#include "stm32_dsp.h"
typedef struct {
  uint16_t enc_x;
  uint16_t enc_y;
  int16_t speed_x;
  int16_t speed_y;
} PID_REG_STAT;

void SetEnc(unsigned x, unsigned y);
void GetPidStat(PID_REG_STAT *pStat);
void PidRun(int16_t speed_x_s, int16_t speed_y_s);
void PidSensors();
void GetPidCoefs_X(PID_COEFS *pCoefs);
void GetPidCoefs_Y(PID_COEFS *pCoefs);
void SetPidCoefs_X(PID_COEFS *pCoefs);
void SetPidCoefs_Y(PID_COEFS *pCoefs);
void PidReset();
#endif