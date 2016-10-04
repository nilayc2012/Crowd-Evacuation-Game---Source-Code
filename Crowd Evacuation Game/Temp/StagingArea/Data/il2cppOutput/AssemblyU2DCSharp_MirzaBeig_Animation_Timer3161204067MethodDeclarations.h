#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MirzaBeig.Animation.Timer
struct Timer_t3161204067;
// MirzaBeig.Animation.Timer/onTimerCompleteEventHandler
struct onTimerCompleteEventHandler_t2244827951;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MirzaBeig_Animation_Timer_onTime2244827951.h"

// System.Void MirzaBeig.Animation.Timer::.ctor(System.Single,System.Single)
extern "C"  void Timer__ctor_m2050007540 (Timer_t3161204067 * __this, float ___time0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Animation.Timer::add_onTimerCompleteEvent(MirzaBeig.Animation.Timer/onTimerCompleteEventHandler)
extern "C"  void Timer_add_onTimerCompleteEvent_m2120816496 (Timer_t3161204067 * __this, onTimerCompleteEventHandler_t2244827951 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Animation.Timer::remove_onTimerCompleteEvent(MirzaBeig.Animation.Timer/onTimerCompleteEventHandler)
extern "C"  void Timer_remove_onTimerCompleteEvent_m3234331249 (Timer_t3161204067 * __this, onTimerCompleteEventHandler_t2244827951 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MirzaBeig.Animation.Timer::get_isComplete()
extern "C"  bool Timer_get_isComplete_m1675265016 (Timer_t3161204067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Animation.Timer::set_isComplete(System.Boolean)
extern "C"  void Timer_set_isComplete_m1129362723 (Timer_t3161204067 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Animation.Timer::get_normalizedTime()
extern "C"  float Timer_get_normalizedTime_m2544431061 (Timer_t3161204067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Animation.Timer::play()
extern "C"  void Timer_play_m3461933786 (Timer_t3161204067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Animation.Timer::pause()
extern "C"  void Timer_pause_m3313120836 (Timer_t3161204067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Animation.Timer::stop()
extern "C"  void Timer_stop_m362982196 (Timer_t3161204067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Animation.Timer::reset()
extern "C"  void Timer_reset_m1905679639 (Timer_t3161204067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Animation.Timer::setToComplete()
extern "C"  void Timer_setToComplete_m1788085060 (Timer_t3161204067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MirzaBeig.Animation.Timer::update()
extern "C"  bool Timer_update_m1602403879 (Timer_t3161204067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MirzaBeig.Animation.Timer::update(System.Single)
extern "C"  bool Timer_update_m1265759020 (Timer_t3161204067 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
