#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// MidModalPanel
struct MidModalPanel_t3950808571;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// System.Random
struct Random_t1044426839;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// bringUpMenu
struct  bringUpMenu_t2336637086  : public MonoBehaviour_t1158329972
{
public:
	// System.Single bringUpMenu::squareFactor
	float ___squareFactor_2;
	// UnityEngine.Camera bringUpMenu::mainCamera
	Camera_t189460977 * ___mainCamera_3;
	// UnityEngine.Canvas bringUpMenu::menuWithEndMid
	Canvas_t209405766 * ___menuWithEndMid_4;
	// UnityEngine.Canvas bringUpMenu::serviceMenu
	Canvas_t209405766 * ___serviceMenu_5;
	// UnityEngine.GameObject bringUpMenu::endGame
	GameObject_t1756533147 * ___endGame_6;
	// UnityEngine.GameObject bringUpMenu::midGame
	GameObject_t1756533147 * ___midGame_7;
	// UnityEngine.GameObject bringUpMenu::light
	GameObject_t1756533147 * ___light_8;
	// UnityEngine.GameObject bringUpMenu::canvasDev
	GameObject_t1756533147 * ___canvasDev_9;
	// UnityEngine.GameObject bringUpMenu::heatMapPlane
	GameObject_t1756533147 * ___heatMapPlane_12;
	// UnityEngine.GameObject bringUpMenu::heatPlane
	GameObject_t1756533147 * ___heatPlane_13;
	// System.Collections.IEnumerator bringUpMenu::coroutine
	Il2CppObject * ___coroutine_14;
	// UnityEngine.Canvas bringUpMenu::menu
	Canvas_t209405766 * ___menu_16;
	// System.Boolean bringUpMenu::menuEnabled
	bool ___menuEnabled_17;
	// UnityEngine.GameObject bringUpMenu::mainCam
	GameObject_t1756533147 * ___mainCam_18;
	// System.Int32 bringUpMenu::nOfDoors
	int32_t ___nOfDoors_19;
	// System.Int32 bringUpMenu::totalnofDoors
	int32_t ___totalnofDoors_20;
	// System.Int32 bringUpMenu::nOfPillars
	int32_t ___nOfPillars_21;
	// System.Int32 bringUpMenu::totalnofPillars
	int32_t ___totalnofPillars_22;
	// System.Int32 bringUpMenu::nOfWalls
	int32_t ___nOfWalls_23;
	// System.Int32 bringUpMenu::totalnofWalls
	int32_t ___totalnofWalls_24;
	// System.Single bringUpMenu::doorWidth
	float ___doorWidth_25;
	// System.Single bringUpMenu::pillarWidth
	float ___pillarWidth_26;
	// System.Int32 bringUpMenu::NoOfAgents
	int32_t ___NoOfAgents_27;
	// UnityEngine.UI.Text bringUpMenu::showWidthPillarS
	Text_t356221433 * ___showWidthPillarS_28;
	// UnityEngine.UI.Slider bringUpMenu::pillarWidthS
	Slider_t297367283 * ___pillarWidthS_29;
	// UnityEngine.GameObject bringUpMenu::agentObj
	GameObject_t1756533147 * ___agentObj_30;
	// UnityEngine.GameObject bringUpMenu::restartLevel
	GameObject_t1756533147 * ___restartLevel_31;
	// UnityEngine.GameObject bringUpMenu::infoButton
	GameObject_t1756533147 * ___infoButton_32;
	// UnityEngine.GameObject bringUpMenu::heatMapButton
	GameObject_t1756533147 * ___heatMapButton_33;
	// UnityEngine.GameObject bringUpMenu::nextLevelButton
	GameObject_t1756533147 * ___nextLevelButton_34;
	// UnityEngine.GameObject bringUpMenu::bestHeatMapButton
	GameObject_t1756533147 * ___bestHeatMapButton_35;
	// UnityEngine.UI.Text bringUpMenu::textDoors
	Text_t356221433 * ___textDoors_37;
	// UnityEngine.UI.Text bringUpMenu::textPillars
	Text_t356221433 * ___textPillars_38;
	// UnityEngine.UI.Text bringUpMenu::textWall
	Text_t356221433 * ___textWall_39;
	// UnityEngine.GameObject[] bringUpMenu::walls
	GameObjectU5BU5D_t3057952154* ___walls_40;
	// UnityEngine.GameObject[] bringUpMenu::outerWall
	GameObjectU5BU5D_t3057952154* ___outerWall_41;
	// MidModalPanel bringUpMenu::midmodalPanel
	MidModalPanel_t3950808571 * ___midmodalPanel_45;
	// UnityEngine.Events.UnityAction bringUpMenu::restart
	UnityAction_t4025899511 * ___restart_46;
	// UnityEngine.Events.UnityAction bringUpMenu::quit
	UnityAction_t4025899511 * ___quit_47;
	// UnityEngine.UI.Text bringUpMenu::amountOfPeopleEscaped
	Text_t356221433 * ___amountOfPeopleEscaped_49;
	// UnityEngine.UI.Text bringUpMenu::amountOfPeopleLeft
	Text_t356221433 * ___amountOfPeopleLeft_50;
	// UnityEngine.UI.Text bringUpMenu::totalEscapeTime
	Text_t356221433 * ___totalEscapeTime_51;
	// UnityEngine.UI.Text bringUpMenu::averageEscapeTime
	Text_t356221433 * ___averageEscapeTime_52;
	// System.Int32 bringUpMenu::timer
	int32_t ___timer_53;
	// System.Boolean bringUpMenu::timeFlag
	bool ___timeFlag_54;

public:
	inline static int32_t get_offset_of_squareFactor_2() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___squareFactor_2)); }
	inline float get_squareFactor_2() const { return ___squareFactor_2; }
	inline float* get_address_of_squareFactor_2() { return &___squareFactor_2; }
	inline void set_squareFactor_2(float value)
	{
		___squareFactor_2 = value;
	}

	inline static int32_t get_offset_of_mainCamera_3() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___mainCamera_3)); }
	inline Camera_t189460977 * get_mainCamera_3() const { return ___mainCamera_3; }
	inline Camera_t189460977 ** get_address_of_mainCamera_3() { return &___mainCamera_3; }
	inline void set_mainCamera_3(Camera_t189460977 * value)
	{
		___mainCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_3, value);
	}

	inline static int32_t get_offset_of_menuWithEndMid_4() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___menuWithEndMid_4)); }
	inline Canvas_t209405766 * get_menuWithEndMid_4() const { return ___menuWithEndMid_4; }
	inline Canvas_t209405766 ** get_address_of_menuWithEndMid_4() { return &___menuWithEndMid_4; }
	inline void set_menuWithEndMid_4(Canvas_t209405766 * value)
	{
		___menuWithEndMid_4 = value;
		Il2CppCodeGenWriteBarrier(&___menuWithEndMid_4, value);
	}

	inline static int32_t get_offset_of_serviceMenu_5() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___serviceMenu_5)); }
	inline Canvas_t209405766 * get_serviceMenu_5() const { return ___serviceMenu_5; }
	inline Canvas_t209405766 ** get_address_of_serviceMenu_5() { return &___serviceMenu_5; }
	inline void set_serviceMenu_5(Canvas_t209405766 * value)
	{
		___serviceMenu_5 = value;
		Il2CppCodeGenWriteBarrier(&___serviceMenu_5, value);
	}

	inline static int32_t get_offset_of_endGame_6() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___endGame_6)); }
	inline GameObject_t1756533147 * get_endGame_6() const { return ___endGame_6; }
	inline GameObject_t1756533147 ** get_address_of_endGame_6() { return &___endGame_6; }
	inline void set_endGame_6(GameObject_t1756533147 * value)
	{
		___endGame_6 = value;
		Il2CppCodeGenWriteBarrier(&___endGame_6, value);
	}

	inline static int32_t get_offset_of_midGame_7() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___midGame_7)); }
	inline GameObject_t1756533147 * get_midGame_7() const { return ___midGame_7; }
	inline GameObject_t1756533147 ** get_address_of_midGame_7() { return &___midGame_7; }
	inline void set_midGame_7(GameObject_t1756533147 * value)
	{
		___midGame_7 = value;
		Il2CppCodeGenWriteBarrier(&___midGame_7, value);
	}

	inline static int32_t get_offset_of_light_8() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___light_8)); }
	inline GameObject_t1756533147 * get_light_8() const { return ___light_8; }
	inline GameObject_t1756533147 ** get_address_of_light_8() { return &___light_8; }
	inline void set_light_8(GameObject_t1756533147 * value)
	{
		___light_8 = value;
		Il2CppCodeGenWriteBarrier(&___light_8, value);
	}

	inline static int32_t get_offset_of_canvasDev_9() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___canvasDev_9)); }
	inline GameObject_t1756533147 * get_canvasDev_9() const { return ___canvasDev_9; }
	inline GameObject_t1756533147 ** get_address_of_canvasDev_9() { return &___canvasDev_9; }
	inline void set_canvasDev_9(GameObject_t1756533147 * value)
	{
		___canvasDev_9 = value;
		Il2CppCodeGenWriteBarrier(&___canvasDev_9, value);
	}

	inline static int32_t get_offset_of_heatMapPlane_12() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___heatMapPlane_12)); }
	inline GameObject_t1756533147 * get_heatMapPlane_12() const { return ___heatMapPlane_12; }
	inline GameObject_t1756533147 ** get_address_of_heatMapPlane_12() { return &___heatMapPlane_12; }
	inline void set_heatMapPlane_12(GameObject_t1756533147 * value)
	{
		___heatMapPlane_12 = value;
		Il2CppCodeGenWriteBarrier(&___heatMapPlane_12, value);
	}

	inline static int32_t get_offset_of_heatPlane_13() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___heatPlane_13)); }
	inline GameObject_t1756533147 * get_heatPlane_13() const { return ___heatPlane_13; }
	inline GameObject_t1756533147 ** get_address_of_heatPlane_13() { return &___heatPlane_13; }
	inline void set_heatPlane_13(GameObject_t1756533147 * value)
	{
		___heatPlane_13 = value;
		Il2CppCodeGenWriteBarrier(&___heatPlane_13, value);
	}

	inline static int32_t get_offset_of_coroutine_14() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___coroutine_14)); }
	inline Il2CppObject * get_coroutine_14() const { return ___coroutine_14; }
	inline Il2CppObject ** get_address_of_coroutine_14() { return &___coroutine_14; }
	inline void set_coroutine_14(Il2CppObject * value)
	{
		___coroutine_14 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_14, value);
	}

	inline static int32_t get_offset_of_menu_16() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___menu_16)); }
	inline Canvas_t209405766 * get_menu_16() const { return ___menu_16; }
	inline Canvas_t209405766 ** get_address_of_menu_16() { return &___menu_16; }
	inline void set_menu_16(Canvas_t209405766 * value)
	{
		___menu_16 = value;
		Il2CppCodeGenWriteBarrier(&___menu_16, value);
	}

	inline static int32_t get_offset_of_menuEnabled_17() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___menuEnabled_17)); }
	inline bool get_menuEnabled_17() const { return ___menuEnabled_17; }
	inline bool* get_address_of_menuEnabled_17() { return &___menuEnabled_17; }
	inline void set_menuEnabled_17(bool value)
	{
		___menuEnabled_17 = value;
	}

	inline static int32_t get_offset_of_mainCam_18() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___mainCam_18)); }
	inline GameObject_t1756533147 * get_mainCam_18() const { return ___mainCam_18; }
	inline GameObject_t1756533147 ** get_address_of_mainCam_18() { return &___mainCam_18; }
	inline void set_mainCam_18(GameObject_t1756533147 * value)
	{
		___mainCam_18 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_18, value);
	}

	inline static int32_t get_offset_of_nOfDoors_19() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___nOfDoors_19)); }
	inline int32_t get_nOfDoors_19() const { return ___nOfDoors_19; }
	inline int32_t* get_address_of_nOfDoors_19() { return &___nOfDoors_19; }
	inline void set_nOfDoors_19(int32_t value)
	{
		___nOfDoors_19 = value;
	}

	inline static int32_t get_offset_of_totalnofDoors_20() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___totalnofDoors_20)); }
	inline int32_t get_totalnofDoors_20() const { return ___totalnofDoors_20; }
	inline int32_t* get_address_of_totalnofDoors_20() { return &___totalnofDoors_20; }
	inline void set_totalnofDoors_20(int32_t value)
	{
		___totalnofDoors_20 = value;
	}

	inline static int32_t get_offset_of_nOfPillars_21() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___nOfPillars_21)); }
	inline int32_t get_nOfPillars_21() const { return ___nOfPillars_21; }
	inline int32_t* get_address_of_nOfPillars_21() { return &___nOfPillars_21; }
	inline void set_nOfPillars_21(int32_t value)
	{
		___nOfPillars_21 = value;
	}

	inline static int32_t get_offset_of_totalnofPillars_22() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___totalnofPillars_22)); }
	inline int32_t get_totalnofPillars_22() const { return ___totalnofPillars_22; }
	inline int32_t* get_address_of_totalnofPillars_22() { return &___totalnofPillars_22; }
	inline void set_totalnofPillars_22(int32_t value)
	{
		___totalnofPillars_22 = value;
	}

	inline static int32_t get_offset_of_nOfWalls_23() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___nOfWalls_23)); }
	inline int32_t get_nOfWalls_23() const { return ___nOfWalls_23; }
	inline int32_t* get_address_of_nOfWalls_23() { return &___nOfWalls_23; }
	inline void set_nOfWalls_23(int32_t value)
	{
		___nOfWalls_23 = value;
	}

	inline static int32_t get_offset_of_totalnofWalls_24() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___totalnofWalls_24)); }
	inline int32_t get_totalnofWalls_24() const { return ___totalnofWalls_24; }
	inline int32_t* get_address_of_totalnofWalls_24() { return &___totalnofWalls_24; }
	inline void set_totalnofWalls_24(int32_t value)
	{
		___totalnofWalls_24 = value;
	}

	inline static int32_t get_offset_of_doorWidth_25() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___doorWidth_25)); }
	inline float get_doorWidth_25() const { return ___doorWidth_25; }
	inline float* get_address_of_doorWidth_25() { return &___doorWidth_25; }
	inline void set_doorWidth_25(float value)
	{
		___doorWidth_25 = value;
	}

	inline static int32_t get_offset_of_pillarWidth_26() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___pillarWidth_26)); }
	inline float get_pillarWidth_26() const { return ___pillarWidth_26; }
	inline float* get_address_of_pillarWidth_26() { return &___pillarWidth_26; }
	inline void set_pillarWidth_26(float value)
	{
		___pillarWidth_26 = value;
	}

	inline static int32_t get_offset_of_NoOfAgents_27() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___NoOfAgents_27)); }
	inline int32_t get_NoOfAgents_27() const { return ___NoOfAgents_27; }
	inline int32_t* get_address_of_NoOfAgents_27() { return &___NoOfAgents_27; }
	inline void set_NoOfAgents_27(int32_t value)
	{
		___NoOfAgents_27 = value;
	}

	inline static int32_t get_offset_of_showWidthPillarS_28() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___showWidthPillarS_28)); }
	inline Text_t356221433 * get_showWidthPillarS_28() const { return ___showWidthPillarS_28; }
	inline Text_t356221433 ** get_address_of_showWidthPillarS_28() { return &___showWidthPillarS_28; }
	inline void set_showWidthPillarS_28(Text_t356221433 * value)
	{
		___showWidthPillarS_28 = value;
		Il2CppCodeGenWriteBarrier(&___showWidthPillarS_28, value);
	}

	inline static int32_t get_offset_of_pillarWidthS_29() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___pillarWidthS_29)); }
	inline Slider_t297367283 * get_pillarWidthS_29() const { return ___pillarWidthS_29; }
	inline Slider_t297367283 ** get_address_of_pillarWidthS_29() { return &___pillarWidthS_29; }
	inline void set_pillarWidthS_29(Slider_t297367283 * value)
	{
		___pillarWidthS_29 = value;
		Il2CppCodeGenWriteBarrier(&___pillarWidthS_29, value);
	}

	inline static int32_t get_offset_of_agentObj_30() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___agentObj_30)); }
	inline GameObject_t1756533147 * get_agentObj_30() const { return ___agentObj_30; }
	inline GameObject_t1756533147 ** get_address_of_agentObj_30() { return &___agentObj_30; }
	inline void set_agentObj_30(GameObject_t1756533147 * value)
	{
		___agentObj_30 = value;
		Il2CppCodeGenWriteBarrier(&___agentObj_30, value);
	}

	inline static int32_t get_offset_of_restartLevel_31() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___restartLevel_31)); }
	inline GameObject_t1756533147 * get_restartLevel_31() const { return ___restartLevel_31; }
	inline GameObject_t1756533147 ** get_address_of_restartLevel_31() { return &___restartLevel_31; }
	inline void set_restartLevel_31(GameObject_t1756533147 * value)
	{
		___restartLevel_31 = value;
		Il2CppCodeGenWriteBarrier(&___restartLevel_31, value);
	}

	inline static int32_t get_offset_of_infoButton_32() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___infoButton_32)); }
	inline GameObject_t1756533147 * get_infoButton_32() const { return ___infoButton_32; }
	inline GameObject_t1756533147 ** get_address_of_infoButton_32() { return &___infoButton_32; }
	inline void set_infoButton_32(GameObject_t1756533147 * value)
	{
		___infoButton_32 = value;
		Il2CppCodeGenWriteBarrier(&___infoButton_32, value);
	}

	inline static int32_t get_offset_of_heatMapButton_33() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___heatMapButton_33)); }
	inline GameObject_t1756533147 * get_heatMapButton_33() const { return ___heatMapButton_33; }
	inline GameObject_t1756533147 ** get_address_of_heatMapButton_33() { return &___heatMapButton_33; }
	inline void set_heatMapButton_33(GameObject_t1756533147 * value)
	{
		___heatMapButton_33 = value;
		Il2CppCodeGenWriteBarrier(&___heatMapButton_33, value);
	}

	inline static int32_t get_offset_of_nextLevelButton_34() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___nextLevelButton_34)); }
	inline GameObject_t1756533147 * get_nextLevelButton_34() const { return ___nextLevelButton_34; }
	inline GameObject_t1756533147 ** get_address_of_nextLevelButton_34() { return &___nextLevelButton_34; }
	inline void set_nextLevelButton_34(GameObject_t1756533147 * value)
	{
		___nextLevelButton_34 = value;
		Il2CppCodeGenWriteBarrier(&___nextLevelButton_34, value);
	}

	inline static int32_t get_offset_of_bestHeatMapButton_35() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___bestHeatMapButton_35)); }
	inline GameObject_t1756533147 * get_bestHeatMapButton_35() const { return ___bestHeatMapButton_35; }
	inline GameObject_t1756533147 ** get_address_of_bestHeatMapButton_35() { return &___bestHeatMapButton_35; }
	inline void set_bestHeatMapButton_35(GameObject_t1756533147 * value)
	{
		___bestHeatMapButton_35 = value;
		Il2CppCodeGenWriteBarrier(&___bestHeatMapButton_35, value);
	}

	inline static int32_t get_offset_of_textDoors_37() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___textDoors_37)); }
	inline Text_t356221433 * get_textDoors_37() const { return ___textDoors_37; }
	inline Text_t356221433 ** get_address_of_textDoors_37() { return &___textDoors_37; }
	inline void set_textDoors_37(Text_t356221433 * value)
	{
		___textDoors_37 = value;
		Il2CppCodeGenWriteBarrier(&___textDoors_37, value);
	}

	inline static int32_t get_offset_of_textPillars_38() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___textPillars_38)); }
	inline Text_t356221433 * get_textPillars_38() const { return ___textPillars_38; }
	inline Text_t356221433 ** get_address_of_textPillars_38() { return &___textPillars_38; }
	inline void set_textPillars_38(Text_t356221433 * value)
	{
		___textPillars_38 = value;
		Il2CppCodeGenWriteBarrier(&___textPillars_38, value);
	}

	inline static int32_t get_offset_of_textWall_39() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___textWall_39)); }
	inline Text_t356221433 * get_textWall_39() const { return ___textWall_39; }
	inline Text_t356221433 ** get_address_of_textWall_39() { return &___textWall_39; }
	inline void set_textWall_39(Text_t356221433 * value)
	{
		___textWall_39 = value;
		Il2CppCodeGenWriteBarrier(&___textWall_39, value);
	}

	inline static int32_t get_offset_of_walls_40() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___walls_40)); }
	inline GameObjectU5BU5D_t3057952154* get_walls_40() const { return ___walls_40; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_walls_40() { return &___walls_40; }
	inline void set_walls_40(GameObjectU5BU5D_t3057952154* value)
	{
		___walls_40 = value;
		Il2CppCodeGenWriteBarrier(&___walls_40, value);
	}

	inline static int32_t get_offset_of_outerWall_41() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___outerWall_41)); }
	inline GameObjectU5BU5D_t3057952154* get_outerWall_41() const { return ___outerWall_41; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_outerWall_41() { return &___outerWall_41; }
	inline void set_outerWall_41(GameObjectU5BU5D_t3057952154* value)
	{
		___outerWall_41 = value;
		Il2CppCodeGenWriteBarrier(&___outerWall_41, value);
	}

	inline static int32_t get_offset_of_midmodalPanel_45() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___midmodalPanel_45)); }
	inline MidModalPanel_t3950808571 * get_midmodalPanel_45() const { return ___midmodalPanel_45; }
	inline MidModalPanel_t3950808571 ** get_address_of_midmodalPanel_45() { return &___midmodalPanel_45; }
	inline void set_midmodalPanel_45(MidModalPanel_t3950808571 * value)
	{
		___midmodalPanel_45 = value;
		Il2CppCodeGenWriteBarrier(&___midmodalPanel_45, value);
	}

	inline static int32_t get_offset_of_restart_46() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___restart_46)); }
	inline UnityAction_t4025899511 * get_restart_46() const { return ___restart_46; }
	inline UnityAction_t4025899511 ** get_address_of_restart_46() { return &___restart_46; }
	inline void set_restart_46(UnityAction_t4025899511 * value)
	{
		___restart_46 = value;
		Il2CppCodeGenWriteBarrier(&___restart_46, value);
	}

	inline static int32_t get_offset_of_quit_47() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___quit_47)); }
	inline UnityAction_t4025899511 * get_quit_47() const { return ___quit_47; }
	inline UnityAction_t4025899511 ** get_address_of_quit_47() { return &___quit_47; }
	inline void set_quit_47(UnityAction_t4025899511 * value)
	{
		___quit_47 = value;
		Il2CppCodeGenWriteBarrier(&___quit_47, value);
	}

	inline static int32_t get_offset_of_amountOfPeopleEscaped_49() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___amountOfPeopleEscaped_49)); }
	inline Text_t356221433 * get_amountOfPeopleEscaped_49() const { return ___amountOfPeopleEscaped_49; }
	inline Text_t356221433 ** get_address_of_amountOfPeopleEscaped_49() { return &___amountOfPeopleEscaped_49; }
	inline void set_amountOfPeopleEscaped_49(Text_t356221433 * value)
	{
		___amountOfPeopleEscaped_49 = value;
		Il2CppCodeGenWriteBarrier(&___amountOfPeopleEscaped_49, value);
	}

	inline static int32_t get_offset_of_amountOfPeopleLeft_50() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___amountOfPeopleLeft_50)); }
	inline Text_t356221433 * get_amountOfPeopleLeft_50() const { return ___amountOfPeopleLeft_50; }
	inline Text_t356221433 ** get_address_of_amountOfPeopleLeft_50() { return &___amountOfPeopleLeft_50; }
	inline void set_amountOfPeopleLeft_50(Text_t356221433 * value)
	{
		___amountOfPeopleLeft_50 = value;
		Il2CppCodeGenWriteBarrier(&___amountOfPeopleLeft_50, value);
	}

	inline static int32_t get_offset_of_totalEscapeTime_51() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___totalEscapeTime_51)); }
	inline Text_t356221433 * get_totalEscapeTime_51() const { return ___totalEscapeTime_51; }
	inline Text_t356221433 ** get_address_of_totalEscapeTime_51() { return &___totalEscapeTime_51; }
	inline void set_totalEscapeTime_51(Text_t356221433 * value)
	{
		___totalEscapeTime_51 = value;
		Il2CppCodeGenWriteBarrier(&___totalEscapeTime_51, value);
	}

	inline static int32_t get_offset_of_averageEscapeTime_52() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___averageEscapeTime_52)); }
	inline Text_t356221433 * get_averageEscapeTime_52() const { return ___averageEscapeTime_52; }
	inline Text_t356221433 ** get_address_of_averageEscapeTime_52() { return &___averageEscapeTime_52; }
	inline void set_averageEscapeTime_52(Text_t356221433 * value)
	{
		___averageEscapeTime_52 = value;
		Il2CppCodeGenWriteBarrier(&___averageEscapeTime_52, value);
	}

	inline static int32_t get_offset_of_timer_53() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___timer_53)); }
	inline int32_t get_timer_53() const { return ___timer_53; }
	inline int32_t* get_address_of_timer_53() { return &___timer_53; }
	inline void set_timer_53(int32_t value)
	{
		___timer_53 = value;
	}

	inline static int32_t get_offset_of_timeFlag_54() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086, ___timeFlag_54)); }
	inline bool get_timeFlag_54() const { return ___timeFlag_54; }
	inline bool* get_address_of_timeFlag_54() { return &___timeFlag_54; }
	inline void set_timeFlag_54(bool value)
	{
		___timeFlag_54 = value;
	}
};

struct bringUpMenu_t2336637086_StaticFields
{
public:
	// System.Boolean bringUpMenu::crowdflag
	bool ___crowdflag_10;
	// System.Boolean bringUpMenu::noList
	bool ___noList_11;
	// System.Int32 bringUpMenu::running
	int32_t ___running_15;
	// System.Boolean bringUpMenu::operating
	bool ___operating_36;
	// System.Single bringUpMenu::mytimer
	float ___mytimer_42;
	// System.Boolean bringUpMenu::setTimer
	bool ___setTimer_43;
	// System.Boolean bringUpMenu::pause
	bool ___pause_44;
	// System.Random bringUpMenu::r
	Random_t1044426839 * ___r_48;
	// System.Single bringUpMenu::timeConst
	float ___timeConst_55;
	// System.Single bringUpMenu::changeTimeConst
	float ___changeTimeConst_56;
	// System.Single bringUpMenu::planearea
	float ___planearea_57;
	// System.Boolean bringUpMenu::simflag
	bool ___simflag_58;

public:
	inline static int32_t get_offset_of_crowdflag_10() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___crowdflag_10)); }
	inline bool get_crowdflag_10() const { return ___crowdflag_10; }
	inline bool* get_address_of_crowdflag_10() { return &___crowdflag_10; }
	inline void set_crowdflag_10(bool value)
	{
		___crowdflag_10 = value;
	}

	inline static int32_t get_offset_of_noList_11() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___noList_11)); }
	inline bool get_noList_11() const { return ___noList_11; }
	inline bool* get_address_of_noList_11() { return &___noList_11; }
	inline void set_noList_11(bool value)
	{
		___noList_11 = value;
	}

	inline static int32_t get_offset_of_running_15() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___running_15)); }
	inline int32_t get_running_15() const { return ___running_15; }
	inline int32_t* get_address_of_running_15() { return &___running_15; }
	inline void set_running_15(int32_t value)
	{
		___running_15 = value;
	}

	inline static int32_t get_offset_of_operating_36() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___operating_36)); }
	inline bool get_operating_36() const { return ___operating_36; }
	inline bool* get_address_of_operating_36() { return &___operating_36; }
	inline void set_operating_36(bool value)
	{
		___operating_36 = value;
	}

	inline static int32_t get_offset_of_mytimer_42() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___mytimer_42)); }
	inline float get_mytimer_42() const { return ___mytimer_42; }
	inline float* get_address_of_mytimer_42() { return &___mytimer_42; }
	inline void set_mytimer_42(float value)
	{
		___mytimer_42 = value;
	}

	inline static int32_t get_offset_of_setTimer_43() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___setTimer_43)); }
	inline bool get_setTimer_43() const { return ___setTimer_43; }
	inline bool* get_address_of_setTimer_43() { return &___setTimer_43; }
	inline void set_setTimer_43(bool value)
	{
		___setTimer_43 = value;
	}

	inline static int32_t get_offset_of_pause_44() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___pause_44)); }
	inline bool get_pause_44() const { return ___pause_44; }
	inline bool* get_address_of_pause_44() { return &___pause_44; }
	inline void set_pause_44(bool value)
	{
		___pause_44 = value;
	}

	inline static int32_t get_offset_of_r_48() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___r_48)); }
	inline Random_t1044426839 * get_r_48() const { return ___r_48; }
	inline Random_t1044426839 ** get_address_of_r_48() { return &___r_48; }
	inline void set_r_48(Random_t1044426839 * value)
	{
		___r_48 = value;
		Il2CppCodeGenWriteBarrier(&___r_48, value);
	}

	inline static int32_t get_offset_of_timeConst_55() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___timeConst_55)); }
	inline float get_timeConst_55() const { return ___timeConst_55; }
	inline float* get_address_of_timeConst_55() { return &___timeConst_55; }
	inline void set_timeConst_55(float value)
	{
		___timeConst_55 = value;
	}

	inline static int32_t get_offset_of_changeTimeConst_56() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___changeTimeConst_56)); }
	inline float get_changeTimeConst_56() const { return ___changeTimeConst_56; }
	inline float* get_address_of_changeTimeConst_56() { return &___changeTimeConst_56; }
	inline void set_changeTimeConst_56(float value)
	{
		___changeTimeConst_56 = value;
	}

	inline static int32_t get_offset_of_planearea_57() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___planearea_57)); }
	inline float get_planearea_57() const { return ___planearea_57; }
	inline float* get_address_of_planearea_57() { return &___planearea_57; }
	inline void set_planearea_57(float value)
	{
		___planearea_57 = value;
	}

	inline static int32_t get_offset_of_simflag_58() { return static_cast<int32_t>(offsetof(bringUpMenu_t2336637086_StaticFields, ___simflag_58)); }
	inline bool get_simflag_58() const { return ___simflag_58; }
	inline bool* get_address_of_simflag_58() { return &___simflag_58; }
	inline void set_simflag_58(bool value)
	{
		___simflag_58 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
