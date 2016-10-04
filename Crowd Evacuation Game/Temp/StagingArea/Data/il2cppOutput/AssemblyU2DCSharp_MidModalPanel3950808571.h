#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// MidModalPanel
struct MidModalPanel_t3950808571;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MidModalPanel
struct  MidModalPanel_t3950808571  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button MidModalPanel::cont
	Button_t2872111280 * ___cont_2;
	// UnityEngine.UI.Button MidModalPanel::restart
	Button_t2872111280 * ___restart_3;
	// UnityEngine.UI.Button MidModalPanel::quit
	Button_t2872111280 * ___quit_4;
	// UnityEngine.GameObject MidModalPanel::modalPanelObject
	GameObject_t1756533147 * ___modalPanelObject_5;

public:
	inline static int32_t get_offset_of_cont_2() { return static_cast<int32_t>(offsetof(MidModalPanel_t3950808571, ___cont_2)); }
	inline Button_t2872111280 * get_cont_2() const { return ___cont_2; }
	inline Button_t2872111280 ** get_address_of_cont_2() { return &___cont_2; }
	inline void set_cont_2(Button_t2872111280 * value)
	{
		___cont_2 = value;
		Il2CppCodeGenWriteBarrier(&___cont_2, value);
	}

	inline static int32_t get_offset_of_restart_3() { return static_cast<int32_t>(offsetof(MidModalPanel_t3950808571, ___restart_3)); }
	inline Button_t2872111280 * get_restart_3() const { return ___restart_3; }
	inline Button_t2872111280 ** get_address_of_restart_3() { return &___restart_3; }
	inline void set_restart_3(Button_t2872111280 * value)
	{
		___restart_3 = value;
		Il2CppCodeGenWriteBarrier(&___restart_3, value);
	}

	inline static int32_t get_offset_of_quit_4() { return static_cast<int32_t>(offsetof(MidModalPanel_t3950808571, ___quit_4)); }
	inline Button_t2872111280 * get_quit_4() const { return ___quit_4; }
	inline Button_t2872111280 ** get_address_of_quit_4() { return &___quit_4; }
	inline void set_quit_4(Button_t2872111280 * value)
	{
		___quit_4 = value;
		Il2CppCodeGenWriteBarrier(&___quit_4, value);
	}

	inline static int32_t get_offset_of_modalPanelObject_5() { return static_cast<int32_t>(offsetof(MidModalPanel_t3950808571, ___modalPanelObject_5)); }
	inline GameObject_t1756533147 * get_modalPanelObject_5() const { return ___modalPanelObject_5; }
	inline GameObject_t1756533147 ** get_address_of_modalPanelObject_5() { return &___modalPanelObject_5; }
	inline void set_modalPanelObject_5(GameObject_t1756533147 * value)
	{
		___modalPanelObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___modalPanelObject_5, value);
	}
};

struct MidModalPanel_t3950808571_StaticFields
{
public:
	// MidModalPanel MidModalPanel::modalPanel
	MidModalPanel_t3950808571 * ___modalPanel_6;

public:
	inline static int32_t get_offset_of_modalPanel_6() { return static_cast<int32_t>(offsetof(MidModalPanel_t3950808571_StaticFields, ___modalPanel_6)); }
	inline MidModalPanel_t3950808571 * get_modalPanel_6() const { return ___modalPanel_6; }
	inline MidModalPanel_t3950808571 ** get_address_of_modalPanel_6() { return &___modalPanel_6; }
	inline void set_modalPanel_6(MidModalPanel_t3950808571 * value)
	{
		___modalPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___modalPanel_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
